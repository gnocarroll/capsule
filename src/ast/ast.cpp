#include "ast.h"

#include "antlr4-runtime/ANTLRInputStream.h"

#include "parse/CapsuleBaseVisitor.h"
#include "parse/CapsuleLexer.h"
#include "parse/CapsuleParser.h"

namespace ast {

class ASTBuilderVisitor final : public CapsuleBaseVisitor {
public:
	AST& ast;

	ASTBuilderVisitor(AST& ast) : ast(ast) {}
};

AST build_ast(std::istream& input) {
	AST ast;

	// code to use ANTLR with istream
	
	antlr4::ANTLRInputStream antlr_input(input);

	CapsuleLexer lexer(&antlr_input);
	antlr4::CommonTokenStream tokens(&lexer);
	CapsuleParser parser(&tokens);

	CapsuleParser::FileContext* file_ctx = parser.file();

	if (!file_ctx) return ast;

	// create instance of visitor subclass whose methods build ast (first pass)

	ASTBuilderVisitor visitor(ast);
	
	// begin at file
	
	visitor.visitFile(file_ctx);

	return ast;
}

}