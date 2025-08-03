#pragma once

#include <variant>

namespace ast {

class IntegerType {

};

using Type = std::variant<
	IntegerType
>;

}