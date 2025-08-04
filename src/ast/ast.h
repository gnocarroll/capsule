#pragma once

#include <istream>
#include <vector>

#include "ast/expr.h"
#include "ast/function.h"
#include "ast/instance.h"
#include "ast/scope.h"
#include "ast/statement.h"
#include "ast/type.h"
#include "cap_intdef.h"

namespace ast {

struct AST {
	static constexpr u32 MISSING = (u32) -1;

	AST();

	u32 curr_func = Function::NO_FUNC;

	u32 curr_scope = Scope::GLOBAL;

	std::vector<ExprVariant> exprs;
	std::vector<Instance> instances;
	std::vector<Scope> scopes;
	std::vector<Statement> statements;
	std::vector<Function> functions;
	std::vector<Type> types;

	template <typename T>
	static u32 emplace_ret_idx(std::vector<T>& v, T&& element) {
		v.emplace_back(std::move(element));

		return (u32)(v.size() - 1);
	}

	u32 make_child_scope(u32 parent) {
		Scope child;

		child.parent = parent;

		return emplace_ret_idx(scopes, std::move(child));
	}
};

AST build_ast(std::istream& input);

}