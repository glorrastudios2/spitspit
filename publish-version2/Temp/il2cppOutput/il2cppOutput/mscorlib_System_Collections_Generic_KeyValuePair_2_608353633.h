﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Action`1<Soomla.Singletons.UnitySingleton>
struct Action_1_t1502098740;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.MonoBehaviour,System.Action`1<Soomla.Singletons.UnitySingleton>>
struct  KeyValuePair_2_t608353633 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MonoBehaviour_t3012272455 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Action_1_t1502098740 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t608353633, ___key_0)); }
	inline MonoBehaviour_t3012272455 * get_key_0() const { return ___key_0; }
	inline MonoBehaviour_t3012272455 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(MonoBehaviour_t3012272455 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t608353633, ___value_1)); }
	inline Action_1_t1502098740 * get_value_1() const { return ___value_1; }
	inline Action_1_t1502098740 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Action_1_t1502098740 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
