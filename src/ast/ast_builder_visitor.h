#pragma once

#include "ast/ast.h"
#include "parse/CapsuleBaseVisitor.h"

#define VISIT_FUNC(Name) \
	std::any ASTBuilderVisitor:: visit ## Name (CapsuleParser:: Name ## Context * ctx)

namespace ast {

class ASTBuilderVisitor final : public CapsuleBaseVisitor {
public:
	AST& ast;

	ASTBuilderVisitor(AST& ast) : ast(ast) {}


	std::any visitIdent(CapsuleParser::IdentContext* ctx);



	std::any visitCallArgs(CapsuleParser::CallArgsContext* ctx);



	std::any visitIdentExpr(CapsuleParser::IdentExprContext* ctx);

	std::any visitUnaryExpr(CapsuleParser::UnaryExprContext* ctx);
	std::any visitIntLiteral(CapsuleParser::IntLiteralContext* ctx);
	std::any visitFloatLiteral(CapsuleParser::FloatLiteralContext* ctx);
	std::any visitBinaryExpr(CapsuleParser::BinaryExprContext* ctx);
	std::any visitPostfixExpr(CapsuleParser::PostfixExprContext* ctx);
	std::any visitParenExpr(CapsuleParser::ParenExprContext* ctx);
	std::any visitFuncCallExpr(CapsuleParser::FuncCallExprContext* ctx);
	std::any visitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext* ctx);
	std::any visitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext* ctx);
	std::any visitDotAccessExpr(CapsuleParser::DotAccessExprContext* ctx);
	std::any visitExp(CapsuleParser::ExpContext* ctx);
	std::any visitMultDivMod(CapsuleParser::MultDivModContext* ctx);
	std::any visitAddSub(CapsuleParser::AddSubContext* ctx);
	std::any visitShift(CapsuleParser::ShiftContext* ctx);
	std::any visitBitAnd(CapsuleParser::BitAndContext* ctx);
	std::any visitBitXor(CapsuleParser::BitXorContext* ctx);
	std::any visitBitOr(CapsuleParser::BitOrContext* ctx);
	std::any visitCompare(CapsuleParser::CompareContext* ctx);
	std::any visitEqNeq(CapsuleParser::EqNeqContext* ctx);
	std::any visitLogicalAnd(CapsuleParser::LogicalAndContext* ctx);
	std::any visitLogicalOr(CapsuleParser::LogicalOrContext* ctx);
	std::any visitTypeName(CapsuleParser::TypeNameContext* ctx);
	std::any visitCreateVar(CapsuleParser::CreateVarContext* ctx);
	std::any visitCreateWithType(CapsuleParser::CreateWithTypeContext* ctx);
	std::any visitCreateInferType(CapsuleParser::CreateInferTypeContext* ctx);
	std::any visitModifyVar(CapsuleParser::ModifyVarContext* ctx);
	std::any visitPlusEq(CapsuleParser::PlusEqContext* ctx);
	std::any visitMinusEq(CapsuleParser::MinusEqContext* ctx);
	std::any visitMultEq(CapsuleParser::MultEqContext* ctx);
	std::any visitDivEq(CapsuleParser::DivEqContext* ctx);
	std::any visitModEq(CapsuleParser::ModEqContext* ctx);
	std::any visitExpEq(CapsuleParser::ExpEqContext* ctx);
	std::any visitXorEq(CapsuleParser::XorEqContext* ctx);
	std::any visitOrEq(CapsuleParser::OrEqContext* ctx);
	std::any visitAndEq(CapsuleParser::AndEqContext* ctx);
	std::any visitLShiftEq(CapsuleParser::LShiftEqContext* ctx);
	std::any visitRShiftEq(CapsuleParser::RShiftEqContext* ctx);
	std::any visitStatement(CapsuleParser::StatementContext* ctx);
	std::any visitIncDecStmt(CapsuleParser::IncDecStmtContext* ctx);
	std::any visitFuncCallStmt(CapsuleParser::FuncCallStmtContext* ctx);
	std::any visitIfStmt(CapsuleParser::IfStmtContext* ctx);
	std::any visitWhileStmt(CapsuleParser::WhileStmtContext* ctx);
	std::any visitCreateVarStmt(CapsuleParser::CreateVarStmtContext* ctx);
	std::any visitModifyVarStmt(CapsuleParser::ModifyVarStmtContext* ctx);
	std::any visitIncDecStatement(CapsuleParser::IncDecStatementContext* ctx);
	std::any visitFunctionCallStatement(CapsuleParser::FunctionCallStatementContext* ctx);
	std::any visitIfStatement(CapsuleParser::IfStatementContext* ctx);
	std::any visitWhileStatement(CapsuleParser::WhileStatementContext* ctx);
	std::any visitCompoundStatement(CapsuleParser::CompoundStatementContext* ctx);
	std::any visitFunctionDef(CapsuleParser::FunctionDefContext* ctx);
	std::any visitFunctionDefParams(CapsuleParser::FunctionDefParamsContext* ctx);
	std::any visitTypeVariety(CapsuleParser::TypeVarietyContext* ctx);
	std::any visitTypeLiteral(CapsuleParser::TypeLiteralContext* ctx);
	std::any visitTypeFromName(CapsuleParser::TypeFromNameContext* ctx);
	std::any visitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext* ctx);
	std::any visitTypeOrAliasDef(CapsuleParser::TypeOrAliasDefContext* ctx);
	std::any visitDefIsFunction(CapsuleParser::DefIsFunctionContext* ctx);
	std::any visitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext* ctx);
	std::any visitDefIsVarDef(CapsuleParser::DefIsVarDefContext* ctx);
	std::any visitFile(CapsuleParser::FileContext* ctx);

};

}