
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
*  @file gsiDeclQEventPoint.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEventPoint>
#include <QPointF>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QSizeF>
#include <QVector2D>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEventPoint

//  Constructor QEventPoint::QEventPoint(int id, const QPointingDevice *device)


static void _init_ctor_QEventPoint_3489 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id", true, "-1");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device", true, "nullptr");
  decl->add_arg<const QPointingDevice * > (argspec_1);
  decl->set_return_new<QEventPoint> ();
}

static void _call_ctor_QEventPoint_3489 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  const QPointingDevice *arg2 = args ? gsi::arg_reader<const QPointingDevice * >() (args, heap) : gsi::arg_maker<const QPointingDevice * >() (nullptr, heap);
  ret.write<QEventPoint *> (new QEventPoint (arg1, arg2));
}


//  Constructor QEventPoint::QEventPoint(int pointId, QEventPoint::State state, const QPointF &scenePosition, const QPointF &globalPosition)


static void _init_ctor_QEventPoint_6597 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pointId");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state");
  decl->add_arg<const qt_gsi::Converter<QEventPoint::State>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("scenePosition");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("globalPosition");
  decl->add_arg<const QPointF & > (argspec_3);
  decl->set_return_new<QEventPoint> ();
}

static void _call_ctor_QEventPoint_6597 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QEventPoint::State>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QEventPoint::State>::target_type & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QEventPoint *> (new QEventPoint (arg1, qt_gsi::QtToCppAdaptor<QEventPoint::State>(arg2).cref(), arg3, arg4));
}


//  Constructor QEventPoint::QEventPoint(const QEventPoint &other)


static void _init_ctor_QEventPoint_2430 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return_new<QEventPoint> ();
}

static void _call_ctor_QEventPoint_2430 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  ret.write<QEventPoint *> (new QEventPoint (arg1));
}


// const QPointingDevice *QEventPoint::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointingDevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointingDevice * > ((const QPointingDevice *)((QEventPoint *)cls)->device ());
}


// QSizeF QEventPoint::ellipseDiameters()


static void _init_f_ellipseDiameters_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSizeF > ();
}

static void _call_f_ellipseDiameters_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSizeF > ((QSizeF)((QEventPoint *)cls)->ellipseDiameters ());
}


// QPointF QEventPoint::globalGrabPosition()


static void _init_f_globalGrabPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_globalGrabPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->globalGrabPosition ());
}


// QPointF QEventPoint::globalLastPosition()


static void _init_f_globalLastPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_globalLastPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->globalLastPosition ());
}


// QPointF QEventPoint::globalPosition()


static void _init_f_globalPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_globalPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->globalPosition ());
}


// QPointF QEventPoint::globalPressPosition()


static void _init_f_globalPressPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_globalPressPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->globalPressPosition ());
}


// QPointF QEventPoint::grabPosition()


static void _init_f_grabPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_grabPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->grabPosition ());
}


// int QEventPoint::id()


static void _init_f_id_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_id_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEventPoint *)cls)->id ());
}


// bool QEventPoint::isAccepted()


static void _init_f_isAccepted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAccepted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEventPoint *)cls)->isAccepted ());
}


// QPointF QEventPoint::lastNormalizedPos()


static void _init_f_lastNormalizedPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastNormalizedPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->lastNormalizedPos ());
}


// QPointF QEventPoint::lastPos()


static void _init_f_lastPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->lastPos ());
}


// QPointF QEventPoint::lastPosition()


static void _init_f_lastPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->lastPosition ());
}


// QPointF QEventPoint::lastScenePos()


static void _init_f_lastScenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastScenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->lastScenePos ());
}


// QPointF QEventPoint::lastScreenPos()


static void _init_f_lastScreenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastScreenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->lastScreenPos ());
}


// unsigned long int QEventPoint::lastTimestamp()


static void _init_f_lastTimestamp_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned long int > ();
}

static void _call_f_lastTimestamp_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned long int > ((unsigned long int)((QEventPoint *)cls)->lastTimestamp ());
}


