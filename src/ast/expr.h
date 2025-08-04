#pragma once

#include <string>
#include <variant>

#include "cap_intdef.h"
#include "operator.h"
#include "value.h"

namespace ast {

struct ExprBase : Value {
};

struct ArrayAccessExpr : ExprBase {
	u32 sub_expr;
	u32 index_expr;
};

struct MemberAccessExpr : ExprBase {
	u32 sub_expr;

	std::string field;

	bool is_arrow_access = false;
};

struct UnaryExpr : ExprBase {
	u32 sub_expr;

	Operator op;
};

struct BinaryExpr : ExprBase {
	u32 lhs;
	u32 rhs;

	Operator op;
};

using ExprVariant = std::variant<
	ArrayAccessExpr,
	MemberAccessExpr,
	UnaryExpr,
	BinaryExpr
>;

}