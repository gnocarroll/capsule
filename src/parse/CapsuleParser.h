
// Generated from C:/Users/George/source/repos/capsule/antlr/Capsule.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime/antlr4-runtime.h"




class  CapsuleParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    WORD = 57, INTEGER = 58, FLOAT = 59, WS = 60, ESC_NEWLINE = 61, ENDLINE = 62
  };

  enum {
    RuleIdent = 0, RuleCallArgs = 1, RuleExpr = 2, RuleEndPostfixExpr = 3, 
    RuleBinaryOp = 4, RuleTypeName = 5, RuleCreateVar = 6, RuleCreateVarTypeAndExpr = 7, 
    RuleModifyVar = 8, RuleInPlaceOp = 9, RuleStatement = 10, RuleStatement_no_endline = 11, 
    RuleIncDecStatement = 12, RuleFunctionCallStatement = 13, RuleIfStatement = 14, 
    RuleWhileStatement = 15, RuleCompoundStatement = 16, RuleFunctionDef = 17, 
    RuleFunctionDefParams = 18, RuleTypeVariety = 19, RuleTypeLiteral = 20, 
    RuleType = 21, RuleTypeOrAliasDef = 22, RuleDefinition = 23, RuleFile = 24
  };

  explicit CapsuleParser(antlr4::TokenStream *input);

  CapsuleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CapsuleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class IdentContext;
  class CallArgsContext;
  class ExprContext;
  class EndPostfixExprContext;
  class BinaryOpContext;
  class TypeNameContext;
  class CreateVarContext;
  class CreateVarTypeAndExprContext;
  class ModifyVarContext;
  class InPlaceOpContext;
  class StatementContext;
  class Statement_no_endlineContext;
  class IncDecStatementContext;
  class FunctionCallStatementContext;
  class IfStatementContext;
  class WhileStatementContext;
  class CompoundStatementContext;
  class FunctionDefContext;
  class FunctionDefParamsContext;
  class TypeVarietyContext;
  class TypeLiteralContext;
  class TypeContext;
  class TypeOrAliasDefContext;
  class DefinitionContext;
  class FileContext; 

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *namespace_ = nullptr;
    antlr4::Token *name = nullptr;
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentContext* ident();

  class  CallArgsContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *arg = nullptr;
    CallArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallArgsContext* callArgs();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentExprContext : public ExprContext {
  public:
    IdentExprContext(ExprContext *ctx);

    CapsuleParser::IdentContext *expr_ident = nullptr;
    IdentContext *ident();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryExprContext : public ExprContext {
  public:
    UnaryExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    CapsuleParser::ExprContext *subExpr = nullptr;
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntLiteralContext : public ExprContext {
  public:
    IntLiteralContext(ExprContext *ctx);

    antlr4::Token *value = nullptr;
    antlr4::tree::TerminalNode *INTEGER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FloatLiteralContext : public ExprContext {
  public:
    FloatLiteralContext(ExprContext *ctx);

    antlr4::Token *value = nullptr;
    antlr4::tree::TerminalNode *FLOAT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryExprContext : public ExprContext {
  public:
    BinaryExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *lhs = nullptr;
    CapsuleParser::BinaryOpContext *op = nullptr;
    CapsuleParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<BinaryOpContext *> binaryOp();
    BinaryOpContext* binaryOp(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostfixExprContext : public ExprContext {
  public:
    PostfixExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *subExpr = nullptr;
    EndPostfixExprContext *endPostfixExpr();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *subExpr = nullptr;
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  EndPostfixExprContext : public antlr4::ParserRuleContext {
  public:
    EndPostfixExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EndPostfixExprContext() = default;
    void copyFrom(EndPostfixExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayAccessExprContext : public EndPostfixExprContext {
  public:
    ArrayAccessExprContext(EndPostfixExprContext *ctx);

    CapsuleParser::ExprContext *index_expr = nullptr;
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallExprContext : public EndPostfixExprContext {
  public:
    FuncCallExprContext(EndPostfixExprContext *ctx);

    CapsuleParser::CallArgsContext *args = nullptr;
    CallArgsContext *callArgs();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrowAccessExprContext : public EndPostfixExprContext {
  public:
    ArrowAccessExprContext(EndPostfixExprContext *ctx);

    antlr4::Token *field = nullptr;
    antlr4::tree::TerminalNode *WORD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DotAccessExprContext : public EndPostfixExprContext {
  public:
    DotAccessExprContext(EndPostfixExprContext *ctx);

    antlr4::Token *field = nullptr;
    antlr4::tree::TerminalNode *WORD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  EndPostfixExprContext* endPostfixExpr();

  class  BinaryOpContext : public antlr4::ParserRuleContext {
  public:
    BinaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BinaryOpContext() = default;
    void copyFrom(BinaryOpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BitAndContext : public BinaryOpContext {
  public:
    BitAndContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareContext : public BinaryOpContext {
  public:
    CompareContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultDivModContext : public BinaryOpContext {
  public:
    MultDivModContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitXorContext : public BinaryOpContext {
  public:
    BitXorContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrContext : public BinaryOpContext {
  public:
    BitOrContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShiftContext : public BinaryOpContext {
  public:
    ShiftContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalAndContext : public BinaryOpContext {
  public:
    LogicalAndContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubContext : public BinaryOpContext {
  public:
    AddSubContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpContext : public BinaryOpContext {
  public:
    ExpContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalOrContext : public BinaryOpContext {
  public:
    LogicalOrContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqNeqContext : public BinaryOpContext {
  public:
    EqNeqContext(BinaryOpContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BinaryOpContext* binaryOp();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::IdentContext *name = nullptr;
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  CreateVarContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    CapsuleParser::CreateVarTypeAndExprContext *typeAndExpr = nullptr;
    CreateVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORD();
    CreateVarTypeAndExprContext *createVarTypeAndExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateVarContext* createVar();

  class  CreateVarTypeAndExprContext : public antlr4::ParserRuleContext {
  public:
    CreateVarTypeAndExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateVarTypeAndExprContext() = default;
    void copyFrom(CreateVarTypeAndExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateWithTypeContext : public CreateVarTypeAndExprContext {
  public:
    CreateWithTypeContext(CreateVarTypeAndExprContext *ctx);

    CapsuleParser::ExprContext *subExpr = nullptr;
    TypeNameContext *typeName();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateInferTypeContext : public CreateVarTypeAndExprContext {
  public:
    CreateInferTypeContext(CreateVarTypeAndExprContext *ctx);

    CapsuleParser::ExprContext *subExpr = nullptr;
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CreateVarTypeAndExprContext* createVarTypeAndExpr();

  class  ModifyVarContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::InPlaceOpContext *op = nullptr;
    CapsuleParser::ExprContext *subExpr = nullptr;
    ModifyVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORD();
    InPlaceOpContext *inPlaceOp();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifyVarContext* modifyVar();

  class  InPlaceOpContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    InPlaceOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InPlaceOpContext* inPlaceOp();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::Statement_no_endlineContext *subStmt = nullptr;
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    Statement_no_endlineContext *statement_no_endline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Statement_no_endlineContext : public antlr4::ParserRuleContext {
  public:
    Statement_no_endlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Statement_no_endlineContext() = default;
    void copyFrom(Statement_no_endlineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ModifyVarStmtContext : public Statement_no_endlineContext {
  public:
    ModifyVarStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::ModifyVarContext *subStmt = nullptr;
    ModifyVarContext *modifyVar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileStmtContext : public Statement_no_endlineContext {
  public:
    WhileStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::WhileStatementContext *subStmt = nullptr;
    WhileStatementContext *whileStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStmtContext : public Statement_no_endlineContext {
  public:
    IfStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::IfStatementContext *subStmt = nullptr;
    IfStatementContext *ifStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallStmtContext : public Statement_no_endlineContext {
  public:
    FuncCallStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::FunctionCallStatementContext *subStmt = nullptr;
    FunctionCallStatementContext *functionCallStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateVarStmtContext : public Statement_no_endlineContext {
  public:
    CreateVarStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::CreateVarContext *subStmt = nullptr;
    CreateVarContext *createVar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncDecStmtContext : public Statement_no_endlineContext {
  public:
    IncDecStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::IncDecStatementContext *subStmt = nullptr;
    IncDecStatementContext *incDecStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Statement_no_endlineContext* statement_no_endline();

  class  IncDecStatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::IdentContext *incDecIdent = nullptr;
    antlr4::Token *op = nullptr;
    IncDecStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncDecStatementContext* incDecStatement();

  class  FunctionCallStatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *subExpr = nullptr;
    CapsuleParser::CallArgsContext *args = nullptr;
    FunctionCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    CallArgsContext *callArgs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallStatementContext* functionCallStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *if_cond = nullptr;
    CapsuleParser::CompoundStatementContext *if_body = nullptr;
    CapsuleParser::ExprContext *else_if_cond = nullptr;
    CapsuleParser::CompoundStatementContext *else_if_body = nullptr;
    CapsuleParser::CompoundStatementContext *else_body = nullptr;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<CompoundStatementContext *> compoundStatement();
    CompoundStatementContext* compoundStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *whileCond = nullptr;
    CapsuleParser::CompoundStatementContext *whileBody = nullptr;
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    ExprContext *expr();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::StatementContext *subStmt = nullptr;
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  FunctionDefContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    CapsuleParser::FunctionDefParamsContext *params = nullptr;
    CapsuleParser::CompoundStatementContext *body = nullptr;
    antlr4::Token *endName = nullptr;
    FunctionDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);
    FunctionDefParamsContext *functionDefParams();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefContext* functionDef();

  class  FunctionDefParamsContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::CreateVarContext *param = nullptr;
    FunctionDefParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<CreateVarContext *> createVar();
    CreateVarContext* createVar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefParamsContext* functionDefParams();

  class  TypeVarietyContext : public antlr4::ParserRuleContext {
  public:
    TypeVarietyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeVarietyContext* typeVariety();

  class  TypeLiteralContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::TypeVarietyContext *variety = nullptr;
    CapsuleParser::CreateVarContext *field = nullptr;
    antlr4::Token *endWord = nullptr;
    TypeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeVarietyContext *typeVariety();
    antlr4::tree::TerminalNode *WORD();
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<CreateVarContext *> createVar();
    CreateVarContext* createVar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeLiteralContext* typeLiteral();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeContext() = default;
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeFromLiteralContext : public TypeContext {
  public:
    TypeFromLiteralContext(TypeContext *ctx);

    CapsuleParser::TypeLiteralContext *literal = nullptr;
    TypeLiteralContext *typeLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeFromNameContext : public TypeContext {
  public:
    TypeFromNameContext(TypeContext *ctx);

    CapsuleParser::TypeNameContext *name = nullptr;
    TypeNameContext *typeName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();

  class  TypeOrAliasDefContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *typeOrAliasTok = nullptr;
    antlr4::Token *name = nullptr;
    CapsuleParser::TypeContext *assignType = nullptr;
    TypeOrAliasDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    antlr4::tree::TerminalNode *WORD();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeOrAliasDefContext* typeOrAliasDef();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefinitionContext() = default;
    void copyFrom(DefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefIsTypeOrAliasContext : public DefinitionContext {
  public:
    DefIsTypeOrAliasContext(DefinitionContext *ctx);

    CapsuleParser::TypeOrAliasDefContext *type_or_alias = nullptr;
    TypeOrAliasDefContext *typeOrAliasDef();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefIsFunctionContext : public DefinitionContext {
  public:
    DefIsFunctionContext(DefinitionContext *ctx);

    CapsuleParser::FunctionDefContext *func = nullptr;
    FunctionDefContext *functionDef();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefIsVarDefContext : public DefinitionContext {
  public:
    DefIsVarDefContext(DefinitionContext *ctx);

    CapsuleParser::CreateVarContext *new_var = nullptr;
    antlr4::tree::TerminalNode *ENDLINE();
    CreateVarContext *createVar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefinitionContext* definition();

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::DefinitionContext *def = nullptr;
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

