#pragma once

#include <any>
#include <cassert>

#include "ast/ast.h"
#include "parse/CapsuleBaseVisitor.h"

#define DECL_VISIT(Name) \
	std::any visit ## Name (CapsuleParser:: Name ## Context * ctx) override;
#define VISIT_FUNC(Name) \
	std::any ASTBuilderVisitor:: visit ## Name (CapsuleParser:: Name ## Context * ctx)

namespace ast::visitor {

class ASTBuilderVisitor final : public CapsuleBaseVisitor {
	template <typename T>
	static T any_expect(std::any value) {
		assert(
			std::any_cast<T>(&value) &&
			"CRITICAL: any_expect did not find expected type"
		);

		return std::any_cast<T>(std::move(value));
	}

public:
	AST& ast;

	ASTBuilderVisitor(AST& ast) : ast(ast) {}

	DECL_VISIT(CreateVar)
	DECL_VISIT(CreateWithType)
	DECL_VISIT(CreateInferType)
	DECL_VISIT(FunctionDef)
	DECL_VISIT(FunctionDefParams)
};

}