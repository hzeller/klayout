
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
*  @file gsiDeclQPropertyObserver.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPropertyObserver>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPropertyObserver

//  Constructor QPropertyObserver::QPropertyObserver()


static void _init_ctor_QPropertyObserver_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPropertyObserver> ();
}

static void _call_ctor_QPropertyObserver_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPropertyObserver *> (new QPropertyObserver ());
}



namespace gsi
{

static gsi::Methods methods_QPropertyObserver () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyObserver::QPropertyObserver()\nThis method creates an object of class QPropertyObserver.", &_init_ctor_QPropertyObserver_0, &_call_ctor_QPropertyObserver_0);
  return methods;
}

gsi::Class<QPropertyObserverBase> &qtdecl_QPropertyObserverBase ();

gsi::Class<QPropertyObserver> decl_QPropertyObserver (qtdecl_QPropertyObserverBase (), "QtCore", "QPropertyObserver",
  methods_QPropertyObserver (),
  "@qt\n@brief Binding of QPropertyObserver");


GSI_QTCORE_PUBLIC gsi::Class<QPropertyObserver> &qtdecl_QPropertyObserver () { return decl_QPropertyObserver; }

}