// QPointF QEventPoint::normalizedPos()


static void _init_f_normalizedPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_normalizedPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->normalizedPos ());
}


// QPointF QEventPoint::normalizedPosition()


static void _init_f_normalizedPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_normalizedPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->normalizedPosition ());
}


// bool QEventPoint::operator!=(const QEventPoint &other)


static void _init_f_operator_excl__eq__c2430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  ret.write<bool > ((bool)((QEventPoint *)cls)->operator!= (arg1));
}


// QEventPoint &QEventPoint::operator=(const QEventPoint &other)


static void _init_f_operator_eq__2430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return<QEventPoint & > ();
}

static void _call_f_operator_eq__2430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  ret.write<QEventPoint & > ((QEventPoint &)((QEventPoint *)cls)->operator= (arg1));
}


// bool QEventPoint::operator==(const QEventPoint &other)


static void _init_f_operator_eq__eq__c2430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  ret.write<bool > ((bool)((QEventPoint *)cls)->operator== (arg1));
}


// QPointF QEventPoint::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->pos ());
}


// QPointF QEventPoint::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->position ());
}


// QPointF QEventPoint::pressPosition()


static void _init_f_pressPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_pressPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->pressPosition ());
}


// unsigned long int QEventPoint::pressTimestamp()


static void _init_f_pressTimestamp_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned long int > ();
}

static void _call_f_pressTimestamp_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned long int > ((unsigned long int)((QEventPoint *)cls)->pressTimestamp ());
}


// double QEventPoint::pressure()


static void _init_f_pressure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_pressure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QEventPoint *)cls)->pressure ());
}


// double QEventPoint::rotation()


static void _init_f_rotation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rotation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QEventPoint *)cls)->rotation ());
}


// QPointF QEventPoint::sceneGrabPosition()


static void _init_f_sceneGrabPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_sceneGrabPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->sceneGrabPosition ());
}


// QPointF QEventPoint::sceneLastPosition()


static void _init_f_sceneLastPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_sceneLastPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->sceneLastPosition ());
}


// QPointF QEventPoint::scenePos()


static void _init_f_scenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_scenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->scenePos ());
}


// QPointF QEventPoint::scenePosition()


static void _init_f_scenePosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_scenePosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->scenePosition ());
}


// QPointF QEventPoint::scenePressPosition()


static void _init_f_scenePressPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_scenePressPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->scenePressPosition ());
}


// QPointF QEventPoint::screenPos()


static void _init_f_screenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_screenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->screenPos ());
}


// void QEventPoint::setAccepted(bool accepted)


static void _init_f_setAccepted_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted", true, "true");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAccepted_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (true, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventPoint *)cls)->setAccepted (arg1);
}


// QPointF QEventPoint::startNormalizedPos()


static void _init_f_startNormalizedPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_startNormalizedPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->startNormalizedPos ());
}


// QPointF QEventPoint::startPos()


static void _init_f_startPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_startPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->startPos ());
}


// QPointF QEventPoint::startScenePos()


static void _init_f_startScenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_startScenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->startScenePos ());
}


// QPointF QEventPoint::startScreenPos()


static void _init_f_startScreenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_startScreenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEventPoint *)cls)->startScreenPos ());
}


// QEventPoint::State QEventPoint::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QEventPoint::State>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QEventPoint::State>::target_type > ((qt_gsi::Converter<QEventPoint::State>::target_type)qt_gsi::CppToQtAdaptor<QEventPoint::State>(((QEventPoint *)cls)->state ()));
}


// void QEventPoint::swap(QEventPoint &other)


static void _init_f_swap_1735 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QEventPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1735 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEventPoint &arg1 = gsi::arg_reader<QEventPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventPoint *)cls)->swap (arg1);
}


// double QEventPoint::timeHeld()


static void _init_f_timeHeld_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_timeHeld_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QEventPoint *)cls)->timeHeld ());
}


