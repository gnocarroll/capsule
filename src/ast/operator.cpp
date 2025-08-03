#include "operator.h"

#include <cstddef>

namespace ast {

static std::string_view operator_text[] = {

#define OP(name, text) text ,

#include "def_operators.txt"

#undef OP

	""
};

std::string_view Operator::get_text() const {
	if (value < 0 || value >= OP_COUNT) return "ERR";

	return operator_text[(size_t)value];
}

}