#pragma once

#include <variant>

namespace ast {

struct CreateStatement {

};

struct ModifyStatement {

};

struct IfStatement {

};

struct WhileStatement {

};

using Statement = std::variant<
	CreateStatement,
	ModifyStatement,
	IfStatement,
	WhileStatement
>;

}