#pragma once

#include <string>

#include "cap_intdef.h"

namespace ast {

struct Instance {
	std::string name;

	u32 lang_type;
};

}