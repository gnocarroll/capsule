
// Generated from ../../antlr/Capsule.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime/antlr4-runtime.h"
#include "CapsuleListener.h"


/**
 * This class provides an empty implementation of CapsuleListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CapsuleBaseListener : public CapsuleListener {
public:

  virtual void enterIdent(CapsuleParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(CapsuleParser::IdentContext * /*ctx*/) override { }

  virtual void enterCallArgs(CapsuleParser::CallArgsContext * /*ctx*/) override { }
  virtual void exitCallArgs(CapsuleParser::CallArgsContext * /*ctx*/) override { }

  virtual void enterIdentExpr(CapsuleParser::IdentExprContext * /*ctx*/) override { }
  virtual void exitIdentExpr(CapsuleParser::IdentExprContext * /*ctx*/) override { }

  virtual void enterUnaryExpr(CapsuleParser::UnaryExprContext * /*ctx*/) override { }
  virtual void exitUnaryExpr(CapsuleParser::UnaryExprContext * /*ctx*/) override { }

  virtual void enterIntLiteral(CapsuleParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(CapsuleParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(CapsuleParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(CapsuleParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterBinaryExpr(CapsuleParser::BinaryExprContext * /*ctx*/) override { }
  virtual void exitBinaryExpr(CapsuleParser::BinaryExprContext * /*ctx*/) override { }

  virtual void enterPostfixExpr(CapsuleParser::PostfixExprContext * /*ctx*/) override { }
  virtual void exitPostfixExpr(CapsuleParser::PostfixExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(CapsuleParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(CapsuleParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterFuncCallExpr(CapsuleParser::FuncCallExprContext * /*ctx*/) override { }
  virtual void exitFuncCallExpr(CapsuleParser::FuncCallExprContext * /*ctx*/) override { }

  virtual void enterArrayAccessExpr(CapsuleParser::ArrayAccessExprContext * /*ctx*/) override { }
  virtual void exitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext * /*ctx*/) override { }

  virtual void enterArrowAccessExpr(CapsuleParser::ArrowAccessExprContext * /*ctx*/) override { }
  virtual void exitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext * /*ctx*/) override { }

  virtual void enterDotAccessExpr(CapsuleParser::DotAccessExprContext * /*ctx*/) override { }
  virtual void exitDotAccessExpr(CapsuleParser::DotAccessExprContext * /*ctx*/) override { }

  virtual void enterExp(CapsuleParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(CapsuleParser::ExpContext * /*ctx*/) override { }

  virtual void enterMultDivMod(CapsuleParser::MultDivModContext * /*ctx*/) override { }
  virtual void exitMultDivMod(CapsuleParser::MultDivModContext * /*ctx*/) override { }

  virtual void enterAddSub(CapsuleParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(CapsuleParser::AddSubContext * /*ctx*/) override { }

  virtual void enterShift(CapsuleParser::ShiftContext * /*ctx*/) override { }
  virtual void exitShift(CapsuleParser::ShiftContext * /*ctx*/) override { }

  virtual void enterBitAnd(CapsuleParser::BitAndContext * /*ctx*/) override { }
  virtual void exitBitAnd(CapsuleParser::BitAndContext * /*ctx*/) override { }

  virtual void enterBitXor(CapsuleParser::BitXorContext * /*ctx*/) override { }
  virtual void exitBitXor(CapsuleParser::BitXorContext * /*ctx*/) override { }

  virtual void enterBitOr(CapsuleParser::BitOrContext * /*ctx*/) override { }
  virtual void exitBitOr(CapsuleParser::BitOrContext * /*ctx*/) override { }

  virtual void enterCompare(CapsuleParser::CompareContext * /*ctx*/) override { }
  virtual void exitCompare(CapsuleParser::CompareContext * /*ctx*/) override { }

  virtual void enterEqNeq(CapsuleParser::EqNeqContext * /*ctx*/) override { }
  virtual void exitEqNeq(CapsuleParser::EqNeqContext * /*ctx*/) override { }

  virtual void enterLogicalAnd(CapsuleParser::LogicalAndContext * /*ctx*/) override { }
  virtual void exitLogicalAnd(CapsuleParser::LogicalAndContext * /*ctx*/) override { }

  virtual void enterLogicalOr(CapsuleParser::LogicalOrContext * /*ctx*/) override { }
  virtual void exitLogicalOr(CapsuleParser::LogicalOrContext * /*ctx*/) override { }

  virtual void enterTypeName(CapsuleParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(CapsuleParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterCreateVar(CapsuleParser::CreateVarContext * /*ctx*/) override { }
  virtual void exitCreateVar(CapsuleParser::CreateVarContext * /*ctx*/) override { }

  virtual void enterCreateWithType(CapsuleParser::CreateWithTypeContext * /*ctx*/) override { }
  virtual void exitCreateWithType(CapsuleParser::CreateWithTypeContext * /*ctx*/) override { }

  virtual void enterCreateInferType(CapsuleParser::CreateInferTypeContext * /*ctx*/) override { }
  virtual void exitCreateInferType(CapsuleParser::CreateInferTypeContext * /*ctx*/) override { }

  virtual void enterModifyVar(CapsuleParser::ModifyVarContext * /*ctx*/) override { }
  virtual void exitModifyVar(CapsuleParser::ModifyVarContext * /*ctx*/) override { }

  virtual void enterPlusEq(CapsuleParser::PlusEqContext * /*ctx*/) override { }
  virtual void exitPlusEq(CapsuleParser::PlusEqContext * /*ctx*/) override { }

  virtual void enterMinusEq(CapsuleParser::MinusEqContext * /*ctx*/) override { }
  virtual void exitMinusEq(CapsuleParser::MinusEqContext * /*ctx*/) override { }

  virtual void enterMultEq(CapsuleParser::MultEqContext * /*ctx*/) override { }
  virtual void exitMultEq(CapsuleParser::MultEqContext * /*ctx*/) override { }

  virtual void enterDivEq(CapsuleParser::DivEqContext * /*ctx*/) override { }
  virtual void exitDivEq(CapsuleParser::DivEqContext * /*ctx*/) override { }

  virtual void enterModEq(CapsuleParser::ModEqContext * /*ctx*/) override { }
  virtual void exitModEq(CapsuleParser::ModEqContext * /*ctx*/) override { }

  virtual void enterExpEq(CapsuleParser::ExpEqContext * /*ctx*/) override { }
  virtual void exitExpEq(CapsuleParser::ExpEqContext * /*ctx*/) override { }

  virtual void enterXorEq(CapsuleParser::XorEqContext * /*ctx*/) override { }
  virtual void exitXorEq(CapsuleParser::XorEqContext * /*ctx*/) override { }

  virtual void enterOrEq(CapsuleParser::OrEqContext * /*ctx*/) override { }
  virtual void exitOrEq(CapsuleParser::OrEqContext * /*ctx*/) override { }

  virtual void enterAndEq(CapsuleParser::AndEqContext * /*ctx*/) override { }
  virtual void exitAndEq(CapsuleParser::AndEqContext * /*ctx*/) override { }

  virtual void enterLShiftEq(CapsuleParser::LShiftEqContext * /*ctx*/) override { }
  virtual void exitLShiftEq(CapsuleParser::LShiftEqContext * /*ctx*/) override { }

  virtual void enterRShiftEq(CapsuleParser::RShiftEqContext * /*ctx*/) override { }
  virtual void exitRShiftEq(CapsuleParser::RShiftEqContext * /*ctx*/) override { }

  virtual void enterStatement(CapsuleParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CapsuleParser::StatementContext * /*ctx*/) override { }

  virtual void enterIncDecStmt(CapsuleParser::IncDecStmtContext * /*ctx*/) override { }
  virtual void exitIncDecStmt(CapsuleParser::IncDecStmtContext * /*ctx*/) override { }

  virtual void enterFuncCallStmt(CapsuleParser::FuncCallStmtContext * /*ctx*/) override { }
  virtual void exitFuncCallStmt(CapsuleParser::FuncCallStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(CapsuleParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(CapsuleParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(CapsuleParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(CapsuleParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterCreateVarStmt(CapsuleParser::CreateVarStmtContext * /*ctx*/) override { }
  virtual void exitCreateVarStmt(CapsuleParser::CreateVarStmtContext * /*ctx*/) override { }

  virtual void enterModifyVarStmt(CapsuleParser::ModifyVarStmtContext * /*ctx*/) override { }
  virtual void exitModifyVarStmt(CapsuleParser::ModifyVarStmtContext * /*ctx*/) override { }

  virtual void enterIncDecStatement(CapsuleParser::IncDecStatementContext * /*ctx*/) override { }
  virtual void exitIncDecStatement(CapsuleParser::IncDecStatementContext * /*ctx*/) override { }

  virtual void enterFunctionCallStatement(CapsuleParser::FunctionCallStatementContext * /*ctx*/) override { }
  virtual void exitFunctionCallStatement(CapsuleParser::FunctionCallStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(CapsuleParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(CapsuleParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(CapsuleParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(CapsuleParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(CapsuleParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(CapsuleParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDef(CapsuleParser::FunctionDefContext * /*ctx*/) override { }
  virtual void exitFunctionDef(CapsuleParser::FunctionDefContext * /*ctx*/) override { }

  virtual void enterFunctionDefParams(CapsuleParser::FunctionDefParamsContext * /*ctx*/) override { }
  virtual void exitFunctionDefParams(CapsuleParser::FunctionDefParamsContext * /*ctx*/) override { }

  virtual void enterTypeVariety(CapsuleParser::TypeVarietyContext * /*ctx*/) override { }
  virtual void exitTypeVariety(CapsuleParser::TypeVarietyContext * /*ctx*/) override { }

  virtual void enterTypeLiteral(CapsuleParser::TypeLiteralContext * /*ctx*/) override { }
  virtual void exitTypeLiteral(CapsuleParser::TypeLiteralContext * /*ctx*/) override { }

  virtual void enterTypeFromName(CapsuleParser::TypeFromNameContext * /*ctx*/) override { }
  virtual void exitTypeFromName(CapsuleParser::TypeFromNameContext * /*ctx*/) override { }

  virtual void enterTypeFromLiteral(CapsuleParser::TypeFromLiteralContext * /*ctx*/) override { }
  virtual void exitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext * /*ctx*/) override { }

  virtual void enterTypeOrAliasDef(CapsuleParser::TypeOrAliasDefContext * /*ctx*/) override { }
  virtual void exitTypeOrAliasDef(CapsuleParser::TypeOrAliasDefContext * /*ctx*/) override { }

  virtual void enterDefIsFunction(CapsuleParser::DefIsFunctionContext * /*ctx*/) override { }
  virtual void exitDefIsFunction(CapsuleParser::DefIsFunctionContext * /*ctx*/) override { }

  virtual void enterDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext * /*ctx*/) override { }
  virtual void exitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext * /*ctx*/) override { }

  virtual void enterDefIsVarDef(CapsuleParser::DefIsVarDefContext * /*ctx*/) override { }
  virtual void exitDefIsVarDef(CapsuleParser::DefIsVarDefContext * /*ctx*/) override { }

  virtual void enterFile(CapsuleParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(CapsuleParser::FileContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

