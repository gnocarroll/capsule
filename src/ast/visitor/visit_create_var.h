#pragma once

#include "ast/ast.h"
#include "cap_intdef.h"

namespace ast::visitor {

struct CreateVarData {
	u32 instance;
	u32 type = AST::MISSING;
	u32 expr = AST::MISSING;
};

}