
// Generated from ../../antlr/Capsule.g4 by ANTLR 4.13.2


#include "CapsuleListener.h"
#include "CapsuleVisitor.h"

#include "CapsuleParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CapsuleParserStaticData final {
  CapsuleParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CapsuleParserStaticData(const CapsuleParserStaticData&) = delete;
  CapsuleParserStaticData(CapsuleParserStaticData&&) = delete;
  CapsuleParserStaticData& operator=(const CapsuleParserStaticData&) = delete;
  CapsuleParserStaticData& operator=(CapsuleParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag capsuleParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CapsuleParserStaticData> capsuleParserStaticData = nullptr;

void capsuleParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (capsuleParserStaticData != nullptr) {
    return;
  }
#else
  assert(capsuleParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CapsuleParserStaticData>(
    std::vector<std::string>{
      "ident", "call_args", "expr", "binary_op", "type_name", "create_var", 
      "modify_var", "in_place_op", "statement", "statement_no_endline", 
      "inc_dec_statement", "function_call_statement", "if_statement", "while_statement", 
      "compound_statement", "function_def", "function_def_params", "type_variety", 
      "type_literal", "type", "type_or_alias_def", "definition", "file"
    },
    std::vector<std::string>{
      "", "'::'", "'('", "','", "')'", "'['", "']'", "'->'", "'.'", "'*'", 
      "'&'", "'+'", "'-'", "'~'", "'not'", "'**'", "'/'", "'%'", "'<<'", 
      "'>>'", "'^'", "'|'", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", 
      "'and'", "'or'", "':'", "'='", "':='", "'+='", "'-='", "'*='", "'/='", 
      "'%='", "'**='", "'^='", "'|='", "'&='", "'<<='", "'>>='", "'++'", 
      "'--'", "'if'", "'else'", "'end'", "'while'", "'function'", "'signed'", 
      "'unsigned'", "'struct'", "'type'", "'alias'", "'is'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "WORD", "INTEGER", "FLOAT", "WS", "ESC_NEWLINE", 
      "ENDLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,62,319,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,5,0,49,8,0,10,0,12,0,52,9,0,1,0,1,0,1,1,1,1,5,1,
  	58,8,1,10,1,12,1,61,9,1,1,1,1,1,1,1,5,1,66,8,1,10,1,12,1,69,9,1,1,1,5,
  	1,72,8,1,10,1,12,1,75,9,1,1,1,3,1,78,8,1,1,1,5,1,81,8,1,10,1,12,1,84,
  	9,1,3,1,86,8,1,1,1,1,1,1,2,1,2,4,2,92,8,2,11,2,12,2,93,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,104,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,4,2,123,8,2,11,2,12,2,124,5,2,127,8,2,10,
  	2,12,2,130,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,143,8,
  	3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,159,8,5,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,176,8,
  	7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,187,8,9,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,205,
  	8,12,10,12,12,12,208,9,12,1,12,1,12,1,12,3,12,213,8,12,1,12,1,12,1,12,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,5,14,227,8,14,10,14,12,14,
  	230,9,14,5,14,232,8,14,10,14,12,14,235,9,14,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,16,1,16,5,16,247,8,16,10,16,12,16,250,9,16,1,16,1,16,
  	1,16,5,16,255,8,16,10,16,12,16,258,9,16,1,16,1,16,1,16,3,16,263,8,16,
  	1,16,5,16,266,8,16,10,16,12,16,269,9,16,3,16,271,8,16,1,16,1,16,1,17,
  	1,17,1,18,1,18,1,18,1,18,1,18,5,18,282,8,18,10,18,12,18,285,9,18,1,18,
  	1,18,1,18,1,19,1,19,3,19,292,8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,21,
  	1,21,1,21,1,21,1,21,3,21,305,8,21,1,22,1,22,5,22,309,8,22,10,22,12,22,
  	312,9,22,5,22,314,8,22,10,22,12,22,317,9,22,1,22,0,1,4,23,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,9,1,0,9,14,2,0,9,
  	9,16,17,1,0,11,12,1,0,18,19,1,0,22,25,1,0,26,27,1,0,44,45,1,0,51,53,1,
  	0,54,55,355,0,50,1,0,0,0,2,55,1,0,0,0,4,103,1,0,0,0,6,142,1,0,0,0,8,144,
  	1,0,0,0,10,158,1,0,0,0,12,160,1,0,0,0,14,175,1,0,0,0,16,177,1,0,0,0,18,
  	186,1,0,0,0,20,188,1,0,0,0,22,191,1,0,0,0,24,194,1,0,0,0,26,217,1,0,0,
  	0,28,233,1,0,0,0,30,236,1,0,0,0,32,244,1,0,0,0,34,274,1,0,0,0,36,276,
  	1,0,0,0,38,291,1,0,0,0,40,293,1,0,0,0,42,304,1,0,0,0,44,315,1,0,0,0,46,
  	47,5,57,0,0,47,49,5,1,0,0,48,46,1,0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,
  	51,1,0,0,0,51,53,1,0,0,0,52,50,1,0,0,0,53,54,5,57,0,0,54,1,1,0,0,0,55,
  	59,5,2,0,0,56,58,5,62,0,0,57,56,1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,
  	60,1,0,0,0,60,85,1,0,0,0,61,59,1,0,0,0,62,73,3,4,2,0,63,67,5,3,0,0,64,
  	66,5,62,0,0,65,64,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,
  	70,1,0,0,0,69,67,1,0,0,0,70,72,3,4,2,0,71,63,1,0,0,0,72,75,1,0,0,0,73,
  	71,1,0,0,0,73,74,1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,0,76,78,5,3,0,0,77,
  	76,1,0,0,0,77,78,1,0,0,0,78,82,1,0,0,0,79,81,5,62,0,0,80,79,1,0,0,0,81,
  	84,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,85,
  	62,1,0,0,0,85,86,1,0,0,0,86,87,1,0,0,0,87,88,5,4,0,0,88,3,1,0,0,0,89,
  	91,6,2,-1,0,90,92,7,0,0,0,91,90,1,0,0,0,92,93,1,0,0,0,93,91,1,0,0,0,93,
  	94,1,0,0,0,94,95,1,0,0,0,95,104,3,4,2,6,96,97,5,2,0,0,97,98,3,4,2,0,98,
  	99,5,4,0,0,99,104,1,0,0,0,100,104,5,58,0,0,101,104,5,59,0,0,102,104,3,
  	0,0,0,103,89,1,0,0,0,103,96,1,0,0,0,103,100,1,0,0,0,103,101,1,0,0,0,103,
  	102,1,0,0,0,104,128,1,0,0,0,105,106,10,10,0,0,106,127,3,2,1,0,107,108,
  	10,9,0,0,108,109,5,5,0,0,109,110,3,4,2,0,110,111,5,6,0,0,111,127,1,0,
  	0,0,112,113,10,8,0,0,113,114,5,7,0,0,114,127,5,57,0,0,115,116,10,7,0,
  	0,116,117,5,8,0,0,117,127,5,57,0,0,118,122,10,5,0,0,119,120,3,6,3,0,120,
  	121,3,4,2,0,121,123,1,0,0,0,122,119,1,0,0,0,123,124,1,0,0,0,124,122,1,
  	0,0,0,124,125,1,0,0,0,125,127,1,0,0,0,126,105,1,0,0,0,126,107,1,0,0,0,
  	126,112,1,0,0,0,126,115,1,0,0,0,126,118,1,0,0,0,127,130,1,0,0,0,128,126,
  	1,0,0,0,128,129,1,0,0,0,129,5,1,0,0,0,130,128,1,0,0,0,131,143,5,15,0,
  	0,132,143,7,1,0,0,133,143,7,2,0,0,134,143,7,3,0,0,135,143,5,10,0,0,136,
  	143,5,20,0,0,137,143,5,21,0,0,138,143,7,4,0,0,139,143,7,5,0,0,140,143,
  	5,28,0,0,141,143,5,29,0,0,142,131,1,0,0,0,142,132,1,0,0,0,142,133,1,0,
  	0,0,142,134,1,0,0,0,142,135,1,0,0,0,142,136,1,0,0,0,142,137,1,0,0,0,142,
  	138,1,0,0,0,142,139,1,0,0,0,142,140,1,0,0,0,142,141,1,0,0,0,143,7,1,0,
  	0,0,144,145,3,0,0,0,145,9,1,0,0,0,146,147,5,57,0,0,147,148,5,30,0,0,148,
  	159,3,8,4,0,149,150,5,57,0,0,150,151,5,30,0,0,151,152,3,8,4,0,152,153,
  	5,31,0,0,153,154,3,4,2,0,154,159,1,0,0,0,155,156,5,57,0,0,156,157,5,32,
  	0,0,157,159,3,4,2,0,158,146,1,0,0,0,158,149,1,0,0,0,158,155,1,0,0,0,159,
  	11,1,0,0,0,160,161,5,57,0,0,161,162,3,14,7,0,162,163,3,4,2,0,163,13,1,
  	0,0,0,164,176,5,33,0,0,165,176,5,34,0,0,166,176,5,35,0,0,167,176,5,36,
  	0,0,168,176,5,37,0,0,169,176,5,38,0,0,170,176,5,39,0,0,171,176,5,40,0,
  	0,172,176,5,41,0,0,173,176,5,42,0,0,174,176,5,43,0,0,175,164,1,0,0,0,
  	175,165,1,0,0,0,175,166,1,0,0,0,175,167,1,0,0,0,175,168,1,0,0,0,175,169,
  	1,0,0,0,175,170,1,0,0,0,175,171,1,0,0,0,175,172,1,0,0,0,175,173,1,0,0,
  	0,175,174,1,0,0,0,176,15,1,0,0,0,177,178,3,18,9,0,178,179,5,62,0,0,179,
  	17,1,0,0,0,180,187,3,20,10,0,181,187,3,22,11,0,182,187,3,24,12,0,183,
  	187,3,26,13,0,184,187,3,10,5,0,185,187,3,12,6,0,186,180,1,0,0,0,186,181,
  	1,0,0,0,186,182,1,0,0,0,186,183,1,0,0,0,186,184,1,0,0,0,186,185,1,0,0,
  	0,187,19,1,0,0,0,188,189,3,0,0,0,189,190,7,6,0,0,190,21,1,0,0,0,191,192,
  	3,4,2,0,192,193,3,2,1,0,193,23,1,0,0,0,194,195,5,46,0,0,195,196,3,4,2,
  	0,196,197,5,62,0,0,197,206,3,28,14,0,198,199,5,47,0,0,199,200,5,46,0,
  	0,200,201,3,4,2,0,201,202,5,62,0,0,202,203,3,28,14,0,203,205,1,0,0,0,
  	204,198,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,212,
  	1,0,0,0,208,206,1,0,0,0,209,210,5,47,0,0,210,211,5,62,0,0,211,213,3,28,
  	14,0,212,209,1,0,0,0,212,213,1,0,0,0,213,214,1,0,0,0,214,215,5,48,0,0,
  	215,216,5,46,0,0,216,25,1,0,0,0,217,218,5,49,0,0,218,219,3,4,2,0,219,
  	220,5,62,0,0,220,221,3,28,14,0,221,222,5,48,0,0,222,223,5,49,0,0,223,
  	27,1,0,0,0,224,228,3,16,8,0,225,227,5,62,0,0,226,225,1,0,0,0,227,230,
  	1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,232,1,0,0,0,230,228,1,0,0,
  	0,231,224,1,0,0,0,232,235,1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,
  	29,1,0,0,0,235,233,1,0,0,0,236,237,5,50,0,0,237,238,5,57,0,0,238,239,
  	3,32,16,0,239,240,5,62,0,0,240,241,3,28,14,0,241,242,5,48,0,0,242,243,
  	5,57,0,0,243,31,1,0,0,0,244,248,5,2,0,0,245,247,5,62,0,0,246,245,1,0,
  	0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,1,0,0,0,249,270,1,0,0,0,250,
  	248,1,0,0,0,251,252,3,10,5,0,252,256,5,3,0,0,253,255,5,62,0,0,254,253,
  	1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,259,1,0,0,
  	0,258,256,1,0,0,0,259,260,3,10,5,0,260,262,1,0,0,0,261,263,5,3,0,0,262,
  	261,1,0,0,0,262,263,1,0,0,0,263,267,1,0,0,0,264,266,5,62,0,0,265,264,
  	1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,271,1,0,0,
  	0,269,267,1,0,0,0,270,251,1,0,0,0,270,271,1,0,0,0,271,272,1,0,0,0,272,
  	273,5,4,0,0,273,33,1,0,0,0,274,275,7,7,0,0,275,35,1,0,0,0,276,277,3,34,
  	17,0,277,283,5,62,0,0,278,279,3,10,5,0,279,280,5,62,0,0,280,282,1,0,0,
  	0,281,278,1,0,0,0,282,285,1,0,0,0,283,281,1,0,0,0,283,284,1,0,0,0,284,
  	286,1,0,0,0,285,283,1,0,0,0,286,287,5,48,0,0,287,288,5,57,0,0,288,37,
  	1,0,0,0,289,292,3,8,4,0,290,292,3,36,18,0,291,289,1,0,0,0,291,290,1,0,
  	0,0,292,39,1,0,0,0,293,294,7,8,0,0,294,295,5,57,0,0,295,296,5,56,0,0,
  	296,297,3,38,19,0,297,298,5,62,0,0,298,41,1,0,0,0,299,305,3,30,15,0,300,
  	305,3,40,20,0,301,302,3,10,5,0,302,303,5,62,0,0,303,305,1,0,0,0,304,299,
  	1,0,0,0,304,300,1,0,0,0,304,301,1,0,0,0,305,43,1,0,0,0,306,310,3,42,21,
  	0,307,309,5,62,0,0,308,307,1,0,0,0,309,312,1,0,0,0,310,308,1,0,0,0,310,
  	311,1,0,0,0,311,314,1,0,0,0,312,310,1,0,0,0,313,306,1,0,0,0,314,317,1,
  	0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,45,1,0,0,0,317,315,1,0,0,0,
  	30,50,59,67,73,77,82,85,93,103,124,126,128,142,158,175,186,206,212,228,
  	233,248,256,262,267,270,283,291,304,310,315
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  capsuleParserStaticData = std::move(staticData);
}

}

CapsuleParser::CapsuleParser(TokenStream *input) : CapsuleParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CapsuleParser::CapsuleParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CapsuleParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *capsuleParserStaticData->atn, capsuleParserStaticData->decisionToDFA, capsuleParserStaticData->sharedContextCache, options);
}

