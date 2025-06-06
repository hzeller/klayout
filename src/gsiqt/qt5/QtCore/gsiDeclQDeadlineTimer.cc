
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
*  @file gsiDeclQDeadlineTimer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDeadlineTimer>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDeadlineTimer

//  Constructor QDeadlineTimer::QDeadlineTimer(Qt::TimerType type_)


static void _init_ctor_QDeadlineTimer_1680 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type_", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_0);
  decl->set_return_new<QDeadlineTimer> ();
}

static void _call_ctor_QDeadlineTimer_1680 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  ret.write<QDeadlineTimer *> (new QDeadlineTimer (qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg1).cref()));
}


//  Constructor QDeadlineTimer::QDeadlineTimer(QDeadlineTimer::ForeverConstant, Qt::TimerType type_)


static void _init_ctor_QDeadlineTimer_5079 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QDeadlineTimer::ForeverConstant>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type_", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_1);
  decl->set_return_new<QDeadlineTimer> ();
}

static void _call_ctor_QDeadlineTimer_5079 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDeadlineTimer::ForeverConstant>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDeadlineTimer::ForeverConstant>::target_type & >() (args, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  ret.write<QDeadlineTimer *> (new QDeadlineTimer (qt_gsi::QtToCppAdaptor<QDeadlineTimer::ForeverConstant>(arg1).cref(), qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg2).cref()));
}


//  Constructor QDeadlineTimer::QDeadlineTimer(qint64 msecs, Qt::TimerType type)


static void _init_ctor_QDeadlineTimer_2558 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_1);
  decl->set_return_new<QDeadlineTimer> ();
}

static void _call_ctor_QDeadlineTimer_2558 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  ret.write<QDeadlineTimer *> (new QDeadlineTimer (arg1, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg2).cref()));
}


// qint64 QDeadlineTimer::deadline()


static void _init_f_deadline_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_deadline_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QDeadlineTimer *)cls)->deadline ());
}


// qint64 QDeadlineTimer::deadlineNSecs()


static void _init_f_deadlineNSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_deadlineNSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QDeadlineTimer *)cls)->deadlineNSecs ());
}


// bool QDeadlineTimer::hasExpired()


static void _init_f_hasExpired_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasExpired_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDeadlineTimer *)cls)->hasExpired ());
}


// bool QDeadlineTimer::isForever()


static void _init_f_isForever_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isForever_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDeadlineTimer *)cls)->isForever ());
}


// QDeadlineTimer &QDeadlineTimer::operator+=(qint64 msecs)


static void _init_f_operator_plus__eq__986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<QDeadlineTimer & > ();
}

static void _call_f_operator_plus__eq__986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<QDeadlineTimer & > ((QDeadlineTimer &)((QDeadlineTimer *)cls)->operator+= (arg1));
}


// QDeadlineTimer &QDeadlineTimer::operator-=(qint64 msecs)


static void _init_f_operator_minus__eq__986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<QDeadlineTimer & > ();
}

static void _call_f_operator_minus__eq__986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<QDeadlineTimer & > ((QDeadlineTimer &)((QDeadlineTimer *)cls)->operator-= (arg1));
}


// qint64 QDeadlineTimer::remainingTime()


static void _init_f_remainingTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_remainingTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QDeadlineTimer *)cls)->remainingTime ());
}


// qint64 QDeadlineTimer::remainingTimeNSecs()


static void _init_f_remainingTimeNSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_remainingTimeNSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QDeadlineTimer *)cls)->remainingTimeNSecs ());
}


// void QDeadlineTimer::setDeadline(qint64 msecs, Qt::TimerType timerType)


static void _init_f_setDeadline_2558 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("timerType", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setDeadline_2558 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDeadlineTimer *)cls)->setDeadline (arg1, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg2).cref());
}


// void QDeadlineTimer::setPreciseDeadline(qint64 secs, qint64 nsecs, Qt::TimerType type)


static void _init_f_setPreciseDeadline_3436 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("secs");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nsecs", true, "0");
  decl->add_arg<qint64 > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setPreciseDeadline_3436 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  qint64 arg2 = args ? gsi::arg_reader<qint64 >() (args, heap) : gsi::arg_maker<qint64 >() (0, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDeadlineTimer *)cls)->setPreciseDeadline (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg3).cref());
}


// void QDeadlineTimer::setPreciseRemainingTime(qint64 secs, qint64 nsecs, Qt::TimerType type)


