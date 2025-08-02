

// Generated from ../../antlr/Capsule.g4 by ANTLR 4.13.2



#pragma once





#include "antlr4-runtime/antlr4-runtime.h"
#include "CapsuleVisitor.h"





/**

 * This class provides an empty implementation of CapsuleVisitor, which can be

 * extended to create a visitor which only needs to handle a subset of the available methods.

 */

class  CapsuleBaseVisitor : public CapsuleVisitor {

public:



  virtual std::any visitIdent(CapsuleParser::IdentContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCall_args(CapsuleParser::Call_argsContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitIdentExpr(CapsuleParser::IdentExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitUnaryExpr(CapsuleParser::UnaryExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitIntLiteral(CapsuleParser::IntLiteralContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFloatLiteral(CapsuleParser::FloatLiteralContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitBinaryExpr(CapsuleParser::BinaryExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFuncCallExpr(CapsuleParser::FuncCallExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitDotAccessExpr(CapsuleParser::DotAccessExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitParenExpr(CapsuleParser::ParenExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitExp(CapsuleParser::ExpContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitMultDivMod(CapsuleParser::MultDivModContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitAddSub(CapsuleParser::AddSubContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitShift(CapsuleParser::ShiftContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitBitAnd(CapsuleParser::BitAndContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitBitXor(CapsuleParser::BitXorContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitBitOr(CapsuleParser::BitOrContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCompare(CapsuleParser::CompareContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitEqNeq(CapsuleParser::EqNeqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitLogicalAnd(CapsuleParser::LogicalAndContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitLogicalOr(CapsuleParser::LogicalOrContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitType_name(CapsuleParser::Type_nameContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCreateNoExpr(CapsuleParser::CreateNoExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCreateWithExpr(CapsuleParser::CreateWithExprContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCreateInferType(CapsuleParser::CreateInferTypeContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitModify_var(CapsuleParser::Modify_varContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitPlusEq(CapsuleParser::PlusEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitMinusEq(CapsuleParser::MinusEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitMultEq(CapsuleParser::MultEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitDivEq(CapsuleParser::DivEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitModEq(CapsuleParser::ModEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitExpEq(CapsuleParser::ExpEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitXorEq(CapsuleParser::XorEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitOrEq(CapsuleParser::OrEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitAndEq(CapsuleParser::AndEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitLShiftEq(CapsuleParser::LShiftEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitRShiftEq(CapsuleParser::RShiftEqContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitStatement(CapsuleParser::StatementContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitIncDecStmt(CapsuleParser::IncDecStmtContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFuncCallStmt(CapsuleParser::FuncCallStmtContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitIfStmt(CapsuleParser::IfStmtContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitWhileStmt(CapsuleParser::WhileStmtContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCreateVarStmt(CapsuleParser::CreateVarStmtContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitModifyVarStmt(CapsuleParser::ModifyVarStmtContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitInc_dec_statement(CapsuleParser::Inc_dec_statementContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFunction_call_statement(CapsuleParser::Function_call_statementContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitIf_statement(CapsuleParser::If_statementContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitWhile_statement(CapsuleParser::While_statementContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitCompound_statement(CapsuleParser::Compound_statementContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFunction_def(CapsuleParser::Function_defContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFunction_def_params(CapsuleParser::Function_def_paramsContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitType_variety(CapsuleParser::Type_varietyContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitType_literal(CapsuleParser::Type_literalContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitTypeFromName(CapsuleParser::TypeFromNameContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitType_or_alias_def(CapsuleParser::Type_or_alias_defContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitDefIsFunction(CapsuleParser::DefIsFunctionContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitDefIsVarDef(CapsuleParser::DefIsVarDefContext *ctx) override {

    return visitChildren(ctx);

  }



  virtual std::any visitFile(CapsuleParser::FileContext *ctx) override {

    return visitChildren(ctx);

  }





};


