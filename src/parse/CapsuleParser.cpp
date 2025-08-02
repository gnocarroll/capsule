
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
      "ident", "callArgs", "expr", "endPostfixExpr", "binaryOp", "typeName", 
      "createVar", "createVarTypeAndExpr", "modifyVar", "inPlaceOp", "statement", 
      "statement_no_endline", "incDecStatement", "functionCallStatement", 
      "ifStatement", "whileStatement", "compoundStatement", "functionDef", 
      "functionDefParams", "typeVariety", "typeLiteral", "type", "typeOrAliasDef", 
      "definition", "file"
    },
    std::vector<std::string>{
      "", "'::'", "'('", "','", "')'", "'*'", "'&'", "'+'", "'-'", "'~'", 
      "'not'", "'['", "']'", "'->'", "'.'", "'**'", "'/'", "'%'", "'<<'", 
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
  	4,1,62,322,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,5,0,53,8,0,10,0,12,0,56,9,0,
  	1,0,1,0,1,1,1,1,5,1,62,8,1,10,1,12,1,65,9,1,1,1,1,1,1,1,5,1,70,8,1,10,
  	1,12,1,73,9,1,1,1,5,1,76,8,1,10,1,12,1,79,9,1,1,1,3,1,82,8,1,1,1,5,1,
  	85,8,1,10,1,12,1,88,9,1,3,1,90,8,1,1,1,1,1,1,2,1,2,4,2,96,8,2,11,2,12,
  	2,97,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,108,8,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,4,2,116,8,2,11,2,12,2,117,5,2,120,8,2,10,2,12,2,123,9,2,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,134,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,3,4,147,8,4,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,158,8,
  	7,1,7,1,7,3,7,162,8,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,3,9,179,8,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,
  	3,11,190,8,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,5,14,208,8,14,10,14,12,14,211,9,14,1,14,1,14,
  	1,14,3,14,216,8,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,16,1,16,5,16,230,8,16,10,16,12,16,233,9,16,5,16,235,8,16,10,16,12,16,
  	238,9,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,5,18,250,8,
  	18,10,18,12,18,253,9,18,1,18,1,18,1,18,5,18,258,8,18,10,18,12,18,261,
  	9,18,1,18,1,18,1,18,3,18,266,8,18,1,18,5,18,269,8,18,10,18,12,18,272,
  	9,18,3,18,274,8,18,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,5,20,
  	285,8,20,10,20,12,20,288,9,20,1,20,1,20,1,20,1,21,1,21,3,21,295,8,21,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,3,23,308,8,23,
  	1,24,1,24,5,24,312,8,24,10,24,12,24,315,9,24,5,24,317,8,24,10,24,12,24,
  	320,9,24,1,24,0,1,4,25,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,42,44,46,48,0,9,1,0,5,10,2,0,5,5,16,17,1,0,7,8,1,0,18,19,
  	1,0,22,25,1,0,26,27,1,0,44,45,1,0,51,53,1,0,54,55,356,0,54,1,0,0,0,2,
  	59,1,0,0,0,4,107,1,0,0,0,6,133,1,0,0,0,8,146,1,0,0,0,10,148,1,0,0,0,12,
  	150,1,0,0,0,14,161,1,0,0,0,16,163,1,0,0,0,18,178,1,0,0,0,20,180,1,0,0,
  	0,22,189,1,0,0,0,24,191,1,0,0,0,26,194,1,0,0,0,28,197,1,0,0,0,30,220,
  	1,0,0,0,32,236,1,0,0,0,34,239,1,0,0,0,36,247,1,0,0,0,38,277,1,0,0,0,40,
  	279,1,0,0,0,42,294,1,0,0,0,44,296,1,0,0,0,46,307,1,0,0,0,48,318,1,0,0,
  	0,50,51,5,57,0,0,51,53,5,1,0,0,52,50,1,0,0,0,53,56,1,0,0,0,54,52,1,0,
  	0,0,54,55,1,0,0,0,55,57,1,0,0,0,56,54,1,0,0,0,57,58,5,57,0,0,58,1,1,0,
  	0,0,59,63,5,2,0,0,60,62,5,62,0,0,61,60,1,0,0,0,62,65,1,0,0,0,63,61,1,
  	0,0,0,63,64,1,0,0,0,64,89,1,0,0,0,65,63,1,0,0,0,66,77,3,4,2,0,67,71,5,
  	3,0,0,68,70,5,62,0,0,69,68,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,
  	1,0,0,0,72,74,1,0,0,0,73,71,1,0,0,0,74,76,3,4,2,0,75,67,1,0,0,0,76,79,
  	1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,80,82,
  	5,3,0,0,81,80,1,0,0,0,81,82,1,0,0,0,82,86,1,0,0,0,83,85,5,62,0,0,84,83,
  	1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,90,1,0,0,0,88,86,
  	1,0,0,0,89,66,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,92,5,4,0,0,92,3,
  	1,0,0,0,93,95,6,2,-1,0,94,96,7,0,0,0,95,94,1,0,0,0,96,97,1,0,0,0,97,95,
  	1,0,0,0,97,98,1,0,0,0,98,99,1,0,0,0,99,108,3,4,2,6,100,101,5,2,0,0,101,
  	102,3,4,2,0,102,103,5,4,0,0,103,108,1,0,0,0,104,108,5,58,0,0,105,108,
  	5,59,0,0,106,108,3,0,0,0,107,93,1,0,0,0,107,100,1,0,0,0,107,104,1,0,0,
  	0,107,105,1,0,0,0,107,106,1,0,0,0,108,121,1,0,0,0,109,110,10,7,0,0,110,
  	120,3,6,3,0,111,115,10,5,0,0,112,113,3,8,4,0,113,114,3,4,2,0,114,116,
  	1,0,0,0,115,112,1,0,0,0,116,117,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,
  	0,118,120,1,0,0,0,119,109,1,0,0,0,119,111,1,0,0,0,120,123,1,0,0,0,121,
  	119,1,0,0,0,121,122,1,0,0,0,122,5,1,0,0,0,123,121,1,0,0,0,124,134,3,2,
  	1,0,125,126,5,11,0,0,126,127,3,4,2,0,127,128,5,12,0,0,128,134,1,0,0,0,
  	129,130,5,13,0,0,130,134,5,57,0,0,131,132,5,14,0,0,132,134,5,57,0,0,133,
  	124,1,0,0,0,133,125,1,0,0,0,133,129,1,0,0,0,133,131,1,0,0,0,134,7,1,0,
  	0,0,135,147,5,15,0,0,136,147,7,1,0,0,137,147,7,2,0,0,138,147,7,3,0,0,
  	139,147,5,6,0,0,140,147,5,20,0,0,141,147,5,21,0,0,142,147,7,4,0,0,143,
  	147,7,5,0,0,144,147,5,28,0,0,145,147,5,29,0,0,146,135,1,0,0,0,146,136,
  	1,0,0,0,146,137,1,0,0,0,146,138,1,0,0,0,146,139,1,0,0,0,146,140,1,0,0,
  	0,146,141,1,0,0,0,146,142,1,0,0,0,146,143,1,0,0,0,146,144,1,0,0,0,146,
  	145,1,0,0,0,147,9,1,0,0,0,148,149,3,0,0,0,149,11,1,0,0,0,150,151,5,57,
  	0,0,151,152,3,14,7,0,152,13,1,0,0,0,153,154,5,30,0,0,154,157,3,10,5,0,
  	155,156,5,31,0,0,156,158,3,4,2,0,157,155,1,0,0,0,157,158,1,0,0,0,158,
  	162,1,0,0,0,159,160,5,32,0,0,160,162,3,4,2,0,161,153,1,0,0,0,161,159,
  	1,0,0,0,162,15,1,0,0,0,163,164,5,57,0,0,164,165,3,18,9,0,165,166,3,4,
  	2,0,166,17,1,0,0,0,167,179,5,33,0,0,168,179,5,34,0,0,169,179,5,35,0,0,
  	170,179,5,36,0,0,171,179,5,37,0,0,172,179,5,38,0,0,173,179,5,39,0,0,174,
  	179,5,40,0,0,175,179,5,41,0,0,176,179,5,42,0,0,177,179,5,43,0,0,178,167,
  	1,0,0,0,178,168,1,0,0,0,178,169,1,0,0,0,178,170,1,0,0,0,178,171,1,0,0,
  	0,178,172,1,0,0,0,178,173,1,0,0,0,178,174,1,0,0,0,178,175,1,0,0,0,178,
  	176,1,0,0,0,178,177,1,0,0,0,179,19,1,0,0,0,180,181,3,22,11,0,181,182,
  	5,62,0,0,182,21,1,0,0,0,183,190,3,24,12,0,184,190,3,26,13,0,185,190,3,
  	28,14,0,186,190,3,30,15,0,187,190,3,12,6,0,188,190,3,16,8,0,189,183,1,
  	0,0,0,189,184,1,0,0,0,189,185,1,0,0,0,189,186,1,0,0,0,189,187,1,0,0,0,
  	189,188,1,0,0,0,190,23,1,0,0,0,191,192,3,0,0,0,192,193,7,6,0,0,193,25,
  	1,0,0,0,194,195,3,4,2,0,195,196,3,2,1,0,196,27,1,0,0,0,197,198,5,46,0,
  	0,198,199,3,4,2,0,199,200,5,62,0,0,200,209,3,32,16,0,201,202,5,47,0,0,
  	202,203,5,46,0,0,203,204,3,4,2,0,204,205,5,62,0,0,205,206,3,32,16,0,206,
  	208,1,0,0,0,207,201,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,1,
  	0,0,0,210,215,1,0,0,0,211,209,1,0,0,0,212,213,5,47,0,0,213,214,5,62,0,
  	0,214,216,3,32,16,0,215,212,1,0,0,0,215,216,1,0,0,0,216,217,1,0,0,0,217,
  	218,5,48,0,0,218,219,5,46,0,0,219,29,1,0,0,0,220,221,5,49,0,0,221,222,
  	3,4,2,0,222,223,5,62,0,0,223,224,3,32,16,0,224,225,5,48,0,0,225,226,5,
  	49,0,0,226,31,1,0,0,0,227,231,3,20,10,0,228,230,5,62,0,0,229,228,1,0,
  	0,0,230,233,1,0,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,235,1,0,0,0,233,
  	231,1,0,0,0,234,227,1,0,0,0,235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,
  	0,0,0,237,33,1,0,0,0,238,236,1,0,0,0,239,240,5,50,0,0,240,241,5,57,0,
  	0,241,242,3,36,18,0,242,243,5,62,0,0,243,244,3,32,16,0,244,245,5,48,0,
  	0,245,246,5,57,0,0,246,35,1,0,0,0,247,251,5,2,0,0,248,250,5,62,0,0,249,
  	248,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,273,1,
  	0,0,0,253,251,1,0,0,0,254,255,3,12,6,0,255,259,5,3,0,0,256,258,5,62,0,
  	0,257,256,1,0,0,0,258,261,1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,260,
  	262,1,0,0,0,261,259,1,0,0,0,262,263,3,12,6,0,263,265,1,0,0,0,264,266,
  	5,3,0,0,265,264,1,0,0,0,265,266,1,0,0,0,266,270,1,0,0,0,267,269,5,62,
  	0,0,268,267,1,0,0,0,269,272,1,0,0,0,270,268,1,0,0,0,270,271,1,0,0,0,271,
  	274,1,0,0,0,272,270,1,0,0,0,273,254,1,0,0,0,273,274,1,0,0,0,274,275,1,
  	0,0,0,275,276,5,4,0,0,276,37,1,0,0,0,277,278,7,7,0,0,278,39,1,0,0,0,279,
  	280,3,38,19,0,280,286,5,62,0,0,281,282,3,12,6,0,282,283,5,62,0,0,283,
  	285,1,0,0,0,284,281,1,0,0,0,285,288,1,0,0,0,286,284,1,0,0,0,286,287,1,
  	0,0,0,287,289,1,0,0,0,288,286,1,0,0,0,289,290,5,48,0,0,290,291,5,57,0,
  	0,291,41,1,0,0,0,292,295,3,10,5,0,293,295,3,40,20,0,294,292,1,0,0,0,294,
  	293,1,0,0,0,295,43,1,0,0,0,296,297,7,8,0,0,297,298,5,57,0,0,298,299,5,
  	56,0,0,299,300,3,42,21,0,300,301,5,62,0,0,301,45,1,0,0,0,302,308,3,34,
  	17,0,303,308,3,44,22,0,304,305,3,12,6,0,305,306,5,62,0,0,306,308,1,0,
  	0,0,307,302,1,0,0,0,307,303,1,0,0,0,307,304,1,0,0,0,308,47,1,0,0,0,309,
  	313,3,46,23,0,310,312,5,62,0,0,311,310,1,0,0,0,312,315,1,0,0,0,313,311,
  	1,0,0,0,313,314,1,0,0,0,314,317,1,0,0,0,315,313,1,0,0,0,316,309,1,0,0,
  	0,317,320,1,0,0,0,318,316,1,0,0,0,318,319,1,0,0,0,319,49,1,0,0,0,320,
  	318,1,0,0,0,32,54,63,71,77,81,86,89,97,107,117,119,121,133,146,157,161,
  	178,189,209,215,231,236,251,259,265,270,273,286,294,307,313,318
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
    setState(54);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(50);
        antlrcpp::downCast<IdentContext *>(_localctx)->namespace_ = match(CapsuleParser::WORD);
        setState(51);
        match(CapsuleParser::T__0); 
      }
      setState(56);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(57);
    antlrcpp::downCast<IdentContext *>(_localctx)->name = match(CapsuleParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallArgsContext ------------------------------------------------------------------

CapsuleParser::CallArgsContext::CallArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::CallArgsContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::CallArgsContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

std::vector<CapsuleParser::ExprContext *> CapsuleParser::CallArgsContext::expr() {
  return getRuleContexts<CapsuleParser::ExprContext>();
}

CapsuleParser::ExprContext* CapsuleParser::CallArgsContext::expr(size_t i) {
  return getRuleContext<CapsuleParser::ExprContext>(i);
}


size_t CapsuleParser::CallArgsContext::getRuleIndex() const {
  return CapsuleParser::RuleCallArgs;
}

void CapsuleParser::CallArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallArgs(this);
}

