﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`2<System.Object,System.Int32>
struct Action_2_t1820800989;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m2840689331_gshared (Action_2_t1820800989 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m2840689331(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1820800989 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m2840689331_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m4065655704_gshared (Action_2_t1820800989 * __this, Il2CppObject * ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m4065655704(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1820800989 *, Il2CppObject *, int32_t, const MethodInfo*))Action_2_Invoke_m4065655704_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Object,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m2072084287_gshared (Action_2_t1820800989 * __this, Il2CppObject * ___arg10, int32_t ___arg21, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m2072084287(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1820800989 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m2072084287_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m2015116867_gshared (Action_2_t1820800989 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m2015116867(__this, ___result0, method) ((  void (*) (Action_2_t1820800989 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m2015116867_gshared)(__this, ___result0, method)
