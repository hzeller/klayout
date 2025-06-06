
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
*  @file gsiDeclQTextImageFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextImageFormat>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QPen>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextImageFormat

//  Constructor QTextImageFormat::QTextImageFormat()


static void _init_ctor_QTextImageFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextImageFormat> ();
}

static void _call_ctor_QTextImageFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextImageFormat *> (new QTextImageFormat ());
}


// double QTextImageFormat::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextImageFormat *)cls)->height ());
}


// bool QTextImageFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextImageFormat *)cls)->isValid ());
}


// QString QTextImageFormat::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextImageFormat *)cls)->name ());
}


// void QTextImageFormat::setHeight(double height)


static void _init_f_setHeight_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("height");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHeight_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextImageFormat *)cls)->setHeight (arg1);
}


// void QTextImageFormat::setName(const QString &name)


static void _init_f_setName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextImageFormat *)cls)->setName (arg1);
}


// void QTextImageFormat::setWidth(double width)


static void _init_f_setWidth_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextImageFormat *)cls)->setWidth (arg1);
}


// double QTextImageFormat::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextImageFormat *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QTextImageFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextImageFormat::QTextImageFormat()\nThis method creates an object of class QTextImageFormat.", &_init_ctor_QTextImageFormat_0, &_call_ctor_QTextImageFormat_0);
  methods += new qt_gsi::GenericMethod (":height", "@brief Method double QTextImageFormat::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextImageFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":name", "@brief Method QString QTextImageFormat::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("setHeight|height=", "@brief Method void QTextImageFormat::setHeight(double height)\n", false, &_init_f_setHeight_1071, &_call_f_setHeight_1071);
  methods += new qt_gsi::GenericMethod ("setName|name=", "@brief Method void QTextImageFormat::setName(const QString &name)\n", false, &_init_f_setName_2025, &_call_f_setName_2025);
  methods += new qt_gsi::GenericMethod ("setWidth|width=", "@brief Method void QTextImageFormat::setWidth(double width)\n", false, &_init_f_setWidth_1071, &_call_f_setWidth_1071);
  methods += new qt_gsi::GenericMethod (":width", "@brief Method double QTextImageFormat::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QTextCharFormat> &qtdecl_QTextCharFormat ();

gsi::Class<QTextImageFormat> decl_QTextImageFormat (qtdecl_QTextCharFormat (), "QtGui", "QTextImageFormat",
  methods_QTextImageFormat (),
  "@qt\n@brief Binding of QTextImageFormat");


GSI_QTGUI_PUBLIC gsi::Class<QTextImageFormat> &qtdecl_QTextImageFormat () { return decl_QTextImageFormat; }

}

