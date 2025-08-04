#include "visit_create_var.h"

#include "ast/util.h"
#include "ast/visitor/ast_builder_visitor.h"

namespace ast::visitor {

VISIT_FUNC(CreateVar) {
	std::string name = ctx->name->getText();

	CreateVarData data;
	auto type_and_expr = ctx->createVarTypeAndExpr();

	if (auto create_w_type = dynamic_cast<
		CapsuleParser::CreateWithTypeContext*
	>(type_and_expr)) data = any_expect<CreateVarData>(visitCreateWithType(create_w_type));
	else if (auto create_infer = dynamic_cast<
		CapsuleParser::CreateInferTypeContext*
	>(type_and_expr)) data = any_expect<CreateVarData>(visitCreateInferType(create_infer));
	else assert(false && "unsupported subclass");

	Instance instance;

	instance.name = std::move(name);
	instance.lang_type = get_base<ExprBase>(ast.exprs[data.expr]).lang_type;

	ast.instances.emplace_back(std::move(instance));

	data.instance = ast.instances.size() - 1;

	return data;
}

}