CapsuleParser::~CapsuleParser() {
  delete _interpreter;
}

const atn::ATN& CapsuleParser::getATN() const {
  return *capsuleParserStaticData->atn;
}

std::string CapsuleParser::getGrammarFileName() const {
  return "Capsule.g4";
}

const std::vector<std::string>& CapsuleParser::getRuleNames() const {
  return capsuleParserStaticData->ruleNames;
}

const dfa::Vocabulary& CapsuleParser::getVocabulary() const {
  return capsuleParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CapsuleParser::getSerializedATN() const {
  return capsuleParserStaticData->serializedATN;
}


//----------------- IdentContext ------------------------------------------------------------------

CapsuleParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::IdentContext::WORD() {
  return getTokens(CapsuleParser::WORD);
}

tree::TerminalNode* CapsuleParser::IdentContext::WORD(size_t i) {
  return getToken(CapsuleParser::WORD, i);
}


size_t CapsuleParser::IdentContext::getRuleIndex() const {
  return CapsuleParser::RuleIdent;
}

void CapsuleParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void CapsuleParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}


std::any CapsuleParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIdent(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::IdentContext* CapsuleParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 0, CapsuleParser::RuleIdent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(50);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(46);
        antlrcpp::downCast<IdentContext *>(_localctx)->namespace_ = match(CapsuleParser::WORD);
        setState(47);
        match(CapsuleParser::T__0); 
      }
      setState(52);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(53);
    antlrcpp::downCast<IdentContext *>(_localctx)->name = match(CapsuleParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_argsContext ------------------------------------------------------------------

CapsuleParser::Call_argsContext::Call_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::Call_argsContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::Call_argsContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

std::vector<CapsuleParser::ExprContext *> CapsuleParser::Call_argsContext::expr() {
  return getRuleContexts<CapsuleParser::ExprContext>();
}

CapsuleParser::ExprContext* CapsuleParser::Call_argsContext::expr(size_t i) {
  return getRuleContext<CapsuleParser::ExprContext>(i);
}


size_t CapsuleParser::Call_argsContext::getRuleIndex() const {
  return CapsuleParser::RuleCall_args;
}

void CapsuleParser::Call_argsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_args(this);
}

