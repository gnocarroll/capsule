#pragma once

#include <istream>
#include <vector>

#include "ast/expr.h"
#include "ast/function.h"
#include "ast/instance.h"
#include "ast/scope.h"
#include "ast/statement.h"
#include "ast/type.h"

namespace ast {

struct AST {
	AST();

	u32 curr_func = Function::NO_FUNC;

	u32 curr_scope = Scope::GLOBAL;

	std::vector<Expr> exprs;
	std::vector<Instance> instances;
	std::vector<Scope> scopes;
	std::vector<Statement> statements;
	std::vector<Function> functions;
	std::vector<Type> types;
	
	std::vector<char> text;
};

AST build_ast(std::istream& input);

}