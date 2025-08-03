#pragma once

#include <string>
#include <variant>

#include "cap_intdef.h"
#include "operator.h"

namespace ast {

struct ArrayAccessExpr {
	u32 sub_expr;
	u32 index_expr;
};

struct MemberAccessExpr {
	u32 sub_expr;

	std::string field;

	bool is_arrow_access = false;
};

struct UnaryExpr {
	u32 sub_expr;

	Operator op;
};

struct BinaryExpr {
	u32 lhs;
	u32 rhs;

	Operator op;
};

using Expr = std::variant<
	ArrayAccessExpr,
	MemberAccessExpr,
	UnaryExpr,
	BinaryExpr
>;

}