void CapsuleParser::Call_argsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_args(this);
}


std::any CapsuleParser::Call_argsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCall_args(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Call_argsContext* CapsuleParser::call_args() {
  Call_argsContext *_localctx = _tracker.createInstance<Call_argsContext>(_ctx, getState());
  enterRule(_localctx, 2, CapsuleParser::RuleCall_args);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(CapsuleParser::T__1);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CapsuleParser::ENDLINE) {
      setState(56);
      match(CapsuleParser::ENDLINE);
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316531023364) != 0)) {
      setState(62);
      antlrcpp::downCast<Call_argsContext *>(_localctx)->arg = expr(0);
      setState(73);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(63);
          match(CapsuleParser::T__2);
          setState(67);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CapsuleParser::ENDLINE) {
            setState(64);
            match(CapsuleParser::ENDLINE);
            setState(69);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(70);
          antlrcpp::downCast<Call_argsContext *>(_localctx)->arg = expr(0); 
        }
        setState(75);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      }
      setState(77);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CapsuleParser::T__2) {
        setState(76);
        match(CapsuleParser::T__2);
      }
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(79);
        match(CapsuleParser::ENDLINE);
        setState(84);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(87);
    match(CapsuleParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::ExprContext::getRuleIndex() const {
  return CapsuleParser::RuleExpr;
}

void CapsuleParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentExprContext ------------------------------------------------------------------

CapsuleParser::IdentContext* CapsuleParser::IdentExprContext::ident() {
  return getRuleContext<CapsuleParser::IdentContext>(0);
}

CapsuleParser::IdentExprContext::IdentExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::IdentExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentExpr(this);
}
void CapsuleParser::IdentExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentExpr(this);
}

std::any CapsuleParser::IdentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIdentExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::UnaryExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::UnaryExprContext::UnaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::UnaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpr(this);
}
void CapsuleParser::UnaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpr(this);
}

std::any CapsuleParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayAccessExprContext ------------------------------------------------------------------

std::vector<CapsuleParser::ExprContext *> CapsuleParser::ArrayAccessExprContext::expr() {
  return getRuleContexts<CapsuleParser::ExprContext>();
}

CapsuleParser::ExprContext* CapsuleParser::ArrayAccessExprContext::expr(size_t i) {
  return getRuleContext<CapsuleParser::ExprContext>(i);
}

CapsuleParser::ArrayAccessExprContext::ArrayAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ArrayAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessExpr(this);
}
void CapsuleParser::ArrayAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessExpr(this);
}

std::any CapsuleParser::ArrayAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitArrayAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CapsuleParser::IntLiteralContext::INTEGER() {
  return getToken(CapsuleParser::INTEGER, 0);
}

CapsuleParser::IntLiteralContext::IntLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}
void CapsuleParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}

std::any CapsuleParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CapsuleParser::FloatLiteralContext::FLOAT() {
  return getToken(CapsuleParser::FLOAT, 0);
}

CapsuleParser::FloatLiteralContext::FloatLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}
void CapsuleParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}

std::any CapsuleParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryExprContext ------------------------------------------------------------------

std::vector<CapsuleParser::ExprContext *> CapsuleParser::BinaryExprContext::expr() {
  return getRuleContexts<CapsuleParser::ExprContext>();
}

CapsuleParser::ExprContext* CapsuleParser::BinaryExprContext::expr(size_t i) {
  return getRuleContext<CapsuleParser::ExprContext>(i);
}

std::vector<CapsuleParser::Binary_opContext *> CapsuleParser::BinaryExprContext::binary_op() {
  return getRuleContexts<CapsuleParser::Binary_opContext>();
}

CapsuleParser::Binary_opContext* CapsuleParser::BinaryExprContext::binary_op(size_t i) {
  return getRuleContext<CapsuleParser::Binary_opContext>(i);
}

CapsuleParser::BinaryExprContext::BinaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::BinaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpr(this);
}
void CapsuleParser::BinaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpr(this);
}

std::any CapsuleParser::BinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitBinaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::FuncCallExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::Call_argsContext* CapsuleParser::FuncCallExprContext::call_args() {
  return getRuleContext<CapsuleParser::Call_argsContext>(0);
}

CapsuleParser::FuncCallExprContext::FuncCallExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::FuncCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallExpr(this);
}
void CapsuleParser::FuncCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallExpr(this);
}

std::any CapsuleParser::FuncCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFuncCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrowAccessExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::ArrowAccessExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

tree::TerminalNode* CapsuleParser::ArrowAccessExprContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::ArrowAccessExprContext::ArrowAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ArrowAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowAccessExpr(this);
}
void CapsuleParser::ArrowAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowAccessExpr(this);
}

std::any CapsuleParser::ArrowAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitArrowAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DotAccessExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::DotAccessExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

tree::TerminalNode* CapsuleParser::DotAccessExprContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::DotAccessExprContext::DotAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::DotAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotAccessExpr(this);
}
void CapsuleParser::DotAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotAccessExpr(this);
}

std::any CapsuleParser::DotAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitDotAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::ParenExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void CapsuleParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any CapsuleParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::ExprContext* CapsuleParser::expr() {
   return expr(0);
}

CapsuleParser::ExprContext* CapsuleParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CapsuleParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CapsuleParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CapsuleParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(103);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__8:
      case CapsuleParser::T__9:
      case CapsuleParser::T__10:
      case CapsuleParser::T__11:
      case CapsuleParser::T__12:
      case CapsuleParser::T__13: {
        _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(91); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(90);
                  antlrcpp::downCast<UnaryExprContext *>(_localctx)->op = _input->LT(1);
                  _la = _input->LA(1);
                  if (!((((_la & ~ 0x3fULL) == 0) &&
                    ((1ULL << _la) & 32256) != 0))) {
                    antlrcpp::downCast<UnaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
                  }
                  else {
                    _errHandler->reportMatch(this);
                    consume();
                  }
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(93); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        setState(95);
        antlrcpp::downCast<UnaryExprContext *>(_localctx)->sub_expr = expr(6);
        break;
      }

      case CapsuleParser::T__1: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(96);
        match(CapsuleParser::T__1);
        setState(97);
        antlrcpp::downCast<ParenExprContext *>(_localctx)->sub_expr = expr(0);
        setState(98);
        match(CapsuleParser::T__3);
        break;
      }

      case CapsuleParser::INTEGER: {
        _localctx = _tracker.createInstance<IntLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(100);
        antlrcpp::downCast<IntLiteralContext *>(_localctx)->value = match(CapsuleParser::INTEGER);
        break;
      }

      case CapsuleParser::FLOAT: {
        _localctx = _tracker.createInstance<FloatLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(101);
        antlrcpp::downCast<FloatLiteralContext *>(_localctx)->value = match(CapsuleParser::FLOAT);
        break;
      }

      case CapsuleParser::WORD: {
        _localctx = _tracker.createInstance<IdentExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(102);
        antlrcpp::downCast<IdentExprContext *>(_localctx)->expr_ident = ident();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(128);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(126);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<FuncCallExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->sub_expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(105);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(106);
          antlrcpp::downCast<FuncCallExprContext *>(_localctx)->args = call_args();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArrayAccessExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->sub_expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(107);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(108);
          match(CapsuleParser::T__4);
          setState(109);
          antlrcpp::downCast<ArrayAccessExprContext *>(_localctx)->index_expr = expr(0);
          setState(110);
          match(CapsuleParser::T__5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArrowAccessExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->sub_expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(112);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(113);
          match(CapsuleParser::T__6);
          setState(114);
          antlrcpp::downCast<ArrowAccessExprContext *>(_localctx)->field = match(CapsuleParser::WORD);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<DotAccessExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->sub_expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(115);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(116);
          match(CapsuleParser::T__7);
          setState(117);
          antlrcpp::downCast<DotAccessExprContext *>(_localctx)->field = match(CapsuleParser::WORD);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(118);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(122); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(119);
                    antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = binary_op();
                    setState(120);
                    antlrcpp::downCast<BinaryExprContext *>(_localctx)->rhs = expr(0);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(124); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        default:
          break;
        } 
      }
      setState(130);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Binary_opContext ------------------------------------------------------------------