void CapsuleParser::CallArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallArgs(this);
}


std::any CapsuleParser::CallArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCallArgs(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::CallArgsContext* CapsuleParser::callArgs() {
  CallArgsContext *_localctx = _tracker.createInstance<CallArgsContext>(_ctx, getState());
  enterRule(_localctx, 2, CapsuleParser::RuleCallArgs);
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
    setState(59);
    match(CapsuleParser::T__1);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CapsuleParser::ENDLINE) {
      setState(60);
      match(CapsuleParser::ENDLINE);
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316530993124) != 0)) {
      setState(66);
      antlrcpp::downCast<CallArgsContext *>(_localctx)->arg = expr(0);
      setState(77);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(67);
          match(CapsuleParser::T__2);
          setState(71);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CapsuleParser::ENDLINE) {
            setState(68);
            match(CapsuleParser::ENDLINE);
            setState(73);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(74);
          antlrcpp::downCast<CallArgsContext *>(_localctx)->arg = expr(0); 
        }
        setState(79);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      }
      setState(81);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CapsuleParser::T__2) {
        setState(80);
        match(CapsuleParser::T__2);
      }
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(83);
        match(CapsuleParser::ENDLINE);
        setState(88);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(91);
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

std::vector<CapsuleParser::BinaryOpContext *> CapsuleParser::BinaryExprContext::binaryOp() {
  return getRuleContexts<CapsuleParser::BinaryOpContext>();
}

