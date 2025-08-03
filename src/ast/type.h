#pragma once

#include <variant>

namespace ast {

class ErrType {

};

class IntegerType {

};

using Type = std::variant<
	ErrType,
	IntegerType
>;

}