static void _init_f_setPreciseRemainingTime_3436 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("secs");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nsecs", true, "0");
  decl->add_arg<qint64 > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setPreciseRemainingTime_3436 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  qint64 arg2 = args ? gsi::arg_reader<qint64 >() (args, heap) : gsi::arg_maker<qint64 >() (0, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDeadlineTimer *)cls)->setPreciseRemainingTime (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg3).cref());
}


// void QDeadlineTimer::setRemainingTime(qint64 msecs, Qt::TimerType type)


static void _init_f_setRemainingTime_2558 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setRemainingTime_2558 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDeadlineTimer *)cls)->setRemainingTime (arg1, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg2).cref());
}


// void QDeadlineTimer::setTimerType(Qt::TimerType type)


static void _init_f_setTimerType_1680 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTimerType_1680 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDeadlineTimer *)cls)->setTimerType (qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg1).cref());
}


// void QDeadlineTimer::swap(QDeadlineTimer &other)


static void _init_f_swap_2002 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDeadlineTimer & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2002 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDeadlineTimer &arg1 = gsi::arg_reader<QDeadlineTimer & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDeadlineTimer *)cls)->swap (arg1);
}


// Qt::TimerType QDeadlineTimer::timerType()


static void _init_f_timerType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::TimerType>::target_type > ();
}

static void _call_f_timerType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::TimerType>::target_type > ((qt_gsi::Converter<Qt::TimerType>::target_type)qt_gsi::CppToQtAdaptor<Qt::TimerType>(((QDeadlineTimer *)cls)->timerType ()));
}


// static QDeadlineTimer QDeadlineTimer::addNSecs(QDeadlineTimer dt, qint64 nsecs)


static void _init_f_addNSecs_2698 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dt");
  decl->add_arg<QDeadlineTimer > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nsecs");
  decl->add_arg<qint64 > (argspec_1);
  decl->set_return<QDeadlineTimer > ();
}

static void _call_f_addNSecs_2698 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDeadlineTimer arg1 = gsi::arg_reader<QDeadlineTimer >() (args, heap);
  qint64 arg2 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<QDeadlineTimer > ((QDeadlineTimer)QDeadlineTimer::addNSecs (arg1, arg2));
}


// static QDeadlineTimer QDeadlineTimer::current(Qt::TimerType timerType)


static void _init_f_current_1680 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timerType", true, "Qt::CoarseTimer");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_0);
  decl->set_return<QDeadlineTimer > ();
}

static void _call_f_current_1680 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::TimerType>(heap, Qt::CoarseTimer), heap);
  ret.write<QDeadlineTimer > ((QDeadlineTimer)QDeadlineTimer::current (qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg1).cref()));
}


//  bool ::operator==(QDeadlineTimer d1, QDeadlineTimer d2)
static bool op_QDeadlineTimer_operator_eq__eq__3532(QDeadlineTimer *_self, QDeadlineTimer d2) {
  return operator==(*_self, d2);
}

//  bool ::operator!=(QDeadlineTimer d1, QDeadlineTimer d2)
static bool op_QDeadlineTimer_operator_excl__eq__3532(QDeadlineTimer *_self, QDeadlineTimer d2) {
  return operator!=(*_self, d2);
}

//  bool ::operator<(QDeadlineTimer d1, QDeadlineTimer d2)
static bool op_QDeadlineTimer_operator_lt__3532(QDeadlineTimer *_self, QDeadlineTimer d2) {
  return operator<(*_self, d2);
}

//  bool ::operator<=(QDeadlineTimer d1, QDeadlineTimer d2)
static bool op_QDeadlineTimer_operator_lt__eq__3532(QDeadlineTimer *_self, QDeadlineTimer d2) {
  return operator<=(*_self, d2);
}

//  bool ::operator>(QDeadlineTimer d1, QDeadlineTimer d2)
static bool op_QDeadlineTimer_operator_gt__3532(QDeadlineTimer *_self, QDeadlineTimer d2) {
  return operator>(*_self, d2);
}

//  bool ::operator>=(QDeadlineTimer d1, QDeadlineTimer d2)
static bool op_QDeadlineTimer_operator_gt__eq__3532(QDeadlineTimer *_self, QDeadlineTimer d2) {
  return operator>=(*_self, d2);
}

//  QDeadlineTimer ::operator-(QDeadlineTimer dt, qint64 msecs)
static QDeadlineTimer op_QDeadlineTimer_operator_minus__2698(QDeadlineTimer *_self, qint64 msecs) {
  return operator-(*_self, msecs);
}