CapsuleParser::Binary_opContext::Binary_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::Binary_opContext::getRuleIndex() const {
  return CapsuleParser::RuleBinary_op;
}

void CapsuleParser::Binary_opContext::copyFrom(Binary_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BitAndContext ------------------------------------------------------------------

CapsuleParser::BitAndContext::BitAndContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::BitAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAnd(this);
}
void CapsuleParser::BitAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAnd(this);
}

std::any CapsuleParser::BitAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitBitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareContext ------------------------------------------------------------------

CapsuleParser::CompareContext::CompareContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::CompareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare(this);
}
void CapsuleParser::CompareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare(this);
}

std::any CapsuleParser::CompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCompare(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultDivModContext ------------------------------------------------------------------

CapsuleParser::MultDivModContext::MultDivModContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::MultDivModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultDivMod(this);
}
void CapsuleParser::MultDivModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultDivMod(this);
}

std::any CapsuleParser::MultDivModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitMultDivMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitXorContext ------------------------------------------------------------------

CapsuleParser::BitXorContext::BitXorContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::BitXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXor(this);
}
void CapsuleParser::BitXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXor(this);
}

std::any CapsuleParser::BitXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitBitXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrContext ------------------------------------------------------------------

CapsuleParser::BitOrContext::BitOrContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::BitOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOr(this);
}
void CapsuleParser::BitOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOr(this);
}

std::any CapsuleParser::BitOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitBitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShiftContext ------------------------------------------------------------------

CapsuleParser::ShiftContext::ShiftContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift(this);
}
void CapsuleParser::ShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift(this);
}

std::any CapsuleParser::ShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitShift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalAndContext ------------------------------------------------------------------

CapsuleParser::LogicalAndContext::LogicalAndContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::LogicalAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAnd(this);
}
void CapsuleParser::LogicalAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAnd(this);
}

std::any CapsuleParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

CapsuleParser::AddSubContext::AddSubContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void CapsuleParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}

std::any CapsuleParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpContext ------------------------------------------------------------------

CapsuleParser::ExpContext::ExpContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}
void CapsuleParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}

std::any CapsuleParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalOrContext ------------------------------------------------------------------

CapsuleParser::LogicalOrContext::LogicalOrContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::LogicalOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOr(this);
}
void CapsuleParser::LogicalOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOr(this);
}

std::any CapsuleParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqNeqContext ------------------------------------------------------------------

CapsuleParser::EqNeqContext::EqNeqContext(Binary_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::EqNeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqNeq(this);
}
void CapsuleParser::EqNeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqNeq(this);
}

std::any CapsuleParser::EqNeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitEqNeq(this);
  else
    return visitor->visitChildren(this);
}
CapsuleParser::Binary_opContext* CapsuleParser::binary_op() {
  Binary_opContext *_localctx = _tracker.createInstance<Binary_opContext>(_ctx, getState());
  enterRule(_localctx, 6, CapsuleParser::RuleBinary_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__14: {
        _localctx = _tracker.createInstance<CapsuleParser::ExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(131);
        match(CapsuleParser::T__14);
        break;
      }

      case CapsuleParser::T__8:
      case CapsuleParser::T__15:
      case CapsuleParser::T__16: {
        _localctx = _tracker.createInstance<CapsuleParser::MultDivModContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(132);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 197120) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CapsuleParser::T__10:
      case CapsuleParser::T__11: {
        _localctx = _tracker.createInstance<CapsuleParser::AddSubContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(133);
        _la = _input->LA(1);
        if (!(_la == CapsuleParser::T__10

        || _la == CapsuleParser::T__11)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CapsuleParser::T__17:
      case CapsuleParser::T__18: {
        _localctx = _tracker.createInstance<CapsuleParser::ShiftContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(134);
        _la = _input->LA(1);
        if (!(_la == CapsuleParser::T__17

        || _la == CapsuleParser::T__18)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CapsuleParser::T__9: {
        _localctx = _tracker.createInstance<CapsuleParser::BitAndContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(135);
        match(CapsuleParser::T__9);
        break;
      }

      case CapsuleParser::T__19: {
        _localctx = _tracker.createInstance<CapsuleParser::BitXorContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(136);
        match(CapsuleParser::T__19);
        break;
      }

      case CapsuleParser::T__20: {
        _localctx = _tracker.createInstance<CapsuleParser::BitOrContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(137);
        match(CapsuleParser::T__20);
        break;
      }

      case CapsuleParser::T__21:
      case CapsuleParser::T__22:
      case CapsuleParser::T__23:
      case CapsuleParser::T__24: {
        _localctx = _tracker.createInstance<CapsuleParser::CompareContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(138);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 62914560) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CapsuleParser::T__25:
      case CapsuleParser::T__26: {
        _localctx = _tracker.createInstance<CapsuleParser::EqNeqContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(139);
        _la = _input->LA(1);
        if (!(_la == CapsuleParser::T__25

        || _la == CapsuleParser::T__26)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CapsuleParser::T__27: {
        _localctx = _tracker.createInstance<CapsuleParser::LogicalAndContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(140);
        match(CapsuleParser::T__27);
        break;
      }

      case CapsuleParser::T__28: {
        _localctx = _tracker.createInstance<CapsuleParser::LogicalOrContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(141);
        match(CapsuleParser::T__28);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_nameContext ------------------------------------------------------------------

CapsuleParser::Type_nameContext::Type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CapsuleParser::IdentContext* CapsuleParser::Type_nameContext::ident() {
  return getRuleContext<CapsuleParser::IdentContext>(0);
}


size_t CapsuleParser::Type_nameContext::getRuleIndex() const {
  return CapsuleParser::RuleType_name;
}

void CapsuleParser::Type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_name(this);
}

void CapsuleParser::Type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_name(this);
}


std::any CapsuleParser::Type_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitType_name(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Type_nameContext* CapsuleParser::type_name() {
  Type_nameContext *_localctx = _tracker.createInstance<Type_nameContext>(_ctx, getState());
  enterRule(_localctx, 8, CapsuleParser::RuleType_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    antlrcpp::downCast<Type_nameContext *>(_localctx)->name = ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_varContext ------------------------------------------------------------------

CapsuleParser::Create_varContext::Create_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::Create_varContext::getRuleIndex() const {
  return CapsuleParser::RuleCreate_var;
}

void CapsuleParser::Create_varContext::copyFrom(Create_varContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CreateWithExprContext ------------------------------------------------------------------

tree::TerminalNode* CapsuleParser::CreateWithExprContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::Type_nameContext* CapsuleParser::CreateWithExprContext::type_name() {
  return getRuleContext<CapsuleParser::Type_nameContext>(0);
}

CapsuleParser::ExprContext* CapsuleParser::CreateWithExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::CreateWithExprContext::CreateWithExprContext(Create_varContext *ctx) { copyFrom(ctx); }

void CapsuleParser::CreateWithExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateWithExpr(this);
}
void CapsuleParser::CreateWithExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateWithExpr(this);
}

std::any CapsuleParser::CreateWithExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCreateWithExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CreateNoExprContext ------------------------------------------------------------------

tree::TerminalNode* CapsuleParser::CreateNoExprContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::Type_nameContext* CapsuleParser::CreateNoExprContext::type_name() {
  return getRuleContext<CapsuleParser::Type_nameContext>(0);
}

CapsuleParser::CreateNoExprContext::CreateNoExprContext(Create_varContext *ctx) { copyFrom(ctx); }

void CapsuleParser::CreateNoExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateNoExpr(this);
}
void CapsuleParser::CreateNoExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateNoExpr(this);
}

std::any CapsuleParser::CreateNoExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCreateNoExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CreateInferTypeContext ------------------------------------------------------------------

tree::TerminalNode* CapsuleParser::CreateInferTypeContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::ExprContext* CapsuleParser::CreateInferTypeContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::CreateInferTypeContext::CreateInferTypeContext(Create_varContext *ctx) { copyFrom(ctx); }

void CapsuleParser::CreateInferTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateInferType(this);
}
void CapsuleParser::CreateInferTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateInferType(this);
}

std::any CapsuleParser::CreateInferTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCreateInferType(this);
  else
    return visitor->visitChildren(this);
}
CapsuleParser::Create_varContext* CapsuleParser::create_var() {
  Create_varContext *_localctx = _tracker.createInstance<Create_varContext>(_ctx, getState());
  enterRule(_localctx, 10, CapsuleParser::RuleCreate_var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CapsuleParser::CreateNoExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(146);
      match(CapsuleParser::WORD);
      setState(147);
      match(CapsuleParser::T__29);
      setState(148);
      type_name();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CapsuleParser::CreateWithExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(CapsuleParser::WORD);
      setState(150);
      match(CapsuleParser::T__29);
      setState(151);
      type_name();
      setState(152);
      match(CapsuleParser::T__30);
      setState(153);
      expr(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CapsuleParser::CreateInferTypeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(155);
      match(CapsuleParser::WORD);
      setState(156);
      match(CapsuleParser::T__31);
      setState(157);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Modify_varContext ------------------------------------------------------------------

CapsuleParser::Modify_varContext::Modify_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::Modify_varContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::In_place_opContext* CapsuleParser::Modify_varContext::in_place_op() {
  return getRuleContext<CapsuleParser::In_place_opContext>(0);
}

CapsuleParser::ExprContext* CapsuleParser::Modify_varContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}


size_t CapsuleParser::Modify_varContext::getRuleIndex() const {
  return CapsuleParser::RuleModify_var;
}

void CapsuleParser::Modify_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModify_var(this);
}

void CapsuleParser::Modify_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModify_var(this);
}


std::any CapsuleParser::Modify_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitModify_var(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Modify_varContext* CapsuleParser::modify_var() {
  Modify_varContext *_localctx = _tracker.createInstance<Modify_varContext>(_ctx, getState());
  enterRule(_localctx, 12, CapsuleParser::RuleModify_var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(CapsuleParser::WORD);
    setState(161);
    in_place_op();
    setState(162);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- In_place_opContext ------------------------------------------------------------------

CapsuleParser::In_place_opContext::In_place_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::In_place_opContext::getRuleIndex() const {
  return CapsuleParser::RuleIn_place_op;
}

void CapsuleParser::In_place_opContext::copyFrom(In_place_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlusEqContext ------------------------------------------------------------------

CapsuleParser::PlusEqContext::PlusEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::PlusEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusEq(this);
}
void CapsuleParser::PlusEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusEq(this);
}

std::any CapsuleParser::PlusEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitPlusEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LShiftEqContext ------------------------------------------------------------------

CapsuleParser::LShiftEqContext::LShiftEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::LShiftEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLShiftEq(this);
}
void CapsuleParser::LShiftEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLShiftEq(this);
}

std::any CapsuleParser::LShiftEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitLShiftEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusEqContext ------------------------------------------------------------------

CapsuleParser::MinusEqContext::MinusEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::MinusEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinusEq(this);
}
void CapsuleParser::MinusEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinusEq(this);
}

std::any CapsuleParser::MinusEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitMinusEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RShiftEqContext ------------------------------------------------------------------

CapsuleParser::RShiftEqContext::RShiftEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::RShiftEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRShiftEq(this);
}
void CapsuleParser::RShiftEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRShiftEq(this);
}

