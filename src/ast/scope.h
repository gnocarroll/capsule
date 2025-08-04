#pragma once

#include <vector>

#include "instance.h"
#include "macros.h"
#include "type.h"

namespace ast {

DECL_ID(Scope)

struct Scope {
	static constexpr u32 GLOBAL = (u32)0;
	static constexpr u32 NO_PARENT = (u32)-1;

	u32 parent = NO_PARENT;

	std::vector<u32> instances;
	std::vector<u32> types;
};

}