

// Generated from ../../antlr/Capsule.g4 by ANTLR 4.13.2



#pragma once





#include "antlr4-runtime/antlr4-runtime.h"
#include "CapsuleParser.h"







/**

 * This class defines an abstract visitor for a parse tree

 * produced by CapsuleParser.

 */

class  CapsuleVisitor : public antlr4::tree::AbstractParseTreeVisitor {

public:



  /**

   * Visit parse trees produced by CapsuleParser.

   */

    virtual std::any visitIdent(CapsuleParser::IdentContext *context) = 0;



    virtual std::any visitCall_args(CapsuleParser::Call_argsContext *context) = 0;



    virtual std::any visitIdentExpr(CapsuleParser::IdentExprContext *context) = 0;



    virtual std::any visitUnaryExpr(CapsuleParser::UnaryExprContext *context) = 0;



    virtual std::any visitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *context) = 0;



    virtual std::any visitIntLiteral(CapsuleParser::IntLiteralContext *context) = 0;



    virtual std::any visitFloatLiteral(CapsuleParser::FloatLiteralContext *context) = 0;



    virtual std::any visitBinaryExpr(CapsuleParser::BinaryExprContext *context) = 0;



    virtual std::any visitFuncCallExpr(CapsuleParser::FuncCallExprContext *context) = 0;



    virtual std::any visitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *context) = 0;



    virtual std::any visitDotAccessExpr(CapsuleParser::DotAccessExprContext *context) = 0;



    virtual std::any visitParenExpr(CapsuleParser::ParenExprContext *context) = 0;



    virtual std::any visitExp(CapsuleParser::ExpContext *context) = 0;



    virtual std::any visitMultDivMod(CapsuleParser::MultDivModContext *context) = 0;



    virtual std::any visitAddSub(CapsuleParser::AddSubContext *context) = 0;



    virtual std::any visitShift(CapsuleParser::ShiftContext *context) = 0;



    virtual std::any visitBitAnd(CapsuleParser::BitAndContext *context) = 0;



    virtual std::any visitBitXor(CapsuleParser::BitXorContext *context) = 0;



    virtual std::any visitBitOr(CapsuleParser::BitOrContext *context) = 0;



    virtual std::any visitCompare(CapsuleParser::CompareContext *context) = 0;



    virtual std::any visitEqNeq(CapsuleParser::EqNeqContext *context) = 0;



    virtual std::any visitLogicalAnd(CapsuleParser::LogicalAndContext *context) = 0;



    virtual std::any visitLogicalOr(CapsuleParser::LogicalOrContext *context) = 0;



    virtual std::any visitType_name(CapsuleParser::Type_nameContext *context) = 0;



    virtual std::any visitCreateNoExpr(CapsuleParser::CreateNoExprContext *context) = 0;



    virtual std::any visitCreateWithExpr(CapsuleParser::CreateWithExprContext *context) = 0;



    virtual std::any visitCreateInferType(CapsuleParser::CreateInferTypeContext *context) = 0;



    virtual std::any visitModify_var(CapsuleParser::Modify_varContext *context) = 0;



    virtual std::any visitPlusEq(CapsuleParser::PlusEqContext *context) = 0;



    virtual std::any visitMinusEq(CapsuleParser::MinusEqContext *context) = 0;



    virtual std::any visitMultEq(CapsuleParser::MultEqContext *context) = 0;



    virtual std::any visitDivEq(CapsuleParser::DivEqContext *context) = 0;



    virtual std::any visitModEq(CapsuleParser::ModEqContext *context) = 0;



    virtual std::any visitExpEq(CapsuleParser::ExpEqContext *context) = 0;



    virtual std::any visitXorEq(CapsuleParser::XorEqContext *context) = 0;



    virtual std::any visitOrEq(CapsuleParser::OrEqContext *context) = 0;



    virtual std::any visitAndEq(CapsuleParser::AndEqContext *context) = 0;



    virtual std::any visitLShiftEq(CapsuleParser::LShiftEqContext *context) = 0;



    virtual std::any visitRShiftEq(CapsuleParser::RShiftEqContext *context) = 0;



    virtual std::any visitStatement(CapsuleParser::StatementContext *context) = 0;



    virtual std::any visitIncDecStmt(CapsuleParser::IncDecStmtContext *context) = 0;



    virtual std::any visitFuncCallStmt(CapsuleParser::FuncCallStmtContext *context) = 0;



    virtual std::any visitIfStmt(CapsuleParser::IfStmtContext *context) = 0;



    virtual std::any visitWhileStmt(CapsuleParser::WhileStmtContext *context) = 0;



    virtual std::any visitCreateVarStmt(CapsuleParser::CreateVarStmtContext *context) = 0;



    virtual std::any visitModifyVarStmt(CapsuleParser::ModifyVarStmtContext *context) = 0;



    virtual std::any visitInc_dec_statement(CapsuleParser::Inc_dec_statementContext *context) = 0;



    virtual std::any visitFunction_call_statement(CapsuleParser::Function_call_statementContext *context) = 0;



    virtual std::any visitIf_statement(CapsuleParser::If_statementContext *context) = 0;



    virtual std::any visitWhile_statement(CapsuleParser::While_statementContext *context) = 0;



    virtual std::any visitCompound_statement(CapsuleParser::Compound_statementContext *context) = 0;



    virtual std::any visitFunction_def(CapsuleParser::Function_defContext *context) = 0;



    virtual std::any visitFunction_def_params(CapsuleParser::Function_def_paramsContext *context) = 0;



    virtual std::any visitType_variety(CapsuleParser::Type_varietyContext *context) = 0;



    virtual std::any visitType_literal(CapsuleParser::Type_literalContext *context) = 0;



    virtual std::any visitTypeFromName(CapsuleParser::TypeFromNameContext *context) = 0;



    virtual std::any visitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *context) = 0;



    virtual std::any visitType_or_alias_def(CapsuleParser::Type_or_alias_defContext *context) = 0;



    virtual std::any visitDefIsFunction(CapsuleParser::DefIsFunctionContext *context) = 0;



    virtual std::any visitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *context) = 0;



    virtual std::any visitDefIsVarDef(CapsuleParser::DefIsVarDefContext *context) = 0;



    virtual std::any visitFile(CapsuleParser::FileContext *context) = 0;





};


