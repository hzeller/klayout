
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


#include "dbStream.h"
#include "tlClassRegistry.h"
#include "tlXMLParser.h"

#include <string.h>

namespace db
{

// ------------------------------------------------------------------
//  Implementation of StreamFormatDeclaration

std::string StreamFormatDeclaration::all_formats_string ()
{
  std::string fmts = tl::to_string (tr ("All layout files ("));

  for (tl::Registrar<db::StreamFormatDeclaration>::iterator rdr = tl::Registrar<db::StreamFormatDeclaration>::begin (); rdr != tl::Registrar<db::StreamFormatDeclaration>::end (); ++rdr) {
    if (rdr != tl::Registrar<db::StreamFormatDeclaration>::begin ()) {
      fmts += " ";
    }
    std::string f = rdr->file_format ();
    if (!f.empty ()) {
      const char *fp = f.c_str ();
      while (*fp && *fp != '(') {
        ++fp;
      }
      if (*fp) {
        ++fp;
      }
      while (*fp && *fp != ')') {
        fmts += *fp++;
      }
    }
  }
  fmts += ")";
  for (tl::Registrar<db::StreamFormatDeclaration>::iterator rdr = tl::Registrar<db::StreamFormatDeclaration>::begin (); rdr != tl::Registrar<db::StreamFormatDeclaration>::end (); ++rdr) {
    if (!rdr->file_format ().empty ()) {
      fmts += ";;";
      fmts += rdr->file_format ();
    }
  }

  return fmts;
}

// ------------------------------------------------------------------
//  Implementation of load_options_xml_element_list


tl::XMLElementList load_options_xml_element_list ()
{
  tl::XMLElementList elements;

  for (tl::Registrar<db::StreamFormatDeclaration>::iterator cls = tl::Registrar<db::StreamFormatDeclaration>::begin (); cls != tl::Registrar<db::StreamFormatDeclaration>::end (); ++cls) {
    const db::StreamFormatDeclaration *decl = dynamic_cast <const db::StreamFormatDeclaration *> (&*cls);
    if (decl) {
      elements.append (decl->xml_reader_options_element ());
    }
  }

  return elements;
}

tl::XMLElementList save_options_xml_element_list ()
{
  tl::XMLElementList elements;
  elements.append (tl::make_member (&db::SaveLayoutOptions::format, &db::SaveLayoutOptions::set_format, "format"));

  for (tl::Registrar<db::StreamFormatDeclaration>::iterator cls = tl::Registrar<db::StreamFormatDeclaration>::begin (); cls != tl::Registrar<db::StreamFormatDeclaration>::end (); ++cls) {
    const StreamFormatDeclaration *decl = dynamic_cast <const StreamFormatDeclaration *> (&*cls);
    if (decl) {
      elements.append (decl->xml_writer_options_element ());
    }
  }

  return elements;
}

}


