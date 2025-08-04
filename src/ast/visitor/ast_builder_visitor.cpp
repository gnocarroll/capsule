#include "ast_builder_visitor.h"

#include "ast/util.h"

namespace ast::visitor {



VISIT_FUNC(FunctionDef) {
	u32 func_scope = ast.make_child_scope(ast.curr_scope);

	ast.curr_scope = func_scope;

	Function func;

	func.name = ctx->name->getText();

	visitFunctionDefParams(ctx->params);

	visitCompoundStatement(ctx->body);
}

VISIT_FUNC(FunctionDefParams) {

}

}