std::any CapsuleParser::RShiftEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitRShiftEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XorEqContext ------------------------------------------------------------------

CapsuleParser::XorEqContext::XorEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::XorEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorEq(this);
}
void CapsuleParser::XorEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorEq(this);
}

std::any CapsuleParser::XorEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitXorEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndEqContext ------------------------------------------------------------------

CapsuleParser::AndEqContext::AndEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::AndEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndEq(this);
}
void CapsuleParser::AndEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndEq(this);
}

std::any CapsuleParser::AndEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitAndEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrEqContext ------------------------------------------------------------------

CapsuleParser::OrEqContext::OrEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::OrEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrEq(this);
}
void CapsuleParser::OrEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrEq(this);
}

std::any CapsuleParser::OrEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitOrEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModEqContext ------------------------------------------------------------------

CapsuleParser::ModEqContext::ModEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ModEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModEq(this);
}
void CapsuleParser::ModEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModEq(this);
}

std::any CapsuleParser::ModEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitModEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpEqContext ------------------------------------------------------------------

CapsuleParser::ExpEqContext::ExpEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ExpEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpEq(this);
}
void CapsuleParser::ExpEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpEq(this);
}

std::any CapsuleParser::ExpEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitExpEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultEqContext ------------------------------------------------------------------

CapsuleParser::MultEqContext::MultEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::MultEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultEq(this);
}
void CapsuleParser::MultEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultEq(this);
}

std::any CapsuleParser::MultEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitMultEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivEqContext ------------------------------------------------------------------

CapsuleParser::DivEqContext::DivEqContext(In_place_opContext *ctx) { copyFrom(ctx); }

void CapsuleParser::DivEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivEq(this);
}
void CapsuleParser::DivEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivEq(this);
}

std::any CapsuleParser::DivEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitDivEq(this);
  else
    return visitor->visitChildren(this);
}
CapsuleParser::In_place_opContext* CapsuleParser::in_place_op() {
  In_place_opContext *_localctx = _tracker.createInstance<In_place_opContext>(_ctx, getState());
  enterRule(_localctx, 14, CapsuleParser::RuleIn_place_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__32: {
        _localctx = _tracker.createInstance<CapsuleParser::PlusEqContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(164);
        match(CapsuleParser::T__32);
        break;
      }

      case CapsuleParser::T__33: {
        _localctx = _tracker.createInstance<CapsuleParser::MinusEqContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(165);
        match(CapsuleParser::T__33);
        break;
      }

      case CapsuleParser::T__34: {
        _localctx = _tracker.createInstance<CapsuleParser::MultEqContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(166);
        match(CapsuleParser::T__34);
        break;
      }

      case CapsuleParser::T__35: {
        _localctx = _tracker.createInstance<CapsuleParser::DivEqContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(167);
        match(CapsuleParser::T__35);
        break;
      }

      case CapsuleParser::T__36: {
        _localctx = _tracker.createInstance<CapsuleParser::ModEqContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(168);
        match(CapsuleParser::T__36);
        break;
      }

      case CapsuleParser::T__37: {
        _localctx = _tracker.createInstance<CapsuleParser::ExpEqContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(169);
        match(CapsuleParser::T__37);
        break;
      }

      case CapsuleParser::T__38: {
        _localctx = _tracker.createInstance<CapsuleParser::XorEqContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(170);
        match(CapsuleParser::T__38);
        break;
      }

      case CapsuleParser::T__39: {
        _localctx = _tracker.createInstance<CapsuleParser::OrEqContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(171);
        match(CapsuleParser::T__39);
        break;
      }

      case CapsuleParser::T__40: {
        _localctx = _tracker.createInstance<CapsuleParser::AndEqContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(172);
        match(CapsuleParser::T__40);
        break;
      }

      case CapsuleParser::T__41: {
        _localctx = _tracker.createInstance<CapsuleParser::LShiftEqContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(173);
        match(CapsuleParser::T__41);
        break;
      }

      case CapsuleParser::T__42: {
        _localctx = _tracker.createInstance<CapsuleParser::RShiftEqContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(174);
        match(CapsuleParser::T__42);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CapsuleParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::StatementContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

CapsuleParser::Statement_no_endlineContext* CapsuleParser::StatementContext::statement_no_endline() {
  return getRuleContext<CapsuleParser::Statement_no_endlineContext>(0);
}


size_t CapsuleParser::StatementContext::getRuleIndex() const {
  return CapsuleParser::RuleStatement;
}

void CapsuleParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CapsuleParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any CapsuleParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::StatementContext* CapsuleParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 16, CapsuleParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    antlrcpp::downCast<StatementContext *>(_localctx)->sub_stmt = statement_no_endline();
    setState(178);
    match(CapsuleParser::ENDLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_no_endlineContext ------------------------------------------------------------------

CapsuleParser::Statement_no_endlineContext::Statement_no_endlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::Statement_no_endlineContext::getRuleIndex() const {
  return CapsuleParser::RuleStatement_no_endline;
}

void CapsuleParser::Statement_no_endlineContext::copyFrom(Statement_no_endlineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ModifyVarStmtContext ------------------------------------------------------------------

CapsuleParser::Modify_varContext* CapsuleParser::ModifyVarStmtContext::modify_var() {
  return getRuleContext<CapsuleParser::Modify_varContext>(0);
}

CapsuleParser::ModifyVarStmtContext::ModifyVarStmtContext(Statement_no_endlineContext *ctx) { copyFrom(ctx); }

void CapsuleParser::ModifyVarStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifyVarStmt(this);
}
void CapsuleParser::ModifyVarStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifyVarStmt(this);
}

std::any CapsuleParser::ModifyVarStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitModifyVarStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

CapsuleParser::While_statementContext* CapsuleParser::WhileStmtContext::while_statement() {
  return getRuleContext<CapsuleParser::While_statementContext>(0);
}

CapsuleParser::WhileStmtContext::WhileStmtContext(Statement_no_endlineContext *ctx) { copyFrom(ctx); }

void CapsuleParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}
void CapsuleParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

std::any CapsuleParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

CapsuleParser::If_statementContext* CapsuleParser::IfStmtContext::if_statement() {
  return getRuleContext<CapsuleParser::If_statementContext>(0);
}

CapsuleParser::IfStmtContext::IfStmtContext(Statement_no_endlineContext *ctx) { copyFrom(ctx); }

void CapsuleParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void CapsuleParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

std::any CapsuleParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallStmtContext ------------------------------------------------------------------

CapsuleParser::Function_call_statementContext* CapsuleParser::FuncCallStmtContext::function_call_statement() {
  return getRuleContext<CapsuleParser::Function_call_statementContext>(0);
}

CapsuleParser::FuncCallStmtContext::FuncCallStmtContext(Statement_no_endlineContext *ctx) { copyFrom(ctx); }

void CapsuleParser::FuncCallStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallStmt(this);
}
void CapsuleParser::FuncCallStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallStmt(this);
}

