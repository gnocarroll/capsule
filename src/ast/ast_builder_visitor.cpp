#include "ast_builder_visitor.h"

namespace ast {

VISIT_FUNC(File) {
	return visitChildren(ctx);
}

VISIT_FUNC(Definition) {

}

}