CapsuleParser::BinaryOpContext* CapsuleParser::BinaryExprContext::binaryOp(size_t i) {
  return getRuleContext<CapsuleParser::BinaryOpContext>(i);
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
//----------------- PostfixExprContext ------------------------------------------------------------------

CapsuleParser::EndPostfixExprContext* CapsuleParser::PostfixExprContext::endPostfixExpr() {
  return getRuleContext<CapsuleParser::EndPostfixExprContext>(0);
}

CapsuleParser::ExprContext* CapsuleParser::PostfixExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::PostfixExprContext::PostfixExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::PostfixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpr(this);
}
void CapsuleParser::PostfixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpr(this);
}

std::any CapsuleParser::PostfixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitPostfixExpr(this);
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
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__4:
      case CapsuleParser::T__5:
      case CapsuleParser::T__6:
      case CapsuleParser::T__7:
      case CapsuleParser::T__8:
      case CapsuleParser::T__9: {
        _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(95); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(94);
                  antlrcpp::downCast<UnaryExprContext *>(_localctx)->op = _input->LT(1);
                  _la = _input->LA(1);
                  if (!((((_la & ~ 0x3fULL) == 0) &&
                    ((1ULL << _la) & 2016) != 0))) {
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
          setState(97); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        setState(99);
        antlrcpp::downCast<UnaryExprContext *>(_localctx)->subExpr = expr(6);
        break;
      }

      case CapsuleParser::T__1: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(100);
        match(CapsuleParser::T__1);
        setState(101);
        antlrcpp::downCast<ParenExprContext *>(_localctx)->subExpr = expr(0);
        setState(102);
        match(CapsuleParser::T__3);
        break;
      }

      case CapsuleParser::INTEGER: {
        _localctx = _tracker.createInstance<IntLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(104);
        antlrcpp::downCast<IntLiteralContext *>(_localctx)->value = match(CapsuleParser::INTEGER);
        break;
      }

      case CapsuleParser::FLOAT: {
        _localctx = _tracker.createInstance<FloatLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(105);
        antlrcpp::downCast<FloatLiteralContext *>(_localctx)->value = match(CapsuleParser::FLOAT);
        break;
      }

      case CapsuleParser::WORD: {
        _localctx = _tracker.createInstance<IdentExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(106);
        antlrcpp::downCast<IdentExprContext *>(_localctx)->expr_ident = ident();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(121);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(119);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PostfixExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->subExpr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(109);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(110);
          endPostfixExpr();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(111);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(115); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(112);
                    antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = binaryOp();
                    setState(113);
                    antlrcpp::downCast<BinaryExprContext *>(_localctx)->rhs = expr(0);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(117); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        default:
          break;
        } 
      }
      setState(123);
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

//----------------- EndPostfixExprContext ------------------------------------------------------------------

CapsuleParser::EndPostfixExprContext::EndPostfixExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::EndPostfixExprContext::getRuleIndex() const {
  return CapsuleParser::RuleEndPostfixExpr;
}