// unsigned long int QEventPoint::timestamp()


static void _init_f_timestamp_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned long int > ();
}

static void _call_f_timestamp_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned long int > ((unsigned long int)((QEventPoint *)cls)->timestamp ());
}


// QPointingDeviceUniqueId QEventPoint::uniqueId()


static void _init_f_uniqueId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointingDeviceUniqueId > ();
}

static void _call_f_uniqueId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointingDeviceUniqueId > ((QPointingDeviceUniqueId)((QEventPoint *)cls)->uniqueId ());
}


// QVector2D QEventPoint::velocity()


static void _init_f_velocity_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector2D > ();
}

static void _call_f_velocity_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector2D > ((QVector2D)((QEventPoint *)cls)->velocity ());
}



namespace gsi
{

static gsi::Methods methods_QEventPoint () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEventPoint::QEventPoint(int id, const QPointingDevice *device)\nThis method creates an object of class QEventPoint.", &_init_ctor_QEventPoint_3489, &_call_ctor_QEventPoint_3489);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEventPoint::QEventPoint(int pointId, QEventPoint::State state, const QPointF &scenePosition, const QPointF &globalPosition)\nThis method creates an object of class QEventPoint.", &_init_ctor_QEventPoint_6597, &_call_ctor_QEventPoint_6597);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEventPoint::QEventPoint(const QEventPoint &other)\nThis method creates an object of class QEventPoint.", &_init_ctor_QEventPoint_2430, &_call_ctor_QEventPoint_2430);
  methods += new qt_gsi::GenericMethod ("device", "@brief Method const QPointingDevice *QEventPoint::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("ellipseDiameters", "@brief Method QSizeF QEventPoint::ellipseDiameters()\n", true, &_init_f_ellipseDiameters_c0, &_call_f_ellipseDiameters_c0);
  methods += new qt_gsi::GenericMethod ("globalGrabPosition", "@brief Method QPointF QEventPoint::globalGrabPosition()\n", true, &_init_f_globalGrabPosition_c0, &_call_f_globalGrabPosition_c0);
  methods += new qt_gsi::GenericMethod ("globalLastPosition", "@brief Method QPointF QEventPoint::globalLastPosition()\n", true, &_init_f_globalLastPosition_c0, &_call_f_globalLastPosition_c0);
  methods += new qt_gsi::GenericMethod ("globalPosition", "@brief Method QPointF QEventPoint::globalPosition()\n", true, &_init_f_globalPosition_c0, &_call_f_globalPosition_c0);
  methods += new qt_gsi::GenericMethod ("globalPressPosition", "@brief Method QPointF QEventPoint::globalPressPosition()\n", true, &_init_f_globalPressPosition_c0, &_call_f_globalPressPosition_c0);
  methods += new qt_gsi::GenericMethod ("grabPosition", "@brief Method QPointF QEventPoint::grabPosition()\n", true, &_init_f_grabPosition_c0, &_call_f_grabPosition_c0);
  methods += new qt_gsi::GenericMethod ("id", "@brief Method int QEventPoint::id()\n", true, &_init_f_id_c0, &_call_f_id_c0);
  methods += new qt_gsi::GenericMethod ("isAccepted?|:accepted", "@brief Method bool QEventPoint::isAccepted()\n", true, &_init_f_isAccepted_c0, &_call_f_isAccepted_c0);
  methods += new qt_gsi::GenericMethod ("lastNormalizedPos", "@brief Method QPointF QEventPoint::lastNormalizedPos()\n", true, &_init_f_lastNormalizedPos_c0, &_call_f_lastNormalizedPos_c0);
  methods += new qt_gsi::GenericMethod ("lastPos", "@brief Method QPointF QEventPoint::lastPos()\n", true, &_init_f_lastPos_c0, &_call_f_lastPos_c0);
  methods += new qt_gsi::GenericMethod ("lastPosition", "@brief Method QPointF QEventPoint::lastPosition()\n", true, &_init_f_lastPosition_c0, &_call_f_lastPosition_c0);
  methods += new qt_gsi::GenericMethod ("lastScenePos", "@brief Method QPointF QEventPoint::lastScenePos()\n", true, &_init_f_lastScenePos_c0, &_call_f_lastScenePos_c0);
  methods += new qt_gsi::GenericMethod ("lastScreenPos", "@brief Method QPointF QEventPoint::lastScreenPos()\n", true, &_init_f_lastScreenPos_c0, &_call_f_lastScreenPos_c0);
  methods += new qt_gsi::GenericMethod ("lastTimestamp", "@brief Method unsigned long int QEventPoint::lastTimestamp()\n", true, &_init_f_lastTimestamp_c0, &_call_f_lastTimestamp_c0);
  methods += new qt_gsi::GenericMethod ("normalizedPos", "@brief Method QPointF QEventPoint::normalizedPos()\n", true, &_init_f_normalizedPos_c0, &_call_f_normalizedPos_c0);
  methods += new qt_gsi::GenericMethod ("normalizedPosition", "@brief Method QPointF QEventPoint::normalizedPosition()\n", true, &_init_f_normalizedPosition_c0, &_call_f_normalizedPosition_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QEventPoint::operator!=(const QEventPoint &other)\n", true, &_init_f_operator_excl__eq__c2430, &_call_f_operator_excl__eq__c2430);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QEventPoint &QEventPoint::operator=(const QEventPoint &other)\n", false, &_init_f_operator_eq__2430, &_call_f_operator_eq__2430);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QEventPoint::operator==(const QEventPoint &other)\n", true, &_init_f_operator_eq__eq__c2430, &_call_f_operator_eq__eq__c2430);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPointF QEventPoint::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("position", "@brief Method QPointF QEventPoint::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("pressPosition", "@brief Method QPointF QEventPoint::pressPosition()\n", true, &_init_f_pressPosition_c0, &_call_f_pressPosition_c0);
  methods += new qt_gsi::GenericMethod ("pressTimestamp", "@brief Method unsigned long int QEventPoint::pressTimestamp()\n", true, &_init_f_pressTimestamp_c0, &_call_f_pressTimestamp_c0);
  methods += new qt_gsi::GenericMethod ("pressure", "@brief Method double QEventPoint::pressure()\n", true, &_init_f_pressure_c0, &_call_f_pressure_c0);
  methods += new qt_gsi::GenericMethod ("rotation", "@brief Method double QEventPoint::rotation()\n", true, &_init_f_rotation_c0, &_call_f_rotation_c0);
  methods += new qt_gsi::GenericMethod ("sceneGrabPosition", "@brief Method QPointF QEventPoint::sceneGrabPosition()\n", true, &_init_f_sceneGrabPosition_c0, &_call_f_sceneGrabPosition_c0);
  methods += new qt_gsi::GenericMethod ("sceneLastPosition", "@brief Method QPointF QEventPoint::sceneLastPosition()\n", true, &_init_f_sceneLastPosition_c0, &_call_f_sceneLastPosition_c0);
  methods += new qt_gsi::GenericMethod ("scenePos", "@brief Method QPointF QEventPoint::scenePos()\n", true, &_init_f_scenePos_c0, &_call_f_scenePos_c0);
  methods += new qt_gsi::GenericMethod ("scenePosition", "@brief Method QPointF QEventPoint::scenePosition()\n", true, &_init_f_scenePosition_c0, &_call_f_scenePosition_c0);
  methods += new qt_gsi::GenericMethod ("scenePressPosition", "@brief Method QPointF QEventPoint::scenePressPosition()\n", true, &_init_f_scenePressPosition_c0, &_call_f_scenePressPosition_c0);
  methods += new qt_gsi::GenericMethod ("screenPos", "@brief Method QPointF QEventPoint::screenPos()\n", true, &_init_f_screenPos_c0, &_call_f_screenPos_c0);
  methods += new qt_gsi::GenericMethod ("setAccepted|accepted=", "@brief Method void QEventPoint::setAccepted(bool accepted)\n", false, &_init_f_setAccepted_864, &_call_f_setAccepted_864);
  methods += new qt_gsi::GenericMethod ("startNormalizedPos", "@brief Method QPointF QEventPoint::startNormalizedPos()\n", true, &_init_f_startNormalizedPos_c0, &_call_f_startNormalizedPos_c0);
  methods += new qt_gsi::GenericMethod ("startPos", "@brief Method QPointF QEventPoint::startPos()\n", true, &_init_f_startPos_c0, &_call_f_startPos_c0);
  methods += new qt_gsi::GenericMethod ("startScenePos", "@brief Method QPointF QEventPoint::startScenePos()\n", true, &_init_f_startScenePos_c0, &_call_f_startScenePos_c0);
  methods += new qt_gsi::GenericMethod ("startScreenPos", "@brief Method QPointF QEventPoint::startScreenPos()\n", true, &_init_f_startScreenPos_c0, &_call_f_startScreenPos_c0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QEventPoint::State QEventPoint::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QEventPoint::swap(QEventPoint &other)\n", false, &_init_f_swap_1735, &_call_f_swap_1735);
  methods += new qt_gsi::GenericMethod ("timeHeld", "@brief Method double QEventPoint::timeHeld()\n", true, &_init_f_timeHeld_c0, &_call_f_timeHeld_c0);
  methods += new qt_gsi::GenericMethod ("timestamp", "@brief Method unsigned long int QEventPoint::timestamp()\n", true, &_init_f_timestamp_c0, &_call_f_timestamp_c0);
  methods += new qt_gsi::GenericMethod ("uniqueId", "@brief Method QPointingDeviceUniqueId QEventPoint::uniqueId()\n", true, &_init_f_uniqueId_c0, &_call_f_uniqueId_c0);
  methods += new qt_gsi::GenericMethod ("velocity", "@brief Method QVector2D QEventPoint::velocity()\n", true, &_init_f_velocity_c0, &_call_f_velocity_c0);
  return methods;
}

gsi::Class<QEventPoint> decl_QEventPoint ("QtGui", "QEventPoint",
  methods_QEventPoint (),
  "@qt\n@brief Binding of QEventPoint");


GSI_QTGUI_PUBLIC gsi::Class<QEventPoint> &qtdecl_QEventPoint () { return decl_QEventPoint; }

}


