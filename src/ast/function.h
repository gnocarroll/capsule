#pragma once

#include <vector>

#include "cap_intdef.h"

namespace ast {

struct Function {
	static constexpr u32 NO_FUNC = (u32)-1;

	std::string name;

	std::vector<u32> arg_instances;

	std::vector<u32> statements;
};

}