
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

/**
*  @file gsiDeclQUndoCommand.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QUndoCommand>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QUndoCommand

// const QUndoCommand *QUndoCommand::child(int index)


static void _init_f_child_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const QUndoCommand * > ();
}

static void _call_f_child_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<const QUndoCommand * > ((const QUndoCommand *)((QUndoCommand *)cls)->child (arg1));
}


// int QUndoCommand::childCount()


static void _init_f_childCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_childCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QUndoCommand *)cls)->childCount ());
}


// int QUndoCommand::id()


static void _init_f_id_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_id_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QUndoCommand *)cls)->id ());
}


// bool QUndoCommand::mergeWith(const QUndoCommand *other)


static void _init_f_mergeWith_2507 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QUndoCommand * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_mergeWith_2507 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUndoCommand *arg1 = gsi::arg_reader<const QUndoCommand * >() (args, heap);
  ret.write<bool > ((bool)((QUndoCommand *)cls)->mergeWith (arg1));
}


// void QUndoCommand::redo()


static void _init_f_redo_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_redo_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoCommand *)cls)->redo ();
}


// void QUndoCommand::setText(const QString &text)


static void _init_f_setText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoCommand *)cls)->setText (arg1);
}


// QString QUndoCommand::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QUndoCommand *)cls)->text ());
}


// void QUndoCommand::undo()


static void _init_f_undo_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_undo_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoCommand *)cls)->undo ();
}


namespace gsi
{

static gsi::Methods methods_QUndoCommand () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("child", "@brief Method const QUndoCommand *QUndoCommand::child(int index)\n", true, &_init_f_child_c767, &_call_f_child_c767);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Method int QUndoCommand::childCount()\n", true, &_init_f_childCount_c0, &_call_f_childCount_c0);
  methods += new qt_gsi::GenericMethod ("id", "@brief Method int QUndoCommand::id()\n", true, &_init_f_id_c0, &_call_f_id_c0);
  methods += new qt_gsi::GenericMethod ("mergeWith", "@brief Method bool QUndoCommand::mergeWith(const QUndoCommand *other)\n", false, &_init_f_mergeWith_2507, &_call_f_mergeWith_2507);
  methods += new qt_gsi::GenericMethod ("redo", "@brief Method void QUndoCommand::redo()\n", false, &_init_f_redo_0, &_call_f_redo_0);
  methods += new qt_gsi::GenericMethod ("setText|text=", "@brief Method void QUndoCommand::setText(const QString &text)\n", false, &_init_f_setText_2025, &_call_f_setText_2025);
  methods += new qt_gsi::GenericMethod (":text", "@brief Method QString QUndoCommand::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod ("undo", "@brief Method void QUndoCommand::undo()\n", false, &_init_f_undo_0, &_call_f_undo_0);
  return methods;
}

gsi::Class<QUndoCommand> decl_QUndoCommand ("QtGui", "QUndoCommand_Native",
  methods_QUndoCommand (),
  "@hide\n@alias QUndoCommand");

GSI_QTGUI_PUBLIC gsi::Class<QUndoCommand> &qtdecl_QUndoCommand () { return decl_QUndoCommand; }

}


class QUndoCommand_Adaptor : public QUndoCommand, public qt_gsi::QtObjectBase
{
public:

  virtual ~QUndoCommand_Adaptor();

  //  [adaptor ctor] QUndoCommand::QUndoCommand(QUndoCommand *parent)
  QUndoCommand_Adaptor() : QUndoCommand()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QUndoCommand::QUndoCommand(QUndoCommand *parent)
  QUndoCommand_Adaptor(QUndoCommand *parent) : QUndoCommand(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QUndoCommand::QUndoCommand(const QString &text, QUndoCommand *parent)
  QUndoCommand_Adaptor(const QString &text) : QUndoCommand(text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QUndoCommand::QUndoCommand(const QString &text, QUndoCommand *parent)
  QUndoCommand_Adaptor(const QString &text, QUndoCommand *parent) : QUndoCommand(text, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] int QUndoCommand::id()
  int cbs_id_c0_0() const
  {
    return QUndoCommand::id();
  }

  virtual int id() const
  {
    if (cb_id_c0_0.can_issue()) {
      return cb_id_c0_0.issue<QUndoCommand_Adaptor, int>(&QUndoCommand_Adaptor::cbs_id_c0_0);
    } else {
      return QUndoCommand::id();
    }
  }

  //  [adaptor impl] bool QUndoCommand::mergeWith(const QUndoCommand *other)
  bool cbs_mergeWith_2507_0(const QUndoCommand *other)
  {
    return QUndoCommand::mergeWith(other);
  }

  virtual bool mergeWith(const QUndoCommand *other)
  {
    if (cb_mergeWith_2507_0.can_issue()) {
      return cb_mergeWith_2507_0.issue<QUndoCommand_Adaptor, bool, const QUndoCommand *>(&QUndoCommand_Adaptor::cbs_mergeWith_2507_0, other);
    } else {
      return QUndoCommand::mergeWith(other);
    }
  }

  //  [adaptor impl] void QUndoCommand::redo()
  void cbs_redo_0_0()
  {
    QUndoCommand::redo();
  }

  virtual void redo()
  {
    if (cb_redo_0_0.can_issue()) {
      cb_redo_0_0.issue<QUndoCommand_Adaptor>(&QUndoCommand_Adaptor::cbs_redo_0_0);
    } else {
      QUndoCommand::redo();
    }
  }

  //  [adaptor impl] void QUndoCommand::undo()
  void cbs_undo_0_0()
  {
    QUndoCommand::undo();
  }

  virtual void undo()
  {
    if (cb_undo_0_0.can_issue()) {
      cb_undo_0_0.issue<QUndoCommand_Adaptor>(&QUndoCommand_Adaptor::cbs_undo_0_0);
    } else {
      QUndoCommand::undo();
    }
  }

  gsi::Callback cb_id_c0_0;
  gsi::Callback cb_mergeWith_2507_0;
  gsi::Callback cb_redo_0_0;
  gsi::Callback cb_undo_0_0;
};

QUndoCommand_Adaptor::~QUndoCommand_Adaptor() { }

//  Constructor QUndoCommand::QUndoCommand(QUndoCommand *parent) (adaptor class)

static void _init_ctor_QUndoCommand_Adaptor_1812 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QUndoCommand * > (argspec_0);
  decl->set_return_new<QUndoCommand_Adaptor> ();
}

static void _call_ctor_QUndoCommand_Adaptor_1812 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUndoCommand *arg1 = args ? gsi::arg_reader<QUndoCommand * >() (args, heap) : gsi::arg_maker<QUndoCommand * >() (0, heap);
  ret.write<QUndoCommand_Adaptor *> (new QUndoCommand_Adaptor (arg1));
}


//  Constructor QUndoCommand::QUndoCommand(const QString &text, QUndoCommand *parent) (adaptor class)

static void _init_ctor_QUndoCommand_Adaptor_3729 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QUndoCommand * > (argspec_1);
  decl->set_return_new<QUndoCommand_Adaptor> ();
}

static void _call_ctor_QUndoCommand_Adaptor_3729 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QUndoCommand *arg2 = args ? gsi::arg_reader<QUndoCommand * >() (args, heap) : gsi::arg_maker<QUndoCommand * >() (0, heap);
  ret.write<QUndoCommand_Adaptor *> (new QUndoCommand_Adaptor (arg1, arg2));
}


// int QUndoCommand::id()

static void _init_cbs_id_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_id_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QUndoCommand_Adaptor *)cls)->cbs_id_c0_0 ());
}

static void _set_callback_cbs_id_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoCommand_Adaptor *)cls)->cb_id_c0_0 = cb;
}


// bool QUndoCommand::mergeWith(const QUndoCommand *other)

static void _init_cbs_mergeWith_2507_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QUndoCommand * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_mergeWith_2507_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUndoCommand *arg1 = args.read<const QUndoCommand * > (heap);
  ret.write<bool > ((bool)((QUndoCommand_Adaptor *)cls)->cbs_mergeWith_2507_0 (arg1));
}

static void _set_callback_cbs_mergeWith_2507_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoCommand_Adaptor *)cls)->cb_mergeWith_2507_0 = cb;
}


// void QUndoCommand::redo()

static void _init_cbs_redo_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_redo_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoCommand_Adaptor *)cls)->cbs_redo_0_0 ();
}

static void _set_callback_cbs_redo_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoCommand_Adaptor *)cls)->cb_redo_0_0 = cb;
}


// void QUndoCommand::undo()

static void _init_cbs_undo_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_undo_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoCommand_Adaptor *)cls)->cbs_undo_0_0 ();
}

static void _set_callback_cbs_undo_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoCommand_Adaptor *)cls)->cb_undo_0_0 = cb;
}


namespace gsi
{

gsi::Class<QUndoCommand> &qtdecl_QUndoCommand ();

static gsi::Methods methods_QUndoCommand_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUndoCommand::QUndoCommand(QUndoCommand *parent)\nThis method creates an object of class QUndoCommand.", &_init_ctor_QUndoCommand_Adaptor_1812, &_call_ctor_QUndoCommand_Adaptor_1812);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUndoCommand::QUndoCommand(const QString &text, QUndoCommand *parent)\nThis method creates an object of class QUndoCommand.", &_init_ctor_QUndoCommand_Adaptor_3729, &_call_ctor_QUndoCommand_Adaptor_3729);
  methods += new qt_gsi::GenericMethod ("id", "@brief Virtual method int QUndoCommand::id()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_id_c0_0, &_call_cbs_id_c0_0);
  methods += new qt_gsi::GenericMethod ("id", "@hide", true, &_init_cbs_id_c0_0, &_call_cbs_id_c0_0, &_set_callback_cbs_id_c0_0);
  methods += new qt_gsi::GenericMethod ("mergeWith", "@brief Virtual method bool QUndoCommand::mergeWith(const QUndoCommand *other)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_mergeWith_2507_0, &_call_cbs_mergeWith_2507_0);
  methods += new qt_gsi::GenericMethod ("mergeWith", "@hide", false, &_init_cbs_mergeWith_2507_0, &_call_cbs_mergeWith_2507_0, &_set_callback_cbs_mergeWith_2507_0);
  methods += new qt_gsi::GenericMethod ("redo", "@brief Virtual method void QUndoCommand::redo()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_redo_0_0, &_call_cbs_redo_0_0);
  methods += new qt_gsi::GenericMethod ("redo", "@hide", false, &_init_cbs_redo_0_0, &_call_cbs_redo_0_0, &_set_callback_cbs_redo_0_0);
  methods += new qt_gsi::GenericMethod ("undo", "@brief Virtual method void QUndoCommand::undo()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_undo_0_0, &_call_cbs_undo_0_0);
  methods += new qt_gsi::GenericMethod ("undo", "@hide", false, &_init_cbs_undo_0_0, &_call_cbs_undo_0_0, &_set_callback_cbs_undo_0_0);
  return methods;
}

gsi::Class<QUndoCommand_Adaptor> decl_QUndoCommand_Adaptor (qtdecl_QUndoCommand (), "QtGui", "QUndoCommand",
  methods_QUndoCommand_Adaptor (),
  "@qt\n@brief Binding of QUndoCommand");

}

