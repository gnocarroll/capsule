#pragma once

#include <cstdint>

#define DEF_INTS(width) \
	typedef int ## width ## _t i ## width; \
	typedef uint ## width ## _t u ## width;

DEF_INTS(8)
DEF_INTS(16)
DEF_INTS(32)
DEF_INTS(64)