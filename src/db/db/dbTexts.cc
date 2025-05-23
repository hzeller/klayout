
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "dbCommon.h"

#include "dbTexts.h"
#include "dbEmptyTexts.h"
#include "dbFlatTexts.h"
#include "dbDeepTexts.h"
#include "dbOriginalLayerTexts.h"
#include "dbEdges.h"
#include "dbRegion.h"
#include "dbLayout.h"
#include "dbWriter.h"
#include "tlStream.h"
#include "tlVariant.h"

#include <sstream>

namespace db
{

Texts::Texts ()
  : mp_delegate (new EmptyTexts ())
{
  //  .. nothing yet ..
}

Texts::~Texts ()
{
  delete mp_delegate;
  mp_delegate = 0;
}

Texts::Texts (TextsDelegate *delegate)
  : mp_delegate (delegate)
{
  //  .. nothing yet ..
}

Texts::Texts (const Texts &other)
  : db::ShapeCollection (), mp_delegate (other.mp_delegate->clone ())
{
  //  .. nothing yet ..
}

Texts &Texts::operator= (const Texts &other)
{
  if (this != &other) {
    set_delegate (other.mp_delegate->clone ());
  }
  return *this;
}

Texts::Texts (const RecursiveShapeIterator &si)
{
  mp_delegate = new OriginalLayerTexts (si);
}

Texts::Texts (const RecursiveShapeIterator &si, const db::ICplxTrans &trans)
{
  mp_delegate = new OriginalLayerTexts (si, trans);
}

Texts::Texts (const RecursiveShapeIterator &si, DeepShapeStore &dss)
{
  mp_delegate = new DeepTexts (si, dss);
}

Texts::Texts (const RecursiveShapeIterator &si, DeepShapeStore &dss, const db::ICplxTrans &trans)
{
  mp_delegate = new DeepTexts (si, dss, trans);
}

Texts::Texts (DeepShapeStore &dss)
{
  tl_assert (dss.is_singular ());
  unsigned int layout_index = 0; // singular layout index
  mp_delegate = new DeepTexts (DeepLayer (&dss, layout_index, dss.layout (layout_index).insert_layer ()));
}

void
Texts::write (const std::string &fn) const
{
  //  method provided for debugging purposes

  db::Layout layout;
  const db::Cell &top = layout.cell (layout.add_cell ("TEXTS"));
  unsigned int li = layout.insert_layer (db::LayerProperties (0, 0));
  insert_into (&layout, top.cell_index (), li);

  tl::OutputStream os (fn);
  db::SaveLayoutOptions opt;
  opt.set_format_from_filename (fn);
  db::Writer writer (opt);
  writer.write (layout, os);
}

template <class Sh>
void Texts::insert (const Sh &shape)
{
  mutable_texts ()->insert (shape);
}

template DB_PUBLIC void Texts::insert (const db::Text &);
template DB_PUBLIC void Texts::insert (const db::TextWithProperties &);

void Texts::insert (const db::Shape &shape)
{
  mutable_texts ()->insert (shape);
}

template <class T>
void Texts::insert (const db::Shape &shape, const T &trans)
{
  mutable_texts ()->insert (shape, trans);
}

template DB_PUBLIC void Texts::insert (const db::Shape &, const db::ICplxTrans &);
template DB_PUBLIC void Texts::insert (const db::Shape &, const db::Trans &);
template DB_PUBLIC void Texts::insert (const db::Shape &, const db::Disp &);
template DB_PUBLIC void Texts::insert (const db::Shape &, const db::IMatrix2d &);
template DB_PUBLIC void Texts::insert (const db::Shape &, const db::IMatrix3d &);

void Texts::clear ()
{
  set_delegate (new EmptyTexts ());
}

void Texts::reserve (size_t n)
{
  mutable_texts ()->reserve (n);
}

void Texts::flatten ()
{
  mutable_texts ()->flatten ();
}

template <class T>
Texts &Texts::transform (const T &trans)
{
  mutable_texts ()->transform (trans);
  return *this;
}

//  explicit instantiations
template DB_PUBLIC Texts &Texts::transform (const db::ICplxTrans &);
template DB_PUBLIC Texts &Texts::transform (const db::Trans &);
template DB_PUBLIC Texts &Texts::transform (const db::Disp &);

const db::RecursiveShapeIterator &
Texts::iter () const
{
  static db::RecursiveShapeIterator def_iter;
  const db::RecursiveShapeIterator *i = mp_delegate ? mp_delegate->iter () : 0;
  return *(i ? i : &def_iter);
}

void Texts::polygons (Region &output, db::Coord e, const tl::Variant &text_prop) const
{
  output.set_delegate (mp_delegate->polygons (e, text_prop));
}

void Texts::edges (Edges &output) const
{
  output.set_delegate (mp_delegate->edges ());
}

void Texts::set_delegate (TextsDelegate *delegate)
{
  if (delegate != mp_delegate) {
    delete mp_delegate;
    mp_delegate = delegate;
  }
}

MutableTexts *Texts::mutable_texts ()
{
  MutableTexts *texts = dynamic_cast<MutableTexts *> (mp_delegate);
  if (! texts) {
    texts = new FlatTexts ();
    if (mp_delegate) {
      texts->TextsDelegate::operator= (*mp_delegate);
      texts->insert_seq (begin ());
    }
    set_delegate (texts);
  }

  return texts;
}

Texts Texts::processed (const TextProcessorBase &proc) const
{
  return Texts (mp_delegate->processed (proc));
}

void Texts::processed (Region &output, const TextToPolygonProcessorBase &filter) const
{
  output = Region (mp_delegate->processed_to_polygons (filter));
}

void Texts::pull_interacting (Region &output, const Region &other) const
{
  output = Region (mp_delegate->pull_interacting (other));
}

}

namespace tl
{
  template<> DB_PUBLIC bool test_extractor_impl (tl::Extractor &ex, db::Texts &b)
  {
    db::Text ep;

    if (ex.at_end ()) {
      return true;
    }
    if (! ex.try_read (ep)) {
      return false;
    }
    b.insert (ep);

    while (ex.test (";")) {
      ex.read (ep);
      b.insert (ep);
    } 

    return true;
  }

  template<> DB_PUBLIC void extractor_impl (tl::Extractor &ex, db::Texts &b)
  {
    if (! test_extractor_impl (ex, b)) {
      ex.error (tl::to_string (tr ("Expected an edge pair collection specification")));
    }
  }
}

