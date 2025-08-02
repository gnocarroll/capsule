
// Generated from ../../antlr/Capsule.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CapsuleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CapsuleParser.
 */
class  CapsuleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterIdent(CapsuleParser::IdentContext *ctx) = 0;
  virtual void exitIdent(CapsuleParser::IdentContext *ctx) = 0;

  virtual void enterCall_args(CapsuleParser::Call_argsContext *ctx) = 0;
  virtual void exitCall_args(CapsuleParser::Call_argsContext *ctx) = 0;

  virtual void enterIdentExpr(CapsuleParser::IdentExprContext *ctx) = 0;
  virtual void exitIdentExpr(CapsuleParser::IdentExprContext *ctx) = 0;

  virtual void enterUnaryExpr(CapsuleParser::UnaryExprContext *ctx) = 0;
  virtual void exitUnaryExpr(CapsuleParser::UnaryExprContext *ctx) = 0;

  virtual void enterArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *ctx) = 0;
  virtual void exitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *ctx) = 0;

  virtual void enterIntLiteral(CapsuleParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(CapsuleParser::IntLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(CapsuleParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(CapsuleParser::FloatLiteralContext *ctx) = 0;

  virtual void enterBinaryExpr(CapsuleParser::BinaryExprContext *ctx) = 0;
  virtual void exitBinaryExpr(CapsuleParser::BinaryExprContext *ctx) = 0;

  virtual void enterFuncCallExpr(CapsuleParser::FuncCallExprContext *ctx) = 0;
  virtual void exitFuncCallExpr(CapsuleParser::FuncCallExprContext *ctx) = 0;

  virtual void enterArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *ctx) = 0;
  virtual void exitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *ctx) = 0;

  virtual void enterDotAccessExpr(CapsuleParser::DotAccessExprContext *ctx) = 0;
  virtual void exitDotAccessExpr(CapsuleParser::DotAccessExprContext *ctx) = 0;

  virtual void enterParenExpr(CapsuleParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(CapsuleParser::ParenExprContext *ctx) = 0;

  virtual void enterExp(CapsuleParser::ExpContext *ctx) = 0;
  virtual void exitExp(CapsuleParser::ExpContext *ctx) = 0;

  virtual void enterMultDivMod(CapsuleParser::MultDivModContext *ctx) = 0;
  virtual void exitMultDivMod(CapsuleParser::MultDivModContext *ctx) = 0;

  virtual void enterAddSub(CapsuleParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(CapsuleParser::AddSubContext *ctx) = 0;

  virtual void enterShift(CapsuleParser::ShiftContext *ctx) = 0;
  virtual void exitShift(CapsuleParser::ShiftContext *ctx) = 0;

  virtual void enterBitAnd(CapsuleParser::BitAndContext *ctx) = 0;
  virtual void exitBitAnd(CapsuleParser::BitAndContext *ctx) = 0;

  virtual void enterBitXor(CapsuleParser::BitXorContext *ctx) = 0;
  virtual void exitBitXor(CapsuleParser::BitXorContext *ctx) = 0;

  virtual void enterBitOr(CapsuleParser::BitOrContext *ctx) = 0;
  virtual void exitBitOr(CapsuleParser::BitOrContext *ctx) = 0;

  virtual void enterCompare(CapsuleParser::CompareContext *ctx) = 0;
  virtual void exitCompare(CapsuleParser::CompareContext *ctx) = 0;

  virtual void enterEqNeq(CapsuleParser::EqNeqContext *ctx) = 0;
  virtual void exitEqNeq(CapsuleParser::EqNeqContext *ctx) = 0;

  virtual void enterLogicalAnd(CapsuleParser::LogicalAndContext *ctx) = 0;
  virtual void exitLogicalAnd(CapsuleParser::LogicalAndContext *ctx) = 0;

  virtual void enterLogicalOr(CapsuleParser::LogicalOrContext *ctx) = 0;
  virtual void exitLogicalOr(CapsuleParser::LogicalOrContext *ctx) = 0;

  virtual void enterType_name(CapsuleParser::Type_nameContext *ctx) = 0;
  virtual void exitType_name(CapsuleParser::Type_nameContext *ctx) = 0;

  virtual void enterCreateNoExpr(CapsuleParser::CreateNoExprContext *ctx) = 0;
  virtual void exitCreateNoExpr(CapsuleParser::CreateNoExprContext *ctx) = 0;

  virtual void enterCreateWithExpr(CapsuleParser::CreateWithExprContext *ctx) = 0;
  virtual void exitCreateWithExpr(CapsuleParser::CreateWithExprContext *ctx) = 0;

  virtual void enterCreateInferType(CapsuleParser::CreateInferTypeContext *ctx) = 0;
  virtual void exitCreateInferType(CapsuleParser::CreateInferTypeContext *ctx) = 0;

  virtual void enterModify_var(CapsuleParser::Modify_varContext *ctx) = 0;
  virtual void exitModify_var(CapsuleParser::Modify_varContext *ctx) = 0;

  virtual void enterPlusEq(CapsuleParser::PlusEqContext *ctx) = 0;
  virtual void exitPlusEq(CapsuleParser::PlusEqContext *ctx) = 0;

  virtual void enterMinusEq(CapsuleParser::MinusEqContext *ctx) = 0;
  virtual void exitMinusEq(CapsuleParser::MinusEqContext *ctx) = 0;

  virtual void enterMultEq(CapsuleParser::MultEqContext *ctx) = 0;
  virtual void exitMultEq(CapsuleParser::MultEqContext *ctx) = 0;

  virtual void enterDivEq(CapsuleParser::DivEqContext *ctx) = 0;
  virtual void exitDivEq(CapsuleParser::DivEqContext *ctx) = 0;

  virtual void enterModEq(CapsuleParser::ModEqContext *ctx) = 0;
  virtual void exitModEq(CapsuleParser::ModEqContext *ctx) = 0;

  virtual void enterExpEq(CapsuleParser::ExpEqContext *ctx) = 0;
  virtual void exitExpEq(CapsuleParser::ExpEqContext *ctx) = 0;

  virtual void enterXorEq(CapsuleParser::XorEqContext *ctx) = 0;
  virtual void exitXorEq(CapsuleParser::XorEqContext *ctx) = 0;

  virtual void enterOrEq(CapsuleParser::OrEqContext *ctx) = 0;
  virtual void exitOrEq(CapsuleParser::OrEqContext *ctx) = 0;

  virtual void enterAndEq(CapsuleParser::AndEqContext *ctx) = 0;
  virtual void exitAndEq(CapsuleParser::AndEqContext *ctx) = 0;

  virtual void enterLShiftEq(CapsuleParser::LShiftEqContext *ctx) = 0;
  virtual void exitLShiftEq(CapsuleParser::LShiftEqContext *ctx) = 0;

  virtual void enterRShiftEq(CapsuleParser::RShiftEqContext *ctx) = 0;
  virtual void exitRShiftEq(CapsuleParser::RShiftEqContext *ctx) = 0;

  virtual void enterStatement(CapsuleParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CapsuleParser::StatementContext *ctx) = 0;

  virtual void enterIncDecStmt(CapsuleParser::IncDecStmtContext *ctx) = 0;
  virtual void exitIncDecStmt(CapsuleParser::IncDecStmtContext *ctx) = 0;

  virtual void enterFuncCallStmt(CapsuleParser::FuncCallStmtContext *ctx) = 0;
  virtual void exitFuncCallStmt(CapsuleParser::FuncCallStmtContext *ctx) = 0;

  virtual void enterIfStmt(CapsuleParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(CapsuleParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(CapsuleParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(CapsuleParser::WhileStmtContext *ctx) = 0;

  virtual void enterCreateVarStmt(CapsuleParser::CreateVarStmtContext *ctx) = 0;
  virtual void exitCreateVarStmt(CapsuleParser::CreateVarStmtContext *ctx) = 0;

  virtual void enterModifyVarStmt(CapsuleParser::ModifyVarStmtContext *ctx) = 0;
  virtual void exitModifyVarStmt(CapsuleParser::ModifyVarStmtContext *ctx) = 0;

  virtual void enterInc_dec_statement(CapsuleParser::Inc_dec_statementContext *ctx) = 0;
  virtual void exitInc_dec_statement(CapsuleParser::Inc_dec_statementContext *ctx) = 0;

  virtual void enterFunction_call_statement(CapsuleParser::Function_call_statementContext *ctx) = 0;
  virtual void exitFunction_call_statement(CapsuleParser::Function_call_statementContext *ctx) = 0;

  virtual void enterIf_statement(CapsuleParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(CapsuleParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(CapsuleParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(CapsuleParser::While_statementContext *ctx) = 0;

  virtual void enterCompound_statement(CapsuleParser::Compound_statementContext *ctx) = 0;
  virtual void exitCompound_statement(CapsuleParser::Compound_statementContext *ctx) = 0;

  virtual void enterFunction_def(CapsuleParser::Function_defContext *ctx) = 0;
  virtual void exitFunction_def(CapsuleParser::Function_defContext *ctx) = 0;

  virtual void enterFunction_def_params(CapsuleParser::Function_def_paramsContext *ctx) = 0;
  virtual void exitFunction_def_params(CapsuleParser::Function_def_paramsContext *ctx) = 0;

  virtual void enterType_variety(CapsuleParser::Type_varietyContext *ctx) = 0;
  virtual void exitType_variety(CapsuleParser::Type_varietyContext *ctx) = 0;

  virtual void enterType_literal(CapsuleParser::Type_literalContext *ctx) = 0;
  virtual void exitType_literal(CapsuleParser::Type_literalContext *ctx) = 0;

  virtual void enterTypeFromName(CapsuleParser::TypeFromNameContext *ctx) = 0;
  virtual void exitTypeFromName(CapsuleParser::TypeFromNameContext *ctx) = 0;

  virtual void enterTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *ctx) = 0;
  virtual void exitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *ctx) = 0;

  virtual void enterType_or_alias_def(CapsuleParser::Type_or_alias_defContext *ctx) = 0;
  virtual void exitType_or_alias_def(CapsuleParser::Type_or_alias_defContext *ctx) = 0;

  virtual void enterDefIsFunction(CapsuleParser::DefIsFunctionContext *ctx) = 0;
  virtual void exitDefIsFunction(CapsuleParser::DefIsFunctionContext *ctx) = 0;

  virtual void enterDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *ctx) = 0;
  virtual void exitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *ctx) = 0;

  virtual void enterDefIsVarDef(CapsuleParser::DefIsVarDefContext *ctx) = 0;
  virtual void exitDefIsVarDef(CapsuleParser::DefIsVarDefContext *ctx) = 0;

  virtual void enterFile(CapsuleParser::FileContext *ctx) = 0;
  virtual void exitFile(CapsuleParser::FileContext *ctx) = 0;


};