std::any CapsuleParser::FuncCallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFuncCallStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CreateVarStmtContext ------------------------------------------------------------------

CapsuleParser::Create_varContext* CapsuleParser::CreateVarStmtContext::create_var() {
  return getRuleContext<CapsuleParser::Create_varContext>(0);
}

CapsuleParser::CreateVarStmtContext::CreateVarStmtContext(Statement_no_endlineContext *ctx) { copyFrom(ctx); }

void CapsuleParser::CreateVarStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateVarStmt(this);
}
void CapsuleParser::CreateVarStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateVarStmt(this);
}

std::any CapsuleParser::CreateVarStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCreateVarStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncDecStmtContext ------------------------------------------------------------------

CapsuleParser::Inc_dec_statementContext* CapsuleParser::IncDecStmtContext::inc_dec_statement() {
  return getRuleContext<CapsuleParser::Inc_dec_statementContext>(0);
}

CapsuleParser::IncDecStmtContext::IncDecStmtContext(Statement_no_endlineContext *ctx) { copyFrom(ctx); }

void CapsuleParser::IncDecStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncDecStmt(this);
}
void CapsuleParser::IncDecStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncDecStmt(this);
}

std::any CapsuleParser::IncDecStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIncDecStmt(this);
  else
    return visitor->visitChildren(this);
}
CapsuleParser::Statement_no_endlineContext* CapsuleParser::statement_no_endline() {
  Statement_no_endlineContext *_localctx = _tracker.createInstance<Statement_no_endlineContext>(_ctx, getState());
  enterRule(_localctx, 18, CapsuleParser::RuleStatement_no_endline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CapsuleParser::IncDecStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(180);
      antlrcpp::downCast<IncDecStmtContext *>(_localctx)->sub_stmt = inc_dec_statement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CapsuleParser::FuncCallStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(181);
      antlrcpp::downCast<FuncCallStmtContext *>(_localctx)->sub_stmt = function_call_statement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CapsuleParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(182);
      antlrcpp::downCast<IfStmtContext *>(_localctx)->sub_stmt = if_statement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CapsuleParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(183);
      antlrcpp::downCast<WhileStmtContext *>(_localctx)->sub_stmt = while_statement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CapsuleParser::CreateVarStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(184);
      antlrcpp::downCast<CreateVarStmtContext *>(_localctx)->sub_stmt = create_var();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CapsuleParser::ModifyVarStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(185);
      antlrcpp::downCast<ModifyVarStmtContext *>(_localctx)->sub_stmt = modify_var();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inc_dec_statementContext ------------------------------------------------------------------

CapsuleParser::Inc_dec_statementContext::Inc_dec_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CapsuleParser::IdentContext* CapsuleParser::Inc_dec_statementContext::ident() {
  return getRuleContext<CapsuleParser::IdentContext>(0);
}


size_t CapsuleParser::Inc_dec_statementContext::getRuleIndex() const {
  return CapsuleParser::RuleInc_dec_statement;
}

void CapsuleParser::Inc_dec_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInc_dec_statement(this);
}

void CapsuleParser::Inc_dec_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInc_dec_statement(this);
}


std::any CapsuleParser::Inc_dec_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitInc_dec_statement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Inc_dec_statementContext* CapsuleParser::inc_dec_statement() {
  Inc_dec_statementContext *_localctx = _tracker.createInstance<Inc_dec_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, CapsuleParser::RuleInc_dec_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    antlrcpp::downCast<Inc_dec_statementContext *>(_localctx)->inc_dec_ident = ident();
    setState(189);
    antlrcpp::downCast<Inc_dec_statementContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == CapsuleParser::T__43

    || _la == CapsuleParser::T__44)) {
      antlrcpp::downCast<Inc_dec_statementContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_call_statementContext ------------------------------------------------------------------

CapsuleParser::Function_call_statementContext::Function_call_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CapsuleParser::ExprContext* CapsuleParser::Function_call_statementContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::Call_argsContext* CapsuleParser::Function_call_statementContext::call_args() {
  return getRuleContext<CapsuleParser::Call_argsContext>(0);
}


size_t CapsuleParser::Function_call_statementContext::getRuleIndex() const {
  return CapsuleParser::RuleFunction_call_statement;
}

void CapsuleParser::Function_call_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call_statement(this);
}

void CapsuleParser::Function_call_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call_statement(this);
}


std::any CapsuleParser::Function_call_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFunction_call_statement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Function_call_statementContext* CapsuleParser::function_call_statement() {
  Function_call_statementContext *_localctx = _tracker.createInstance<Function_call_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, CapsuleParser::RuleFunction_call_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    antlrcpp::downCast<Function_call_statementContext *>(_localctx)->sub_expr = expr(0);
    setState(192);
    antlrcpp::downCast<Function_call_statementContext *>(_localctx)->args = call_args();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

CapsuleParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::If_statementContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::If_statementContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

std::vector<CapsuleParser::ExprContext *> CapsuleParser::If_statementContext::expr() {
  return getRuleContexts<CapsuleParser::ExprContext>();
}

CapsuleParser::ExprContext* CapsuleParser::If_statementContext::expr(size_t i) {
  return getRuleContext<CapsuleParser::ExprContext>(i);
}

std::vector<CapsuleParser::Compound_statementContext *> CapsuleParser::If_statementContext::compound_statement() {
  return getRuleContexts<CapsuleParser::Compound_statementContext>();
}

CapsuleParser::Compound_statementContext* CapsuleParser::If_statementContext::compound_statement(size_t i) {
  return getRuleContext<CapsuleParser::Compound_statementContext>(i);
}


size_t CapsuleParser::If_statementContext::getRuleIndex() const {
  return CapsuleParser::RuleIf_statement;
}

void CapsuleParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void CapsuleParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any CapsuleParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::If_statementContext* CapsuleParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, CapsuleParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(CapsuleParser::T__45);
    setState(195);
    antlrcpp::downCast<If_statementContext *>(_localctx)->if_cond = expr(0);
    setState(196);
    match(CapsuleParser::ENDLINE);
    setState(197);
    antlrcpp::downCast<If_statementContext *>(_localctx)->if_body = compound_statement();
    setState(206);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(198);
        match(CapsuleParser::T__46);
        setState(199);
        match(CapsuleParser::T__45);
        setState(200);
        antlrcpp::downCast<If_statementContext *>(_localctx)->else_if_cond = expr(0);
        setState(201);
        match(CapsuleParser::ENDLINE);
        setState(202);
        antlrcpp::downCast<If_statementContext *>(_localctx)->else_if_body = compound_statement(); 
      }
      setState(208);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CapsuleParser::T__46) {
      setState(209);
      match(CapsuleParser::T__46);
      setState(210);
      match(CapsuleParser::ENDLINE);
      setState(211);
      antlrcpp::downCast<If_statementContext *>(_localctx)->else_body = compound_statement();
    }
    setState(214);
    match(CapsuleParser::T__47);
    setState(215);
    match(CapsuleParser::T__45);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

CapsuleParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::While_statementContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

CapsuleParser::ExprContext* CapsuleParser::While_statementContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::Compound_statementContext* CapsuleParser::While_statementContext::compound_statement() {
  return getRuleContext<CapsuleParser::Compound_statementContext>(0);
}


size_t CapsuleParser::While_statementContext::getRuleIndex() const {
  return CapsuleParser::RuleWhile_statement;
}

void CapsuleParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void CapsuleParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


std::any CapsuleParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::While_statementContext* CapsuleParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, CapsuleParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(CapsuleParser::T__48);
    setState(218);
    antlrcpp::downCast<While_statementContext *>(_localctx)->while_cond = expr(0);
    setState(219);
    match(CapsuleParser::ENDLINE);
    setState(220);
    antlrcpp::downCast<While_statementContext *>(_localctx)->while_body = compound_statement();
    setState(221);
    match(CapsuleParser::T__47);
    setState(222);
    match(CapsuleParser::T__48);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

CapsuleParser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CapsuleParser::StatementContext *> CapsuleParser::Compound_statementContext::statement() {
  return getRuleContexts<CapsuleParser::StatementContext>();
}

CapsuleParser::StatementContext* CapsuleParser::Compound_statementContext::statement(size_t i) {
  return getRuleContext<CapsuleParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> CapsuleParser::Compound_statementContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::Compound_statementContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}


size_t CapsuleParser::Compound_statementContext::getRuleIndex() const {
  return CapsuleParser::RuleCompound_statement;
}

void CapsuleParser::Compound_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_statement(this);
}

void CapsuleParser::Compound_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_statement(this);
}


std::any CapsuleParser::Compound_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCompound_statement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Compound_statementContext* CapsuleParser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, CapsuleParser::RuleCompound_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1009439635228622340) != 0)) {
      setState(224);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->sub_stmt = statement();
      setState(228);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(225);
        match(CapsuleParser::ENDLINE);
        setState(230);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_defContext ------------------------------------------------------------------

CapsuleParser::Function_defContext::Function_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::Function_defContext::WORD() {
  return getTokens(CapsuleParser::WORD);
}

tree::TerminalNode* CapsuleParser::Function_defContext::WORD(size_t i) {
  return getToken(CapsuleParser::WORD, i);
}

tree::TerminalNode* CapsuleParser::Function_defContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

CapsuleParser::Function_def_paramsContext* CapsuleParser::Function_defContext::function_def_params() {
  return getRuleContext<CapsuleParser::Function_def_paramsContext>(0);
}

CapsuleParser::Compound_statementContext* CapsuleParser::Function_defContext::compound_statement() {
  return getRuleContext<CapsuleParser::Compound_statementContext>(0);
}


size_t CapsuleParser::Function_defContext::getRuleIndex() const {
  return CapsuleParser::RuleFunction_def;
}

void CapsuleParser::Function_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_def(this);
}

void CapsuleParser::Function_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_def(this);
}


std::any CapsuleParser::Function_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFunction_def(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Function_defContext* CapsuleParser::function_def() {
  Function_defContext *_localctx = _tracker.createInstance<Function_defContext>(_ctx, getState());
  enterRule(_localctx, 30, CapsuleParser::RuleFunction_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    match(CapsuleParser::T__49);
    setState(237);
    match(CapsuleParser::WORD);
    setState(238);
    antlrcpp::downCast<Function_defContext *>(_localctx)->params = function_def_params();
    setState(239);
    match(CapsuleParser::ENDLINE);
    setState(240);
    antlrcpp::downCast<Function_defContext *>(_localctx)->body = compound_statement();
    setState(241);
    match(CapsuleParser::T__47);
    setState(242);
    match(CapsuleParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_def_paramsContext ------------------------------------------------------------------

CapsuleParser::Function_def_paramsContext::Function_def_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::Function_def_paramsContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::Function_def_paramsContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

std::vector<CapsuleParser::Create_varContext *> CapsuleParser::Function_def_paramsContext::create_var() {
  return getRuleContexts<CapsuleParser::Create_varContext>();
}

CapsuleParser::Create_varContext* CapsuleParser::Function_def_paramsContext::create_var(size_t i) {
  return getRuleContext<CapsuleParser::Create_varContext>(i);
}


size_t CapsuleParser::Function_def_paramsContext::getRuleIndex() const {
  return CapsuleParser::RuleFunction_def_params;
}

void CapsuleParser::Function_def_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_def_params(this);
}

void CapsuleParser::Function_def_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_def_params(this);
}


std::any CapsuleParser::Function_def_paramsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFunction_def_params(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Function_def_paramsContext* CapsuleParser::function_def_params() {
  Function_def_paramsContext *_localctx = _tracker.createInstance<Function_def_paramsContext>(_ctx, getState());
  enterRule(_localctx, 32, CapsuleParser::RuleFunction_def_params);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(CapsuleParser::T__1);
    setState(248);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CapsuleParser::ENDLINE) {
      setState(245);
      match(CapsuleParser::ENDLINE);
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CapsuleParser::WORD) {
      setState(251);
      antlrcpp::downCast<Function_def_paramsContext *>(_localctx)->param = create_var();

      setState(252);
      match(CapsuleParser::T__2);
      setState(256);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(253);
        match(CapsuleParser::ENDLINE);
        setState(258);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(259);
      antlrcpp::downCast<Function_def_paramsContext *>(_localctx)->param = create_var();
      setState(262);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CapsuleParser::T__2) {
        setState(261);
        match(CapsuleParser::T__2);
      }
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(264);
        match(CapsuleParser::ENDLINE);
        setState(269);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(272);
    match(CapsuleParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_varietyContext ------------------------------------------------------------------

CapsuleParser::Type_varietyContext::Type_varietyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::Type_varietyContext::getRuleIndex() const {
  return CapsuleParser::RuleType_variety;
}

void CapsuleParser::Type_varietyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_variety(this);
}

void CapsuleParser::Type_varietyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_variety(this);
}


std::any CapsuleParser::Type_varietyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitType_variety(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Type_varietyContext* CapsuleParser::type_variety() {
  Type_varietyContext *_localctx = _tracker.createInstance<Type_varietyContext>(_ctx, getState());
  enterRule(_localctx, 34, CapsuleParser::RuleType_variety);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15762598695796736) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_literalContext ------------------------------------------------------------------

CapsuleParser::Type_literalContext::Type_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::Type_literalContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::Type_literalContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

tree::TerminalNode* CapsuleParser::Type_literalContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::Type_varietyContext* CapsuleParser::Type_literalContext::type_variety() {
  return getRuleContext<CapsuleParser::Type_varietyContext>(0);
}

std::vector<CapsuleParser::Create_varContext *> CapsuleParser::Type_literalContext::create_var() {
  return getRuleContexts<CapsuleParser::Create_varContext>();
}

CapsuleParser::Create_varContext* CapsuleParser::Type_literalContext::create_var(size_t i) {
  return getRuleContext<CapsuleParser::Create_varContext>(i);
}


size_t CapsuleParser::Type_literalContext::getRuleIndex() const {
  return CapsuleParser::RuleType_literal;
}

void CapsuleParser::Type_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_literal(this);
}

void CapsuleParser::Type_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_literal(this);
}


std::any CapsuleParser::Type_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitType_literal(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Type_literalContext* CapsuleParser::type_literal() {
  Type_literalContext *_localctx = _tracker.createInstance<Type_literalContext>(_ctx, getState());
  enterRule(_localctx, 36, CapsuleParser::RuleType_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    antlrcpp::downCast<Type_literalContext *>(_localctx)->variety = type_variety();
    setState(277);
    match(CapsuleParser::ENDLINE);
    setState(283);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CapsuleParser::WORD) {
      setState(278);
      antlrcpp::downCast<Type_literalContext *>(_localctx)->field = create_var();
      setState(279);
      match(CapsuleParser::ENDLINE);
      setState(285);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(286);
    match(CapsuleParser::T__47);
    setState(287);
    match(CapsuleParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

CapsuleParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::TypeContext::getRuleIndex() const {
  return CapsuleParser::RuleType;
}

void CapsuleParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeFromLiteralContext ------------------------------------------------------------------

CapsuleParser::Type_literalContext* CapsuleParser::TypeFromLiteralContext::type_literal() {
  return getRuleContext<CapsuleParser::Type_literalContext>(0);
}

CapsuleParser::TypeFromLiteralContext::TypeFromLiteralContext(TypeContext *ctx) { copyFrom(ctx); }

void CapsuleParser::TypeFromLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeFromLiteral(this);
}
void CapsuleParser::TypeFromLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeFromLiteral(this);
}

std::any CapsuleParser::TypeFromLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitTypeFromLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeFromNameContext ------------------------------------------------------------------

CapsuleParser::Type_nameContext* CapsuleParser::TypeFromNameContext::type_name() {
  return getRuleContext<CapsuleParser::Type_nameContext>(0);
}

CapsuleParser::TypeFromNameContext::TypeFromNameContext(TypeContext *ctx) { copyFrom(ctx); }

void CapsuleParser::TypeFromNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeFromName(this);
}
void CapsuleParser::TypeFromNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeFromName(this);
}

std::any CapsuleParser::TypeFromNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitTypeFromName(this);
  else
    return visitor->visitChildren(this);
}
CapsuleParser::TypeContext* CapsuleParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 38, CapsuleParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(291);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::WORD: {
        _localctx = _tracker.createInstance<CapsuleParser::TypeFromNameContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(289);
        antlrcpp::downCast<TypeFromNameContext *>(_localctx)->name = type_name();
        break;
      }

      case CapsuleParser::T__50:
      case CapsuleParser::T__51:
      case CapsuleParser::T__52: {
        _localctx = _tracker.createInstance<CapsuleParser::TypeFromLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(290);
        antlrcpp::downCast<TypeFromLiteralContext *>(_localctx)->literal = type_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_or_alias_defContext ------------------------------------------------------------------

CapsuleParser::Type_or_alias_defContext::Type_or_alias_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::Type_or_alias_defContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

tree::TerminalNode* CapsuleParser::Type_or_alias_defContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::TypeContext* CapsuleParser::Type_or_alias_defContext::type() {
  return getRuleContext<CapsuleParser::TypeContext>(0);
}


size_t CapsuleParser::Type_or_alias_defContext::getRuleIndex() const {
  return CapsuleParser::RuleType_or_alias_def;
}

void CapsuleParser::Type_or_alias_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_or_alias_def(this);
}