//  qint64 ::operator-(QDeadlineTimer dt1, QDeadlineTimer dt2)
static qint64 op_QDeadlineTimer_operator_minus__3532(QDeadlineTimer *_self, QDeadlineTimer dt2) {
  return operator-(*_self, dt2);
}


namespace gsi
{

static gsi::Methods methods_QDeadlineTimer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDeadlineTimer::QDeadlineTimer(Qt::TimerType type_)\nThis method creates an object of class QDeadlineTimer.", &_init_ctor_QDeadlineTimer_1680, &_call_ctor_QDeadlineTimer_1680);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDeadlineTimer::QDeadlineTimer(QDeadlineTimer::ForeverConstant, Qt::TimerType type_)\nThis method creates an object of class QDeadlineTimer.", &_init_ctor_QDeadlineTimer_5079, &_call_ctor_QDeadlineTimer_5079);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDeadlineTimer::QDeadlineTimer(qint64 msecs, Qt::TimerType type)\nThis method creates an object of class QDeadlineTimer.", &_init_ctor_QDeadlineTimer_2558, &_call_ctor_QDeadlineTimer_2558);
  methods += new qt_gsi::GenericMethod (":deadline", "@brief Method qint64 QDeadlineTimer::deadline()\n", true, &_init_f_deadline_c0, &_call_f_deadline_c0);
  methods += new qt_gsi::GenericMethod ("deadlineNSecs", "@brief Method qint64 QDeadlineTimer::deadlineNSecs()\n", true, &_init_f_deadlineNSecs_c0, &_call_f_deadlineNSecs_c0);
  methods += new qt_gsi::GenericMethod ("hasExpired", "@brief Method bool QDeadlineTimer::hasExpired()\n", true, &_init_f_hasExpired_c0, &_call_f_hasExpired_c0);
  methods += new qt_gsi::GenericMethod ("isForever?", "@brief Method bool QDeadlineTimer::isForever()\n", true, &_init_f_isForever_c0, &_call_f_isForever_c0);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QDeadlineTimer &QDeadlineTimer::operator+=(qint64 msecs)\n", false, &_init_f_operator_plus__eq__986, &_call_f_operator_plus__eq__986);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QDeadlineTimer &QDeadlineTimer::operator-=(qint64 msecs)\n", false, &_init_f_operator_minus__eq__986, &_call_f_operator_minus__eq__986);
  methods += new qt_gsi::GenericMethod (":remainingTime", "@brief Method qint64 QDeadlineTimer::remainingTime()\n", true, &_init_f_remainingTime_c0, &_call_f_remainingTime_c0);
  methods += new qt_gsi::GenericMethod ("remainingTimeNSecs", "@brief Method qint64 QDeadlineTimer::remainingTimeNSecs()\n", true, &_init_f_remainingTimeNSecs_c0, &_call_f_remainingTimeNSecs_c0);
  methods += new qt_gsi::GenericMethod ("setDeadline", "@brief Method void QDeadlineTimer::setDeadline(qint64 msecs, Qt::TimerType timerType)\n", false, &_init_f_setDeadline_2558, &_call_f_setDeadline_2558);
  methods += new qt_gsi::GenericMethod ("setPreciseDeadline", "@brief Method void QDeadlineTimer::setPreciseDeadline(qint64 secs, qint64 nsecs, Qt::TimerType type)\n", false, &_init_f_setPreciseDeadline_3436, &_call_f_setPreciseDeadline_3436);
  methods += new qt_gsi::GenericMethod ("setPreciseRemainingTime", "@brief Method void QDeadlineTimer::setPreciseRemainingTime(qint64 secs, qint64 nsecs, Qt::TimerType type)\n", false, &_init_f_setPreciseRemainingTime_3436, &_call_f_setPreciseRemainingTime_3436);
  methods += new qt_gsi::GenericMethod ("setRemainingTime", "@brief Method void QDeadlineTimer::setRemainingTime(qint64 msecs, Qt::TimerType type)\n", false, &_init_f_setRemainingTime_2558, &_call_f_setRemainingTime_2558);
  methods += new qt_gsi::GenericMethod ("setTimerType|timerType=", "@brief Method void QDeadlineTimer::setTimerType(Qt::TimerType type)\n", false, &_init_f_setTimerType_1680, &_call_f_setTimerType_1680);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDeadlineTimer::swap(QDeadlineTimer &other)\n", false, &_init_f_swap_2002, &_call_f_swap_2002);
  methods += new qt_gsi::GenericMethod (":timerType", "@brief Method Qt::TimerType QDeadlineTimer::timerType()\n", true, &_init_f_timerType_c0, &_call_f_timerType_c0);
  methods += new qt_gsi::GenericStaticMethod ("addNSecs", "@brief Static method QDeadlineTimer QDeadlineTimer::addNSecs(QDeadlineTimer dt, qint64 nsecs)\nThis method is static and can be called without an instance.", &_init_f_addNSecs_2698, &_call_f_addNSecs_2698);
  methods += new qt_gsi::GenericStaticMethod ("current", "@brief Static method QDeadlineTimer QDeadlineTimer::current(Qt::TimerType timerType)\nThis method is static and can be called without an instance.", &_init_f_current_1680, &_call_f_current_1680);
  methods += gsi::method_ext("==", &::op_QDeadlineTimer_operator_eq__eq__3532, gsi::arg ("d2"), "@brief Operator bool ::operator==(QDeadlineTimer d1, QDeadlineTimer d2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QDeadlineTimer_operator_excl__eq__3532, gsi::arg ("d2"), "@brief Operator bool ::operator!=(QDeadlineTimer d1, QDeadlineTimer d2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("<", &::op_QDeadlineTimer_operator_lt__3532, gsi::arg ("d2"), "@brief Operator bool ::operator<(QDeadlineTimer d1, QDeadlineTimer d2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("<=", &::op_QDeadlineTimer_operator_lt__eq__3532, gsi::arg ("d2"), "@brief Operator bool ::operator<=(QDeadlineTimer d1, QDeadlineTimer d2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext(">", &::op_QDeadlineTimer_operator_gt__3532, gsi::arg ("d2"), "@brief Operator bool ::operator>(QDeadlineTimer d1, QDeadlineTimer d2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext(">=", &::op_QDeadlineTimer_operator_gt__eq__3532, gsi::arg ("d2"), "@brief Operator bool ::operator>=(QDeadlineTimer d1, QDeadlineTimer d2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QDeadlineTimer_operator_minus__2698, gsi::arg ("msecs"), "@brief Operator QDeadlineTimer ::operator-(QDeadlineTimer dt, qint64 msecs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QDeadlineTimer_operator_minus__3532, gsi::arg ("dt2"), "@brief Operator qint64 ::operator-(QDeadlineTimer dt1, QDeadlineTimer dt2)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QDeadlineTimer> decl_QDeadlineTimer ("QtCore", "QDeadlineTimer",
  methods_QDeadlineTimer (),
  "@qt\n@brief Binding of QDeadlineTimer");


GSI_QTCORE_PUBLIC gsi::Class<QDeadlineTimer> &qtdecl_QDeadlineTimer () { return decl_QDeadlineTimer; }

}


//  Implementation of the enum wrapper class for QDeadlineTimer::ForeverConstant
namespace qt_gsi
{

static gsi::Enum<QDeadlineTimer::ForeverConstant> decl_QDeadlineTimer_ForeverConstant_Enum ("QtCore", "QDeadlineTimer_ForeverConstant",
    gsi::enum_const ("Forever", QDeadlineTimer::Forever, "@brief Enum constant QDeadlineTimer::Forever"),
  "@qt\n@brief This class represents the QDeadlineTimer::ForeverConstant enum");

static gsi::QFlagsClass<QDeadlineTimer::ForeverConstant > decl_QDeadlineTimer_ForeverConstant_Enums ("QtCore", "QDeadlineTimer_QFlags_ForeverConstant",
  "@qt\n@brief This class represents the QFlags<QDeadlineTimer::ForeverConstant> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDeadlineTimer> inject_QDeadlineTimer_ForeverConstant_Enum_in_parent (decl_QDeadlineTimer_ForeverConstant_Enum.defs ());
static gsi::ClassExt<QDeadlineTimer> decl_QDeadlineTimer_ForeverConstant_Enum_as_child (decl_QDeadlineTimer_ForeverConstant_Enum, "ForeverConstant");
static gsi::ClassExt<QDeadlineTimer> decl_QDeadlineTimer_ForeverConstant_Enums_as_child (decl_QDeadlineTimer_ForeverConstant_Enums, "QFlags_ForeverConstant");

}

