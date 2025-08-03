#pragma once

#include <vector>

#include "instance.h"
#include "type.h"

namespace ast {

struct Scope {
	u32 parent = 0;

	std::vector<u32> instances;
	std::vector<u32> types;
};

}