void CapsuleParser::Type_or_alias_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_or_alias_def(this);
}


std::any CapsuleParser::Type_or_alias_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitType_or_alias_def(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::Type_or_alias_defContext* CapsuleParser::type_or_alias_def() {
  Type_or_alias_defContext *_localctx = _tracker.createInstance<Type_or_alias_defContext>(_ctx, getState());
  enterRule(_localctx, 40, CapsuleParser::RuleType_or_alias_def);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    antlrcpp::downCast<Type_or_alias_defContext *>(_localctx)->type_or_alias_tok = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == CapsuleParser::T__53

    || _la == CapsuleParser::T__54)) {
      antlrcpp::downCast<Type_or_alias_defContext *>(_localctx)->type_or_alias_tok = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(294);
    antlrcpp::downCast<Type_or_alias_defContext *>(_localctx)->name = match(CapsuleParser::WORD);
    setState(295);
    match(CapsuleParser::T__55);
    setState(296);
    antlrcpp::downCast<Type_or_alias_defContext *>(_localctx)->assignType = type();
    setState(297);
    match(CapsuleParser::ENDLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

CapsuleParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::DefinitionContext::getRuleIndex() const {
  return CapsuleParser::RuleDefinition;
}

void CapsuleParser::DefinitionContext::copyFrom(DefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefIsTypeOrAliasContext ------------------------------------------------------------------

CapsuleParser::Type_or_alias_defContext* CapsuleParser::DefIsTypeOrAliasContext::type_or_alias_def() {
  return getRuleContext<CapsuleParser::Type_or_alias_defContext>(0);
}

CapsuleParser::DefIsTypeOrAliasContext::DefIsTypeOrAliasContext(DefinitionContext *ctx) { copyFrom(ctx); }

void CapsuleParser::DefIsTypeOrAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefIsTypeOrAlias(this);
}
void CapsuleParser::DefIsTypeOrAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefIsTypeOrAlias(this);
}

std::any CapsuleParser::DefIsTypeOrAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitDefIsTypeOrAlias(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefIsFunctionContext ------------------------------------------------------------------

CapsuleParser::Function_defContext* CapsuleParser::DefIsFunctionContext::function_def() {
  return getRuleContext<CapsuleParser::Function_defContext>(0);
}

CapsuleParser::DefIsFunctionContext::DefIsFunctionContext(DefinitionContext *ctx) { copyFrom(ctx); }

void CapsuleParser::DefIsFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefIsFunction(this);
}
void CapsuleParser::DefIsFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefIsFunction(this);
}

std::any CapsuleParser::DefIsFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitDefIsFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefIsVarDefContext ------------------------------------------------------------------

tree::TerminalNode* CapsuleParser::DefIsVarDefContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

CapsuleParser::Create_varContext* CapsuleParser::DefIsVarDefContext::create_var() {
  return getRuleContext<CapsuleParser::Create_varContext>(0);
}

CapsuleParser::DefIsVarDefContext::DefIsVarDefContext(DefinitionContext *ctx) { copyFrom(ctx); }

void CapsuleParser::DefIsVarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefIsVarDef(this);
}
void CapsuleParser::DefIsVarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefIsVarDef(this);
}

std::any CapsuleParser::DefIsVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitDefIsVarDef(this);
  else
    return visitor->visitChildren(this);
}
CapsuleParser::DefinitionContext* CapsuleParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 42, CapsuleParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__49: {
        _localctx = _tracker.createInstance<CapsuleParser::DefIsFunctionContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(299);
        antlrcpp::downCast<DefIsFunctionContext *>(_localctx)->func = function_def();
        break;
      }

      case CapsuleParser::T__53:
      case CapsuleParser::T__54: {
        _localctx = _tracker.createInstance<CapsuleParser::DefIsTypeOrAliasContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(300);
        antlrcpp::downCast<DefIsTypeOrAliasContext *>(_localctx)->type_or_alias = type_or_alias_def();
        break;
      }

      case CapsuleParser::WORD: {
        _localctx = _tracker.createInstance<CapsuleParser::DefIsVarDefContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(301);
        antlrcpp::downCast<DefIsVarDefContext *>(_localctx)->new_var = create_var();
        setState(302);
        match(CapsuleParser::ENDLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileContext ------------------------------------------------------------------

CapsuleParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CapsuleParser::DefinitionContext *> CapsuleParser::FileContext::definition() {
  return getRuleContexts<CapsuleParser::DefinitionContext>();
}

CapsuleParser::DefinitionContext* CapsuleParser::FileContext::definition(size_t i) {
  return getRuleContext<CapsuleParser::DefinitionContext>(i);
}

std::vector<tree::TerminalNode *> CapsuleParser::FileContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::FileContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}


size_t CapsuleParser::FileContext::getRuleIndex() const {
  return CapsuleParser::RuleFile;
}

void CapsuleParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void CapsuleParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


std::any CapsuleParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::FileContext* CapsuleParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 44, CapsuleParser::RuleFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 199284283511144448) != 0)) {
      setState(306);
      antlrcpp::downCast<FileContext *>(_localctx)->def = definition();
      setState(310);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(307);
        match(CapsuleParser::ENDLINE);
        setState(312);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CapsuleParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CapsuleParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

void CapsuleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  capsuleParserInitialize();
#else
  ::antlr4::internal::call_once(capsuleParserOnceFlag, capsuleParserInitialize);
#endif
}