//  Implementation of the enum wrapper class for QEventPoint::State
namespace qt_gsi
{

static gsi::Enum<QEventPoint::State> decl_QEventPoint_State_Enum ("QtGui", "QEventPoint_State",
    gsi::enum_const ("Unknown", QEventPoint::Unknown, "@brief Enum constant QEventPoint::Unknown") +
    gsi::enum_const ("Stationary", QEventPoint::Stationary, "@brief Enum constant QEventPoint::Stationary") +
    gsi::enum_const ("Pressed", QEventPoint::Pressed, "@brief Enum constant QEventPoint::Pressed") +
    gsi::enum_const ("Updated", QEventPoint::Updated, "@brief Enum constant QEventPoint::Updated") +
    gsi::enum_const ("Released", QEventPoint::Released, "@brief Enum constant QEventPoint::Released"),
  "@qt\n@brief This class represents the QEventPoint::State enum");

static gsi::QFlagsClass<QEventPoint::State > decl_QEventPoint_State_Enums ("QtGui", "QEventPoint_QFlags_State",
  "@qt\n@brief This class represents the QFlags<QEventPoint::State> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QEventPoint> inject_QEventPoint_State_Enum_in_parent (decl_QEventPoint_State_Enum.defs ());
static gsi::ClassExt<QEventPoint> decl_QEventPoint_State_Enum_as_child (decl_QEventPoint_State_Enum, "State");
static gsi::ClassExt<QEventPoint> decl_QEventPoint_State_Enums_as_child (decl_QEventPoint_State_Enums, "QFlags_State");

}

