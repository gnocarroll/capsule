
// Generated from C:/Users/George/source/repos/capsule/antlr/Capsule.g4 by ANTLR 4.13.2

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

    virtual std::any visitCallArgs(CapsuleParser::CallArgsContext *context) = 0;

    virtual std::any visitIdentExpr(CapsuleParser::IdentExprContext *context) = 0;

    virtual std::any visitUnaryExpr(CapsuleParser::UnaryExprContext *context) = 0;

    virtual std::any visitIntLiteral(CapsuleParser::IntLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(CapsuleParser::FloatLiteralContext *context) = 0;

    virtual std::any visitBinaryExpr(CapsuleParser::BinaryExprContext *context) = 0;

    virtual std::any visitPostfixExpr(CapsuleParser::PostfixExprContext *context) = 0;

    virtual std::any visitParenExpr(CapsuleParser::ParenExprContext *context) = 0;

    virtual std::any visitFuncCallExpr(CapsuleParser::FuncCallExprContext *context) = 0;

    virtual std::any visitArrayAccessExpr(CapsuleParser::ArrayAccessExprContext *context) = 0;

    virtual std::any visitArrowAccessExpr(CapsuleParser::ArrowAccessExprContext *context) = 0;

    virtual std::any visitDotAccessExpr(CapsuleParser::DotAccessExprContext *context) = 0;

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

    virtual std::any visitTypeName(CapsuleParser::TypeNameContext *context) = 0;

    virtual std::any visitCreateVar(CapsuleParser::CreateVarContext *context) = 0;

    virtual std::any visitCreateWithType(CapsuleParser::CreateWithTypeContext *context) = 0;

    virtual std::any visitCreateInferType(CapsuleParser::CreateInferTypeContext *context) = 0;

    virtual std::any visitModifyVar(CapsuleParser::ModifyVarContext *context) = 0;

    virtual std::any visitInPlaceOp(CapsuleParser::InPlaceOpContext *context) = 0;

    virtual std::any visitStatement(CapsuleParser::StatementContext *context) = 0;

    virtual std::any visitIncDecStmt(CapsuleParser::IncDecStmtContext *context) = 0;

    virtual std::any visitFuncCallStmt(CapsuleParser::FuncCallStmtContext *context) = 0;

    virtual std::any visitIfStmt(CapsuleParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(CapsuleParser::WhileStmtContext *context) = 0;

    virtual std::any visitCreateVarStmt(CapsuleParser::CreateVarStmtContext *context) = 0;

    virtual std::any visitModifyVarStmt(CapsuleParser::ModifyVarStmtContext *context) = 0;

    virtual std::any visitIncDecStatement(CapsuleParser::IncDecStatementContext *context) = 0;

    virtual std::any visitFunctionCallStatement(CapsuleParser::FunctionCallStatementContext *context) = 0;

    virtual std::any visitIfStatement(CapsuleParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(CapsuleParser::WhileStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(CapsuleParser::CompoundStatementContext *context) = 0;

    virtual std::any visitFunctionDef(CapsuleParser::FunctionDefContext *context) = 0;

    virtual std::any visitFunctionDefParams(CapsuleParser::FunctionDefParamsContext *context) = 0;

    virtual std::any visitTypeVariety(CapsuleParser::TypeVarietyContext *context) = 0;

    virtual std::any visitTypeLiteral(CapsuleParser::TypeLiteralContext *context) = 0;

    virtual std::any visitTypeFromName(CapsuleParser::TypeFromNameContext *context) = 0;

    virtual std::any visitTypeFromLiteral(CapsuleParser::TypeFromLiteralContext *context) = 0;

    virtual std::any visitTypeOrAliasDef(CapsuleParser::TypeOrAliasDefContext *context) = 0;

    virtual std::any visitDefIsFunction(CapsuleParser::DefIsFunctionContext *context) = 0;

    virtual std::any visitDefIsTypeOrAlias(CapsuleParser::DefIsTypeOrAliasContext *context) = 0;

    virtual std::any visitDefIsVarDef(CapsuleParser::DefIsVarDefContext *context) = 0;

    virtual std::any visitFile(CapsuleParser::FileContext *context) = 0;


};