void CapsuleParser::EndPostfixExprContext::copyFrom(EndPostfixExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayAccessExprContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::ArrayAccessExprContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::ArrayAccessExprContext::ArrayAccessExprContext(EndPostfixExprContext *ctx) { copyFrom(ctx); }

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
//----------------- FuncCallExprContext ------------------------------------------------------------------

CapsuleParser::CallArgsContext* CapsuleParser::FuncCallExprContext::callArgs() {
  return getRuleContext<CapsuleParser::CallArgsContext>(0);
}

CapsuleParser::FuncCallExprContext::FuncCallExprContext(EndPostfixExprContext *ctx) { copyFrom(ctx); }

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

tree::TerminalNode* CapsuleParser::ArrowAccessExprContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::ArrowAccessExprContext::ArrowAccessExprContext(EndPostfixExprContext *ctx) { copyFrom(ctx); }

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

tree::TerminalNode* CapsuleParser::DotAccessExprContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::DotAccessExprContext::DotAccessExprContext(EndPostfixExprContext *ctx) { copyFrom(ctx); }

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
CapsuleParser::EndPostfixExprContext* CapsuleParser::endPostfixExpr() {
  EndPostfixExprContext *_localctx = _tracker.createInstance<EndPostfixExprContext>(_ctx, getState());
  enterRule(_localctx, 6, CapsuleParser::RuleEndPostfixExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__1: {
        _localctx = _tracker.createInstance<CapsuleParser::FuncCallExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(124);
        antlrcpp::downCast<FuncCallExprContext *>(_localctx)->args = callArgs();
        break;
      }

      case CapsuleParser::T__10: {
        _localctx = _tracker.createInstance<CapsuleParser::ArrayAccessExprContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(125);
        match(CapsuleParser::T__10);
        setState(126);
        antlrcpp::downCast<ArrayAccessExprContext *>(_localctx)->index_expr = expr(0);
        setState(127);
        match(CapsuleParser::T__11);
        break;
      }

      case CapsuleParser::T__12: {
        _localctx = _tracker.createInstance<CapsuleParser::ArrowAccessExprContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(129);
        match(CapsuleParser::T__12);
        setState(130);
        antlrcpp::downCast<ArrowAccessExprContext *>(_localctx)->field = match(CapsuleParser::WORD);
        break;
      }

      case CapsuleParser::T__13: {
        _localctx = _tracker.createInstance<CapsuleParser::DotAccessExprContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(131);
        match(CapsuleParser::T__13);
        setState(132);
        antlrcpp::downCast<DotAccessExprContext *>(_localctx)->field = match(CapsuleParser::WORD);
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

//----------------- BinaryOpContext ------------------------------------------------------------------

CapsuleParser::BinaryOpContext::BinaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::BinaryOpContext::getRuleIndex() const {
  return CapsuleParser::RuleBinaryOp;
}

void CapsuleParser::BinaryOpContext::copyFrom(BinaryOpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BitAndContext ------------------------------------------------------------------

CapsuleParser::BitAndContext::BitAndContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::CompareContext::CompareContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::MultDivModContext::MultDivModContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::BitXorContext::BitXorContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::BitOrContext::BitOrContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::ShiftContext::ShiftContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::LogicalAndContext::LogicalAndContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::AddSubContext::AddSubContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::ExpContext::ExpContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::LogicalOrContext::LogicalOrContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::EqNeqContext::EqNeqContext(BinaryOpContext *ctx) { copyFrom(ctx); }

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
CapsuleParser::BinaryOpContext* CapsuleParser::binaryOp() {
  BinaryOpContext *_localctx = _tracker.createInstance<BinaryOpContext>(_ctx, getState());
  enterRule(_localctx, 8, CapsuleParser::RuleBinaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__14: {
        _localctx = _tracker.createInstance<CapsuleParser::ExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(135);
        match(CapsuleParser::T__14);
        break;
      }

      case CapsuleParser::T__4:
      case CapsuleParser::T__15:
      case CapsuleParser::T__16: {
        _localctx = _tracker.createInstance<CapsuleParser::MultDivModContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(136);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 196640) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CapsuleParser::T__6:
      case CapsuleParser::T__7: {
        _localctx = _tracker.createInstance<CapsuleParser::AddSubContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(137);
        _la = _input->LA(1);
        if (!(_la == CapsuleParser::T__6

        || _la == CapsuleParser::T__7)) {
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
        setState(138);
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

      case CapsuleParser::T__5: {
        _localctx = _tracker.createInstance<CapsuleParser::BitAndContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(139);
        match(CapsuleParser::T__5);
        break;
      }

      case CapsuleParser::T__19: {
        _localctx = _tracker.createInstance<CapsuleParser::BitXorContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(140);
        match(CapsuleParser::T__19);
        break;
      }

      case CapsuleParser::T__20: {
        _localctx = _tracker.createInstance<CapsuleParser::BitOrContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(141);
        match(CapsuleParser::T__20);
        break;
      }

      case CapsuleParser::T__21:
      case CapsuleParser::T__22:
      case CapsuleParser::T__23:
      case CapsuleParser::T__24: {
        _localctx = _tracker.createInstance<CapsuleParser::CompareContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(142);
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
        setState(143);
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
        setState(144);
        match(CapsuleParser::T__27);
        break;
      }

      case CapsuleParser::T__28: {
        _localctx = _tracker.createInstance<CapsuleParser::LogicalOrContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(145);
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

//----------------- TypeNameContext ------------------------------------------------------------------

CapsuleParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CapsuleParser::IdentContext* CapsuleParser::TypeNameContext::ident() {
  return getRuleContext<CapsuleParser::IdentContext>(0);
}


size_t CapsuleParser::TypeNameContext::getRuleIndex() const {
  return CapsuleParser::RuleTypeName;
}

void CapsuleParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void CapsuleParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


std::any CapsuleParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::TypeNameContext* CapsuleParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 10, CapsuleParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    antlrcpp::downCast<TypeNameContext *>(_localctx)->name = ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateVarContext ------------------------------------------------------------------

CapsuleParser::CreateVarContext::CreateVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::CreateVarContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::CreateVarTypeAndExprContext* CapsuleParser::CreateVarContext::createVarTypeAndExpr() {
  return getRuleContext<CapsuleParser::CreateVarTypeAndExprContext>(0);
}


size_t CapsuleParser::CreateVarContext::getRuleIndex() const {
  return CapsuleParser::RuleCreateVar;
}

void CapsuleParser::CreateVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateVar(this);
}

void CapsuleParser::CreateVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateVar(this);
}


std::any CapsuleParser::CreateVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCreateVar(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::CreateVarContext* CapsuleParser::createVar() {
  CreateVarContext *_localctx = _tracker.createInstance<CreateVarContext>(_ctx, getState());
  enterRule(_localctx, 12, CapsuleParser::RuleCreateVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    antlrcpp::downCast<CreateVarContext *>(_localctx)->name = match(CapsuleParser::WORD);
    setState(151);
    antlrcpp::downCast<CreateVarContext *>(_localctx)->typeAndExpr = createVarTypeAndExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateVarTypeAndExprContext ------------------------------------------------------------------

CapsuleParser::CreateVarTypeAndExprContext::CreateVarTypeAndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::CreateVarTypeAndExprContext::getRuleIndex() const {
  return CapsuleParser::RuleCreateVarTypeAndExpr;
}

void CapsuleParser::CreateVarTypeAndExprContext::copyFrom(CreateVarTypeAndExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CreateWithTypeContext ------------------------------------------------------------------

CapsuleParser::TypeNameContext* CapsuleParser::CreateWithTypeContext::typeName() {
  return getRuleContext<CapsuleParser::TypeNameContext>(0);
}

CapsuleParser::ExprContext* CapsuleParser::CreateWithTypeContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::CreateWithTypeContext::CreateWithTypeContext(CreateVarTypeAndExprContext *ctx) { copyFrom(ctx); }

void CapsuleParser::CreateWithTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateWithType(this);
}
void CapsuleParser::CreateWithTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateWithType(this);
}

std::any CapsuleParser::CreateWithTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCreateWithType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CreateInferTypeContext ------------------------------------------------------------------

CapsuleParser::ExprContext* CapsuleParser::CreateInferTypeContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::CreateInferTypeContext::CreateInferTypeContext(CreateVarTypeAndExprContext *ctx) { copyFrom(ctx); }

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
CapsuleParser::CreateVarTypeAndExprContext* CapsuleParser::createVarTypeAndExpr() {
  CreateVarTypeAndExprContext *_localctx = _tracker.createInstance<CreateVarTypeAndExprContext>(_ctx, getState());
  enterRule(_localctx, 14, CapsuleParser::RuleCreateVarTypeAndExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__29: {
        _localctx = _tracker.createInstance<CapsuleParser::CreateWithTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(153);
        match(CapsuleParser::T__29);
        setState(154);
        typeName();
        setState(157);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CapsuleParser::T__30) {
          setState(155);
          match(CapsuleParser::T__30);
          setState(156);
          antlrcpp::downCast<CreateWithTypeContext *>(_localctx)->subExpr = expr(0);
        }
        break;
      }

      case CapsuleParser::T__31: {
        _localctx = _tracker.createInstance<CapsuleParser::CreateInferTypeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(159);
        match(CapsuleParser::T__31);
        setState(160);
        antlrcpp::downCast<CreateInferTypeContext *>(_localctx)->subExpr = expr(0);
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

//----------------- ModifyVarContext ------------------------------------------------------------------

CapsuleParser::ModifyVarContext::ModifyVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::ModifyVarContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::InPlaceOpContext* CapsuleParser::ModifyVarContext::inPlaceOp() {
  return getRuleContext<CapsuleParser::InPlaceOpContext>(0);
}

CapsuleParser::ExprContext* CapsuleParser::ModifyVarContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}


size_t CapsuleParser::ModifyVarContext::getRuleIndex() const {
  return CapsuleParser::RuleModifyVar;
}

void CapsuleParser::ModifyVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifyVar(this);
}

void CapsuleParser::ModifyVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifyVar(this);
}


std::any CapsuleParser::ModifyVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitModifyVar(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::ModifyVarContext* CapsuleParser::modifyVar() {
  ModifyVarContext *_localctx = _tracker.createInstance<ModifyVarContext>(_ctx, getState());
  enterRule(_localctx, 16, CapsuleParser::RuleModifyVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(CapsuleParser::WORD);
    setState(164);
    antlrcpp::downCast<ModifyVarContext *>(_localctx)->op = inPlaceOp();
    setState(165);
    antlrcpp::downCast<ModifyVarContext *>(_localctx)->subExpr = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InPlaceOpContext ------------------------------------------------------------------

CapsuleParser::InPlaceOpContext::InPlaceOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::InPlaceOpContext::getRuleIndex() const {
  return CapsuleParser::RuleInPlaceOp;
}

void CapsuleParser::InPlaceOpContext::copyFrom(InPlaceOpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlusEqContext ------------------------------------------------------------------

CapsuleParser::PlusEqContext::PlusEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::LShiftEqContext::LShiftEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::MinusEqContext::MinusEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::RShiftEqContext::RShiftEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::XorEqContext::XorEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::AndEqContext::AndEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::OrEqContext::OrEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::ModEqContext::ModEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::ExpEqContext::ExpEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::MultEqContext::MultEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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

CapsuleParser::DivEqContext::DivEqContext(InPlaceOpContext *ctx) { copyFrom(ctx); }

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
CapsuleParser::InPlaceOpContext* CapsuleParser::inPlaceOp() {
  InPlaceOpContext *_localctx = _tracker.createInstance<InPlaceOpContext>(_ctx, getState());
  enterRule(_localctx, 18, CapsuleParser::RuleInPlaceOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__32: {
        _localctx = _tracker.createInstance<CapsuleParser::PlusEqContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(167);
        match(CapsuleParser::T__32);
        break;
      }

      case CapsuleParser::T__33: {
        _localctx = _tracker.createInstance<CapsuleParser::MinusEqContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(168);
        match(CapsuleParser::T__33);
        break;
      }

      case CapsuleParser::T__34: {
        _localctx = _tracker.createInstance<CapsuleParser::MultEqContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(169);
        match(CapsuleParser::T__34);
        break;
      }

      case CapsuleParser::T__35: {
        _localctx = _tracker.createInstance<CapsuleParser::DivEqContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(170);
        match(CapsuleParser::T__35);
        break;
      }

      case CapsuleParser::T__36: {
        _localctx = _tracker.createInstance<CapsuleParser::ModEqContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(171);
        match(CapsuleParser::T__36);
        break;
      }

      case CapsuleParser::T__37: {
        _localctx = _tracker.createInstance<CapsuleParser::ExpEqContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(172);
        match(CapsuleParser::T__37);
        break;
      }

      case CapsuleParser::T__38: {
        _localctx = _tracker.createInstance<CapsuleParser::XorEqContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(173);
        match(CapsuleParser::T__38);
        break;
      }

      case CapsuleParser::T__39: {
        _localctx = _tracker.createInstance<CapsuleParser::OrEqContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(174);
        match(CapsuleParser::T__39);
        break;
      }

      case CapsuleParser::T__40: {
        _localctx = _tracker.createInstance<CapsuleParser::AndEqContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(175);
        match(CapsuleParser::T__40);
        break;
      }

      case CapsuleParser::T__41: {
        _localctx = _tracker.createInstance<CapsuleParser::LShiftEqContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(176);
        match(CapsuleParser::T__41);
        break;
      }

      case CapsuleParser::T__42: {
        _localctx = _tracker.createInstance<CapsuleParser::RShiftEqContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(177);
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
  enterRule(_localctx, 20, CapsuleParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    antlrcpp::downCast<StatementContext *>(_localctx)->subStmt = statement_no_endline();
    setState(181);
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

CapsuleParser::ModifyVarContext* CapsuleParser::ModifyVarStmtContext::modifyVar() {
  return getRuleContext<CapsuleParser::ModifyVarContext>(0);
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

CapsuleParser::WhileStatementContext* CapsuleParser::WhileStmtContext::whileStatement() {
  return getRuleContext<CapsuleParser::WhileStatementContext>(0);
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

CapsuleParser::IfStatementContext* CapsuleParser::IfStmtContext::ifStatement() {
  return getRuleContext<CapsuleParser::IfStatementContext>(0);
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

CapsuleParser::FunctionCallStatementContext* CapsuleParser::FuncCallStmtContext::functionCallStatement() {
  return getRuleContext<CapsuleParser::FunctionCallStatementContext>(0);
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

CapsuleParser::CreateVarContext* CapsuleParser::CreateVarStmtContext::createVar() {
  return getRuleContext<CapsuleParser::CreateVarContext>(0);
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

CapsuleParser::IncDecStatementContext* CapsuleParser::IncDecStmtContext::incDecStatement() {
  return getRuleContext<CapsuleParser::IncDecStatementContext>(0);
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
  enterRule(_localctx, 22, CapsuleParser::RuleStatement_no_endline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CapsuleParser::IncDecStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(183);
      antlrcpp::downCast<IncDecStmtContext *>(_localctx)->subStmt = incDecStatement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CapsuleParser::FuncCallStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(184);
      antlrcpp::downCast<FuncCallStmtContext *>(_localctx)->subStmt = functionCallStatement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CapsuleParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(185);
      antlrcpp::downCast<IfStmtContext *>(_localctx)->subStmt = ifStatement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CapsuleParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(186);
      antlrcpp::downCast<WhileStmtContext *>(_localctx)->subStmt = whileStatement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CapsuleParser::CreateVarStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(187);
      antlrcpp::downCast<CreateVarStmtContext *>(_localctx)->subStmt = createVar();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CapsuleParser::ModifyVarStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(188);
      antlrcpp::downCast<ModifyVarStmtContext *>(_localctx)->subStmt = modifyVar();
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

//----------------- IncDecStatementContext ------------------------------------------------------------------

CapsuleParser::IncDecStatementContext::IncDecStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CapsuleParser::IdentContext* CapsuleParser::IncDecStatementContext::ident() {
  return getRuleContext<CapsuleParser::IdentContext>(0);
}


size_t CapsuleParser::IncDecStatementContext::getRuleIndex() const {
  return CapsuleParser::RuleIncDecStatement;
}

void CapsuleParser::IncDecStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncDecStatement(this);
}

void CapsuleParser::IncDecStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncDecStatement(this);
}


std::any CapsuleParser::IncDecStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIncDecStatement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::IncDecStatementContext* CapsuleParser::incDecStatement() {
  IncDecStatementContext *_localctx = _tracker.createInstance<IncDecStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, CapsuleParser::RuleIncDecStatement);
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
    setState(191);
    antlrcpp::downCast<IncDecStatementContext *>(_localctx)->incDecIdent = ident();
    setState(192);
    antlrcpp::downCast<IncDecStatementContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == CapsuleParser::T__43

    || _la == CapsuleParser::T__44)) {
      antlrcpp::downCast<IncDecStatementContext *>(_localctx)->op = _errHandler->recoverInline(this);
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

//----------------- FunctionCallStatementContext ------------------------------------------------------------------

CapsuleParser::FunctionCallStatementContext::FunctionCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CapsuleParser::ExprContext* CapsuleParser::FunctionCallStatementContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::CallArgsContext* CapsuleParser::FunctionCallStatementContext::callArgs() {
  return getRuleContext<CapsuleParser::CallArgsContext>(0);
}


size_t CapsuleParser::FunctionCallStatementContext::getRuleIndex() const {
  return CapsuleParser::RuleFunctionCallStatement;
}

void CapsuleParser::FunctionCallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallStatement(this);
}

void CapsuleParser::FunctionCallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallStatement(this);
}


std::any CapsuleParser::FunctionCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFunctionCallStatement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::FunctionCallStatementContext* CapsuleParser::functionCallStatement() {
  FunctionCallStatementContext *_localctx = _tracker.createInstance<FunctionCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, CapsuleParser::RuleFunctionCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    antlrcpp::downCast<FunctionCallStatementContext *>(_localctx)->subExpr = expr(0);
    setState(195);
    antlrcpp::downCast<FunctionCallStatementContext *>(_localctx)->args = callArgs();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

CapsuleParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::IfStatementContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::IfStatementContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

std::vector<CapsuleParser::ExprContext *> CapsuleParser::IfStatementContext::expr() {
  return getRuleContexts<CapsuleParser::ExprContext>();
}

CapsuleParser::ExprContext* CapsuleParser::IfStatementContext::expr(size_t i) {
  return getRuleContext<CapsuleParser::ExprContext>(i);
}

std::vector<CapsuleParser::CompoundStatementContext *> CapsuleParser::IfStatementContext::compoundStatement() {
  return getRuleContexts<CapsuleParser::CompoundStatementContext>();
}

CapsuleParser::CompoundStatementContext* CapsuleParser::IfStatementContext::compoundStatement(size_t i) {
  return getRuleContext<CapsuleParser::CompoundStatementContext>(i);
}


size_t CapsuleParser::IfStatementContext::getRuleIndex() const {
  return CapsuleParser::RuleIfStatement;
}

void CapsuleParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void CapsuleParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any CapsuleParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::IfStatementContext* CapsuleParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, CapsuleParser::RuleIfStatement);
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
    setState(197);
    match(CapsuleParser::T__45);
    setState(198);
    antlrcpp::downCast<IfStatementContext *>(_localctx)->if_cond = expr(0);
    setState(199);
    match(CapsuleParser::ENDLINE);
    setState(200);
    antlrcpp::downCast<IfStatementContext *>(_localctx)->if_body = compoundStatement();
    setState(209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(201);
        match(CapsuleParser::T__46);
        setState(202);
        match(CapsuleParser::T__45);
        setState(203);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->else_if_cond = expr(0);
        setState(204);
        match(CapsuleParser::ENDLINE);
        setState(205);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->else_if_body = compoundStatement(); 
      }
      setState(211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(215);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CapsuleParser::T__46) {
      setState(212);
      match(CapsuleParser::T__46);
      setState(213);
      match(CapsuleParser::ENDLINE);
      setState(214);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->else_body = compoundStatement();
    }
    setState(217);
    match(CapsuleParser::T__47);
    setState(218);
    match(CapsuleParser::T__45);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

CapsuleParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::WhileStatementContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

CapsuleParser::ExprContext* CapsuleParser::WhileStatementContext::expr() {
  return getRuleContext<CapsuleParser::ExprContext>(0);
}

CapsuleParser::CompoundStatementContext* CapsuleParser::WhileStatementContext::compoundStatement() {
  return getRuleContext<CapsuleParser::CompoundStatementContext>(0);
}


size_t CapsuleParser::WhileStatementContext::getRuleIndex() const {
  return CapsuleParser::RuleWhileStatement;
}

void CapsuleParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void CapsuleParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any CapsuleParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::WhileStatementContext* CapsuleParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, CapsuleParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(CapsuleParser::T__48);
    setState(221);
    antlrcpp::downCast<WhileStatementContext *>(_localctx)->whileCond = expr(0);
    setState(222);
    match(CapsuleParser::ENDLINE);
    setState(223);
    antlrcpp::downCast<WhileStatementContext *>(_localctx)->whileBody = compoundStatement();
    setState(224);
    match(CapsuleParser::T__47);
    setState(225);
    match(CapsuleParser::T__48);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CapsuleParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CapsuleParser::StatementContext *> CapsuleParser::CompoundStatementContext::statement() {
  return getRuleContexts<CapsuleParser::StatementContext>();
}

CapsuleParser::StatementContext* CapsuleParser::CompoundStatementContext::statement(size_t i) {
  return getRuleContext<CapsuleParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> CapsuleParser::CompoundStatementContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::CompoundStatementContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}


size_t CapsuleParser::CompoundStatementContext::getRuleIndex() const {
  return CapsuleParser::RuleCompoundStatement;
}

void CapsuleParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CapsuleParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


std::any CapsuleParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::CompoundStatementContext* CapsuleParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, CapsuleParser::RuleCompoundStatement);
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
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1009439635228592100) != 0)) {
      setState(227);
      antlrcpp::downCast<CompoundStatementContext *>(_localctx)->subStmt = statement();
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(228);
        match(CapsuleParser::ENDLINE);
        setState(233);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(238);
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

//----------------- FunctionDefContext ------------------------------------------------------------------

CapsuleParser::FunctionDefContext::FunctionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::FunctionDefContext::WORD() {
  return getTokens(CapsuleParser::WORD);
}

tree::TerminalNode* CapsuleParser::FunctionDefContext::WORD(size_t i) {
  return getToken(CapsuleParser::WORD, i);
}

tree::TerminalNode* CapsuleParser::FunctionDefContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

CapsuleParser::FunctionDefParamsContext* CapsuleParser::FunctionDefContext::functionDefParams() {
  return getRuleContext<CapsuleParser::FunctionDefParamsContext>(0);
}

CapsuleParser::CompoundStatementContext* CapsuleParser::FunctionDefContext::compoundStatement() {
  return getRuleContext<CapsuleParser::CompoundStatementContext>(0);
}


size_t CapsuleParser::FunctionDefContext::getRuleIndex() const {
  return CapsuleParser::RuleFunctionDef;
}

void CapsuleParser::FunctionDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDef(this);
}

void CapsuleParser::FunctionDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDef(this);
}


std::any CapsuleParser::FunctionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFunctionDef(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::FunctionDefContext* CapsuleParser::functionDef() {
  FunctionDefContext *_localctx = _tracker.createInstance<FunctionDefContext>(_ctx, getState());
  enterRule(_localctx, 34, CapsuleParser::RuleFunctionDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(CapsuleParser::T__49);
    setState(240);
    match(CapsuleParser::WORD);
    setState(241);
    antlrcpp::downCast<FunctionDefContext *>(_localctx)->params = functionDefParams();
    setState(242);
    match(CapsuleParser::ENDLINE);
    setState(243);
    antlrcpp::downCast<FunctionDefContext *>(_localctx)->body = compoundStatement();
    setState(244);
    match(CapsuleParser::T__47);
    setState(245);
    match(CapsuleParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefParamsContext ------------------------------------------------------------------

CapsuleParser::FunctionDefParamsContext::FunctionDefParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::FunctionDefParamsContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::FunctionDefParamsContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

std::vector<CapsuleParser::CreateVarContext *> CapsuleParser::FunctionDefParamsContext::createVar() {
  return getRuleContexts<CapsuleParser::CreateVarContext>();
}

CapsuleParser::CreateVarContext* CapsuleParser::FunctionDefParamsContext::createVar(size_t i) {
  return getRuleContext<CapsuleParser::CreateVarContext>(i);
}


size_t CapsuleParser::FunctionDefParamsContext::getRuleIndex() const {
  return CapsuleParser::RuleFunctionDefParams;
}

void CapsuleParser::FunctionDefParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefParams(this);
}

void CapsuleParser::FunctionDefParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefParams(this);
}


std::any CapsuleParser::FunctionDefParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitFunctionDefParams(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::FunctionDefParamsContext* CapsuleParser::functionDefParams() {
  FunctionDefParamsContext *_localctx = _tracker.createInstance<FunctionDefParamsContext>(_ctx, getState());
  enterRule(_localctx, 36, CapsuleParser::RuleFunctionDefParams);
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
    setState(247);
    match(CapsuleParser::T__1);
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CapsuleParser::ENDLINE) {
      setState(248);
      match(CapsuleParser::ENDLINE);
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(273);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CapsuleParser::WORD) {
      setState(254);
      antlrcpp::downCast<FunctionDefParamsContext *>(_localctx)->param = createVar();

      setState(255);
      match(CapsuleParser::T__2);
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(256);
        match(CapsuleParser::ENDLINE);
        setState(261);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(262);
      antlrcpp::downCast<FunctionDefParamsContext *>(_localctx)->param = createVar();
      setState(265);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CapsuleParser::T__2) {
        setState(264);
        match(CapsuleParser::T__2);
      }
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(267);
        match(CapsuleParser::ENDLINE);
        setState(272);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(275);
    match(CapsuleParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVarietyContext ------------------------------------------------------------------

CapsuleParser::TypeVarietyContext::TypeVarietyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CapsuleParser::TypeVarietyContext::getRuleIndex() const {
  return CapsuleParser::RuleTypeVariety;
}

void CapsuleParser::TypeVarietyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeVariety(this);
}

void CapsuleParser::TypeVarietyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeVariety(this);
}


std::any CapsuleParser::TypeVarietyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitTypeVariety(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::TypeVarietyContext* CapsuleParser::typeVariety() {
  TypeVarietyContext *_localctx = _tracker.createInstance<TypeVarietyContext>(_ctx, getState());
  enterRule(_localctx, 38, CapsuleParser::RuleTypeVariety);
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
    setState(277);
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

//----------------- TypeLiteralContext ------------------------------------------------------------------

CapsuleParser::TypeLiteralContext::TypeLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CapsuleParser::TypeLiteralContext::ENDLINE() {
  return getTokens(CapsuleParser::ENDLINE);
}

tree::TerminalNode* CapsuleParser::TypeLiteralContext::ENDLINE(size_t i) {
  return getToken(CapsuleParser::ENDLINE, i);
}

tree::TerminalNode* CapsuleParser::TypeLiteralContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::TypeVarietyContext* CapsuleParser::TypeLiteralContext::typeVariety() {
  return getRuleContext<CapsuleParser::TypeVarietyContext>(0);
}

std::vector<CapsuleParser::CreateVarContext *> CapsuleParser::TypeLiteralContext::createVar() {
  return getRuleContexts<CapsuleParser::CreateVarContext>();
}

CapsuleParser::CreateVarContext* CapsuleParser::TypeLiteralContext::createVar(size_t i) {
  return getRuleContext<CapsuleParser::CreateVarContext>(i);
}


size_t CapsuleParser::TypeLiteralContext::getRuleIndex() const {
  return CapsuleParser::RuleTypeLiteral;
}

void CapsuleParser::TypeLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeLiteral(this);
}

void CapsuleParser::TypeLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeLiteral(this);
}


std::any CapsuleParser::TypeLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitTypeLiteral(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::TypeLiteralContext* CapsuleParser::typeLiteral() {
  TypeLiteralContext *_localctx = _tracker.createInstance<TypeLiteralContext>(_ctx, getState());
  enterRule(_localctx, 40, CapsuleParser::RuleTypeLiteral);
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
    setState(279);
    antlrcpp::downCast<TypeLiteralContext *>(_localctx)->variety = typeVariety();
    setState(280);
    match(CapsuleParser::ENDLINE);
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CapsuleParser::WORD) {
      setState(281);
      antlrcpp::downCast<TypeLiteralContext *>(_localctx)->field = createVar();
      setState(282);
      match(CapsuleParser::ENDLINE);
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(289);
    match(CapsuleParser::T__47);
    setState(290);
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

CapsuleParser::TypeLiteralContext* CapsuleParser::TypeFromLiteralContext::typeLiteral() {
  return getRuleContext<CapsuleParser::TypeLiteralContext>(0);
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

CapsuleParser::TypeNameContext* CapsuleParser::TypeFromNameContext::typeName() {
  return getRuleContext<CapsuleParser::TypeNameContext>(0);
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
  enterRule(_localctx, 42, CapsuleParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::WORD: {
        _localctx = _tracker.createInstance<CapsuleParser::TypeFromNameContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(292);
        antlrcpp::downCast<TypeFromNameContext *>(_localctx)->name = typeName();
        break;
      }

      case CapsuleParser::T__50:
      case CapsuleParser::T__51:
      case CapsuleParser::T__52: {
        _localctx = _tracker.createInstance<CapsuleParser::TypeFromLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(293);
        antlrcpp::downCast<TypeFromLiteralContext *>(_localctx)->literal = typeLiteral();
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

//----------------- TypeOrAliasDefContext ------------------------------------------------------------------

CapsuleParser::TypeOrAliasDefContext::TypeOrAliasDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CapsuleParser::TypeOrAliasDefContext::ENDLINE() {
  return getToken(CapsuleParser::ENDLINE, 0);
}

tree::TerminalNode* CapsuleParser::TypeOrAliasDefContext::WORD() {
  return getToken(CapsuleParser::WORD, 0);
}

CapsuleParser::TypeContext* CapsuleParser::TypeOrAliasDefContext::type() {
  return getRuleContext<CapsuleParser::TypeContext>(0);
}


size_t CapsuleParser::TypeOrAliasDefContext::getRuleIndex() const {
  return CapsuleParser::RuleTypeOrAliasDef;
}

void CapsuleParser::TypeOrAliasDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeOrAliasDef(this);
}

void CapsuleParser::TypeOrAliasDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CapsuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeOrAliasDef(this);
}


std::any CapsuleParser::TypeOrAliasDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CapsuleVisitor*>(visitor))
    return parserVisitor->visitTypeOrAliasDef(this);
  else
    return visitor->visitChildren(this);
}

CapsuleParser::TypeOrAliasDefContext* CapsuleParser::typeOrAliasDef() {
  TypeOrAliasDefContext *_localctx = _tracker.createInstance<TypeOrAliasDefContext>(_ctx, getState());
  enterRule(_localctx, 44, CapsuleParser::RuleTypeOrAliasDef);
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
    setState(296);
    antlrcpp::downCast<TypeOrAliasDefContext *>(_localctx)->typeOrAliasTok = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == CapsuleParser::T__53

    || _la == CapsuleParser::T__54)) {
      antlrcpp::downCast<TypeOrAliasDefContext *>(_localctx)->typeOrAliasTok = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(297);
    antlrcpp::downCast<TypeOrAliasDefContext *>(_localctx)->name = match(CapsuleParser::WORD);
    setState(298);
    match(CapsuleParser::T__55);
    setState(299);
    antlrcpp::downCast<TypeOrAliasDefContext *>(_localctx)->assignType = type();
    setState(300);
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

CapsuleParser::TypeOrAliasDefContext* CapsuleParser::DefIsTypeOrAliasContext::typeOrAliasDef() {
  return getRuleContext<CapsuleParser::TypeOrAliasDefContext>(0);
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

CapsuleParser::FunctionDefContext* CapsuleParser::DefIsFunctionContext::functionDef() {
  return getRuleContext<CapsuleParser::FunctionDefContext>(0);
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

CapsuleParser::CreateVarContext* CapsuleParser::DefIsVarDefContext::createVar() {
  return getRuleContext<CapsuleParser::CreateVarContext>(0);
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
  enterRule(_localctx, 46, CapsuleParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CapsuleParser::T__49: {
        _localctx = _tracker.createInstance<CapsuleParser::DefIsFunctionContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(302);
        antlrcpp::downCast<DefIsFunctionContext *>(_localctx)->func = functionDef();
        break;
      }

      case CapsuleParser::T__53:
      case CapsuleParser::T__54: {
        _localctx = _tracker.createInstance<CapsuleParser::DefIsTypeOrAliasContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(303);
        antlrcpp::downCast<DefIsTypeOrAliasContext *>(_localctx)->type_or_alias = typeOrAliasDef();
        break;
      }

      case CapsuleParser::WORD: {
        _localctx = _tracker.createInstance<CapsuleParser::DefIsVarDefContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(304);
        antlrcpp::downCast<DefIsVarDefContext *>(_localctx)->new_var = createVar();
        setState(305);
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
  enterRule(_localctx, 48, CapsuleParser::RuleFile);
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
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 199284283511144448) != 0)) {
      setState(309);
      antlrcpp::downCast<FileContext *>(_localctx)->def = definition();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CapsuleParser::ENDLINE) {
        setState(310);
        match(CapsuleParser::ENDLINE);
        setState(315);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(320);
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
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 5);

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
