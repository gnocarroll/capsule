
// Generated from ../../antlr/Capsule.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




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
    RuleIdent = 0, RuleCall_args = 1, RuleExpr = 2, RuleBinary_op = 3, RuleType_name = 4, 
    RuleCreate_var = 5, RuleModify_var = 6, RuleIn_place_op = 7, RuleStatement = 8, 
    RuleStatement_no_endline = 9, RuleInc_dec_statement = 10, RuleFunction_call_statement = 11, 
    RuleIf_statement = 12, RuleWhile_statement = 13, RuleCompound_statement = 14, 
    RuleFunction_def = 15, RuleFunction_def_params = 16, RuleType_variety = 17, 
    RuleType_literal = 18, RuleType = 19, RuleType_or_alias_def = 20, RuleDefinition = 21, 
    RuleFile = 22
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
  class Call_argsContext;
  class ExprContext;
  class Binary_opContext;
  class Type_nameContext;
  class Create_varContext;
  class Modify_varContext;
  class In_place_opContext;
  class StatementContext;
  class Statement_no_endlineContext;
  class Inc_dec_statementContext;
  class Function_call_statementContext;
  class If_statementContext;
  class While_statementContext;
  class Compound_statementContext;
  class Function_defContext;
  class Function_def_paramsContext;
  class Type_varietyContext;
  class Type_literalContext;
  class TypeContext;
  class Type_or_alias_defContext;
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
   
  };

  IdentContext* ident();

  class  Call_argsContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *arg = nullptr;
    Call_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Call_argsContext* call_args();

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
  };

  class  UnaryExprContext : public ExprContext {
  public:
    UnaryExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    CapsuleParser::ExprContext *sub_expr = nullptr;
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayAccessExprContext : public ExprContext {
  public:
    ArrayAccessExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *sub_expr = nullptr;
    CapsuleParser::ExprContext *index_expr = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IntLiteralContext : public ExprContext {
  public:
    IntLiteralContext(ExprContext *ctx);

    antlr4::Token *value = nullptr;
    antlr4::tree::TerminalNode *INTEGER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FloatLiteralContext : public ExprContext {
  public:
    FloatLiteralContext(ExprContext *ctx);

    antlr4::Token *value = nullptr;
    antlr4::tree::TerminalNode *FLOAT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryExprContext : public ExprContext {
  public:
    BinaryExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *lhs = nullptr;
    CapsuleParser::Binary_opContext *op = nullptr;
    CapsuleParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Binary_opContext *> binary_op();
    Binary_opContext* binary_op(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FuncCallExprContext : public ExprContext {
  public:
    FuncCallExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *sub_expr = nullptr;
    CapsuleParser::Call_argsContext *args = nullptr;
    ExprContext *expr();
    Call_argsContext *call_args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrowAccessExprContext : public ExprContext {
  public:
    ArrowAccessExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *sub_expr = nullptr;
    antlr4::Token *field = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *WORD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DotAccessExprContext : public ExprContext {
  public:
    DotAccessExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *sub_expr = nullptr;
    antlr4::Token *field = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *WORD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    CapsuleParser::ExprContext *sub_expr = nullptr;
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Binary_opContext : public antlr4::ParserRuleContext {
  public:
    Binary_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Binary_opContext() = default;
    void copyFrom(Binary_opContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BitAndContext : public Binary_opContext {
  public:
    BitAndContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CompareContext : public Binary_opContext {
  public:
    CompareContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultDivModContext : public Binary_opContext {
  public:
    MultDivModContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitXorContext : public Binary_opContext {
  public:
    BitXorContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitOrContext : public Binary_opContext {
  public:
    BitOrContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShiftContext : public Binary_opContext {
  public:
    ShiftContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalAndContext : public Binary_opContext {
  public:
    LogicalAndContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AddSubContext : public Binary_opContext {
  public:
    AddSubContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpContext : public Binary_opContext {
  public:
    ExpContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalOrContext : public Binary_opContext {
  public:
    LogicalOrContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  EqNeqContext : public Binary_opContext {
  public:
    EqNeqContext(Binary_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Binary_opContext* binary_op();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::IdentContext *name = nullptr;
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_nameContext* type_name();

  class  Create_varContext : public antlr4::ParserRuleContext {
  public:
    Create_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Create_varContext() = default;
    void copyFrom(Create_varContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateWithExprContext : public Create_varContext {
  public:
    CreateWithExprContext(Create_varContext *ctx);

    antlr4::tree::TerminalNode *WORD();
    Type_nameContext *type_name();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CreateNoExprContext : public Create_varContext {
  public:
    CreateNoExprContext(Create_varContext *ctx);

    antlr4::tree::TerminalNode *WORD();
    Type_nameContext *type_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CreateInferTypeContext : public Create_varContext {
  public:
    CreateInferTypeContext(Create_varContext *ctx);

    antlr4::tree::TerminalNode *WORD();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Create_varContext* create_var();

  class  Modify_varContext : public antlr4::ParserRuleContext {
  public:
    Modify_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORD();
    In_place_opContext *in_place_op();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modify_varContext* modify_var();

  class  In_place_opContext : public antlr4::ParserRuleContext {
  public:
    In_place_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    In_place_opContext() = default;
    void copyFrom(In_place_opContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PlusEqContext : public In_place_opContext {
  public:
    PlusEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LShiftEqContext : public In_place_opContext {
  public:
    LShiftEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MinusEqContext : public In_place_opContext {
  public:
    MinusEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RShiftEqContext : public In_place_opContext {
  public:
    RShiftEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  XorEqContext : public In_place_opContext {
  public:
    XorEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AndEqContext : public In_place_opContext {
  public:
    AndEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OrEqContext : public In_place_opContext {
  public:
    OrEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ModEqContext : public In_place_opContext {
  public:
    ModEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpEqContext : public In_place_opContext {
  public:
    ExpEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultEqContext : public In_place_opContext {
  public:
    MultEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DivEqContext : public In_place_opContext {
  public:
    DivEqContext(In_place_opContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  In_place_opContext* in_place_op();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::Statement_no_endlineContext *sub_stmt = nullptr;
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    Statement_no_endlineContext *statement_no_endline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    CapsuleParser::Modify_varContext *sub_stmt = nullptr;
    Modify_varContext *modify_var();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WhileStmtContext : public Statement_no_endlineContext {
  public:
    WhileStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::While_statementContext *sub_stmt = nullptr;
    While_statementContext *while_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IfStmtContext : public Statement_no_endlineContext {
  public:
    IfStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::If_statementContext *sub_stmt = nullptr;
    If_statementContext *if_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FuncCallStmtContext : public Statement_no_endlineContext {
  public:
    FuncCallStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::Function_call_statementContext *sub_stmt = nullptr;
    Function_call_statementContext *function_call_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CreateVarStmtContext : public Statement_no_endlineContext {
  public:
    CreateVarStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::Create_varContext *sub_stmt = nullptr;
    Create_varContext *create_var();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IncDecStmtContext : public Statement_no_endlineContext {
  public:
    IncDecStmtContext(Statement_no_endlineContext *ctx);

    CapsuleParser::Inc_dec_statementContext *sub_stmt = nullptr;
    Inc_dec_statementContext *inc_dec_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Statement_no_endlineContext* statement_no_endline();

  class  Inc_dec_statementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::IdentContext *inc_dec_ident = nullptr;
    antlr4::Token *op = nullptr;
    Inc_dec_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inc_dec_statementContext* inc_dec_statement();

  class  Function_call_statementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *sub_expr = nullptr;
    CapsuleParser::Call_argsContext *args = nullptr;
    Function_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    Call_argsContext *call_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_statementContext* function_call_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *if_cond = nullptr;
    CapsuleParser::Compound_statementContext *if_body = nullptr;
    CapsuleParser::ExprContext *else_if_cond = nullptr;
    CapsuleParser::Compound_statementContext *else_if_body = nullptr;
    CapsuleParser::Compound_statementContext *else_body = nullptr;
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Compound_statementContext *> compound_statement();
    Compound_statementContext* compound_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_statementContext* if_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::ExprContext *while_cond = nullptr;
    CapsuleParser::Compound_statementContext *while_body = nullptr;
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    ExprContext *expr();
    Compound_statementContext *compound_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  While_statementContext* while_statement();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::StatementContext *sub_stmt = nullptr;
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Function_defContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::Function_def_paramsContext *params = nullptr;
    CapsuleParser::Compound_statementContext *body = nullptr;
    Function_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);
    antlr4::tree::TerminalNode *ENDLINE();
    Function_def_paramsContext *function_def_params();
    Compound_statementContext *compound_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_defContext* function_def();

  class  Function_def_paramsContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::Create_varContext *param = nullptr;
    Function_def_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    std::vector<Create_varContext *> create_var();
    Create_varContext* create_var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_def_paramsContext* function_def_params();

  class  Type_varietyContext : public antlr4::ParserRuleContext {
  public:
    Type_varietyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_varietyContext* type_variety();

  class  Type_literalContext : public antlr4::ParserRuleContext {
  public:
    CapsuleParser::Type_varietyContext *variety = nullptr;
    CapsuleParser::Create_varContext *field = nullptr;
    Type_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ENDLINE();
    antlr4::tree::TerminalNode* ENDLINE(size_t i);
    antlr4::tree::TerminalNode *WORD();
    Type_varietyContext *type_variety();
    std::vector<Create_varContext *> create_var();
    Create_varContext* create_var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_literalContext* type_literal();

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

    CapsuleParser::Type_literalContext *literal = nullptr;
    Type_literalContext *type_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TypeFromNameContext : public TypeContext {
  public:
    TypeFromNameContext(TypeContext *ctx);

    CapsuleParser::Type_nameContext *name = nullptr;
    Type_nameContext *type_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  TypeContext* type();

  class  Type_or_alias_defContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type_or_alias_tok = nullptr;
    antlr4::Token *name = nullptr;
    CapsuleParser::TypeContext *assignType = nullptr;
    Type_or_alias_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDLINE();
    antlr4::tree::TerminalNode *WORD();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_or_alias_defContext* type_or_alias_def();

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

    CapsuleParser::Type_or_alias_defContext *type_or_alias = nullptr;
    Type_or_alias_defContext *type_or_alias_def();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefIsFunctionContext : public DefinitionContext {
  public:
    DefIsFunctionContext(DefinitionContext *ctx);

    CapsuleParser::Function_defContext *func = nullptr;
    Function_defContext *function_def();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefIsVarDefContext : public DefinitionContext {
  public:
    DefIsVarDefContext(DefinitionContext *ctx);

    CapsuleParser::Create_varContext *new_var = nullptr;
    antlr4::tree::TerminalNode *ENDLINE();
    Create_varContext *create_var();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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

