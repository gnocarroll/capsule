#pragma once

#include "cap_intdef.h"

#include <string_view>

namespace ast {

struct Operator {
	enum OperatorEnum : u8 {

#define OP(name, txt) name ,

#include "def_operators.txt"

#undef OP

	};

	OperatorEnum value;

	Operator(OperatorEnum value) : value(value) {}

	bool operator==(const Operator& other) const {
		return this->value = other.value;
	}
	bool operator==(OperatorEnum value) const {
		return this->value == value;
	}

	std::string_view get_text() const;
};

}