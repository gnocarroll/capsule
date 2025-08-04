
// Generated from C:/Users/George/source/repos/capsule/antlr/Capsule.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime/antlr4-runtime.h"
#include "CapsuleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CapsuleParser.
 */
class  CapsuleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterIdent(CapsuleParser::IdentContext *ctx) = 0;
  virtual void exitIdent(CapsuleParser::IdentContext *ctx) = 0;

  virtual void enterCallArgs(CapsuleParser::CallArgsContext *ctx) = 0;
  virtual void exitCallArgs(CapsuleParser::CallArgsContext *ctx) = 0;

  virtual void enterIdentExpr(CapsuleParser::IdentExprContext *ctx) = 0;
  virtual void exitIdentExpr(CapsuleParser::IdentExprContext *ctx) = 0;

  virtual void enterUnaryExpr(CapsuleParser::UnaryExprContext *ctx) = 0;
  virtual void exitUnaryExpr(CapsuleParser::UnaryExprContext *ctx) = 0;

  virtual void enterIntLiteral(CapsuleParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(CapsuleParser::IntLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(CapsuleParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(CapsuleParser::FloatLiteralContext *ctx) = 0;

  virtual void enterBinaryExpr(CapsuleParser::BinaryExprContext *ctx) = 0;
  virtual void exitBinaryExpr(CapsuleParser::BinaryExprContext *ctx) = 0;

  virtual void enterPostfixExpr(CapsuleParser::PostfixExprContext *ctx) = 0;
  virtual void exitPostfixExpr(CapsuleParser::PostfixExprContext *ctx) = 0;

  virtual void enterParenExpr(CapsuleParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(CapsuleParser::ParenExprContext *ctx) = 0;

  virtual void enterFuncCallExpr(CapsuleParser::FuncCallExprContext *ctx) = 0;
  virtual void exitFuncCallExpr(CapsuleParser::FuncCallExprContext *ctx) = 0;

  virtual void enterArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *ctx) = 0;
  virtual void exitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *ctx) = 0;

  virtual void enterArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *ctx) = 0;
  virtual void exitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *ctx) = 0;

  virtual void enterDotAccessExpr(CapsuleParser::DotAccessExprContext *ctx) = 0;
  virtual void exitDotAccessExpr(CapsuleParser::DotAccessExprContext *ctx) = 0;

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

  virtual void enterTypeName(CapsuleParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(CapsuleParser::TypeNameContext *ctx) = 0;

  virtual void enterCreateVar(CapsuleParser::CreateVarContext *ctx) = 0;
  virtual void exitCreateVar(CapsuleParser::CreateVarContext *ctx) = 0;

  virtual void enterCreateWithType(CapsuleParser::CreateWithTypeContext *ctx) = 0;
  virtual void exitCreateWithType(CapsuleParser::CreateWithTypeContext *ctx) = 0;

  virtual void enterCreateInferType(CapsuleParser::CreateInferTypeContext *ctx) = 0;
  virtual void exitCreateInferType(CapsuleParser::CreateInferTypeContext *ctx) = 0;

  virtual void enterModifyVar(CapsuleParser::ModifyVarContext *ctx) = 0;
  virtual void exitModifyVar(CapsuleParser::ModifyVarContext *ctx) = 0;

  virtual void enterInPlaceOp(CapsuleParser::InPlaceOpContext *ctx) = 0;
  virtual void exitInPlaceOp(CapsuleParser::InPlaceOpContext *ctx) = 0;

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

  virtual void enterIncDecStatement(CapsuleParser::IncDecStatementContext *ctx) = 0;
  virtual void exitIncDecStatement(CapsuleParser::IncDecStatementContext *ctx) = 0;

  virtual void enterFunctionCallStatement(CapsuleParser::FunctionCallStatementContext *ctx) = 0;
  virtual void exitFunctionCallStatement(CapsuleParser::FunctionCallStatementContext *ctx) = 0;

  virtual void enterIfStatement(CapsuleParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(CapsuleParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(CapsuleParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(CapsuleParser::WhileStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(CapsuleParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(CapsuleParser::CompoundStatementContext *ctx) = 0;

  virtual void enterFunctionDef(CapsuleParser::FunctionDefContext *ctx) = 0;
  virtual void exitFunctionDef(CapsuleParser::FunctionDefContext *ctx) = 0;

  virtual void enterFunctionDefParams(CapsuleParser::FunctionDefParamsContext *ctx) = 0;
  virtual void exitFunctionDefParams(CapsuleParser::FunctionDefParamsContext *ctx) = 0;

  virtual void enterTypeVariety(CapsuleParser::TypeVarietyContext *ctx) = 0;
  virtual void exitTypeVariety(CapsuleParser::TypeVarietyContext *ctx) = 0;

  virtual void enterTypeLiteral(CapsuleParser::TypeLiteralContext *ctx) = 0;
  virtual void exitTypeLiteral(CapsuleParser::TypeLiteralContext *ctx) = 0;

  virtual void enterTypeFromName(CapsuleParser::TypeFromNameContext *ctx) = 0;
  virtual void exitTypeFromName(CapsuleParser::TypeFromNameContext *ctx) = 0;

  virtual void enterTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *ctx) = 0;
  virtual void exitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *ctx) = 0;

  virtual void enterTypeOrAliasDef(CapsuleParser::TypeOrAliasDefContext *ctx) = 0;
  virtual void exitTypeOrAliasDef(CapsuleParser::TypeOrAliasDefContext *ctx) = 0;

  virtual void enterDefIsFunction(CapsuleParser::DefIsFunctionContext *ctx) = 0;
  virtual void exitDefIsFunction(CapsuleParser::DefIsFunctionContext *ctx) = 0;

  virtual void enterDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *ctx) = 0;
  virtual void exitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *ctx) = 0;

  virtual void enterDefIsVarDef(CapsuleParser::DefIsVarDefContext *ctx) = 0;
  virtual void exitDefIsVarDef(CapsuleParser::DefIsVarDefContext *ctx) = 0;

  virtual void enterFile(CapsuleParser::FileContext *ctx) = 0;
  virtual void exitFile(CapsuleParser::FileContext *ctx) = 0;


};

