
// Generated from /Users/andrewyin/src/latex-evaluator/src/lang/Latex.g4 by
// ANTLR 4.12.0

#include "LatexLexer.h"

using namespace antlr4;

using namespace LatexEvaluator;

using namespace antlr4;

namespace {

struct LatexLexerStaticData final {
    LatexLexerStaticData(std::vector<std::string> ruleNames,
                         std::vector<std::string> channelNames,
                         std::vector<std::string> modeNames,
                         std::vector<std::string> literalNames,
                         std::vector<std::string> symbolicNames)
        : ruleNames(std::move(ruleNames)),
          channelNames(std::move(channelNames)),
          modeNames(std::move(modeNames)),
          literalNames(std::move(literalNames)),
          symbolicNames(std::move(symbolicNames)),
          vocabulary(this->literalNames, this->symbolicNames) {}

    LatexLexerStaticData(const LatexLexerStaticData &) = delete;
    LatexLexerStaticData(LatexLexerStaticData &&) = delete;
    LatexLexerStaticData &operator=(const LatexLexerStaticData &) = delete;
    LatexLexerStaticData &operator=(LatexLexerStaticData &&) = delete;

    std::vector<antlr4::dfa::DFA> decisionToDFA;
    antlr4::atn::PredictionContextCache sharedContextCache;
    const std::vector<std::string> ruleNames;
    const std::vector<std::string> channelNames;
    const std::vector<std::string> modeNames;
    const std::vector<std::string> literalNames;
    const std::vector<std::string> symbolicNames;
    const antlr4::dfa::Vocabulary vocabulary;
    antlr4::atn::SerializedATNView serializedATN;
    std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag latexlexerLexerOnceFlag;
LatexLexerStaticData *latexlexerLexerStaticData = nullptr;

void latexlexerLexerInitialize() {
    assert(latexlexerLexerStaticData == nullptr);
    auto staticData = std::make_unique<LatexLexerStaticData>(
        std::vector<std::string>{"LPAREN", "RPAREN", "PLUS", "MINUS", "TIMES",
                                 "DIV", "POW", "Integer", "Digit",
                                 "Whitespace"},
        std::vector<std::string>{"DEFAULT_TOKEN_CHANNEL", "HIDDEN"},
        std::vector<std::string>{"DEFAULT_MODE"},
        std::vector<std::string>{"", "'('", "')'", "'+'", "'-'", "'*'", "'/'",
                                 "'^'"},
        std::vector<std::string>{"", "LPAREN", "RPAREN", "PLUS", "MINUS",
                                 "TIMES", "DIV", "POW", "Integer",
                                 "Whitespace"});
    static const int32_t serializedATNSegment[] = {
        4,  0,  9,  49, 6,  -1, 2,  0,  7,  0,  2,  1,  7, 1,  2,  2,  7,  2,
        2,  3,  7,  3,  2,  4,  7,  4,  2,  5,  7,  5,  2, 6,  7,  6,  2,  7,
        7,  7,  2,  8,  7,  8,  2,  9,  7,  9,  1,  0,  1, 0,  1,  1,  1,  1,
        1,  2,  1,  2,  1,  3,  1,  3,  1,  4,  1,  4,  1, 5,  1,  5,  1,  6,
        1,  6,  1,  7,  4,  7,  37, 8,  7,  11, 7,  12, 7, 38, 1,  8,  1,  8,
        1,  9,  4,  9,  44, 8,  9,  11, 9,  12, 9,  45, 1, 9,  1,  9,  0,  0,
        10, 1,  1,  3,  2,  5,  3,  7,  4,  9,  5,  11, 6, 13, 7,  15, 8,  17,
        0,  19, 9,  1,  0,  2,  1,  0,  48, 57, 3,  0,  9, 10, 13, 13, 32, 32,
        49, 0,  1,  1,  0,  0,  0,  0,  3,  1,  0,  0,  0, 0,  5,  1,  0,  0,
        0,  0,  7,  1,  0,  0,  0,  0,  9,  1,  0,  0,  0, 0,  11, 1,  0,  0,
        0,  0,  13, 1,  0,  0,  0,  0,  15, 1,  0,  0,  0, 0,  19, 1,  0,  0,
        0,  1,  21, 1,  0,  0,  0,  3,  23, 1,  0,  0,  0, 5,  25, 1,  0,  0,
        0,  7,  27, 1,  0,  0,  0,  9,  29, 1,  0,  0,  0, 11, 31, 1,  0,  0,
        0,  13, 33, 1,  0,  0,  0,  15, 36, 1,  0,  0,  0, 17, 40, 1,  0,  0,
        0,  19, 43, 1,  0,  0,  0,  21, 22, 5,  40, 0,  0, 22, 2,  1,  0,  0,
        0,  23, 24, 5,  41, 0,  0,  24, 4,  1,  0,  0,  0, 25, 26, 5,  43, 0,
        0,  26, 6,  1,  0,  0,  0,  27, 28, 5,  45, 0,  0, 28, 8,  1,  0,  0,
        0,  29, 30, 5,  42, 0,  0,  30, 10, 1,  0,  0,  0, 31, 32, 5,  47, 0,
        0,  32, 12, 1,  0,  0,  0,  33, 34, 5,  94, 0,  0, 34, 14, 1,  0,  0,
        0,  35, 37, 3,  17, 8,  0,  36, 35, 1,  0,  0,  0, 37, 38, 1,  0,  0,
        0,  38, 36, 1,  0,  0,  0,  38, 39, 1,  0,  0,  0, 39, 16, 1,  0,  0,
        0,  40, 41, 7,  0,  0,  0,  41, 18, 1,  0,  0,  0, 42, 44, 7,  1,  0,
        0,  43, 42, 1,  0,  0,  0,  44, 45, 1,  0,  0,  0, 45, 43, 1,  0,  0,
        0,  45, 46, 1,  0,  0,  0,  46, 47, 1,  0,  0,  0, 47, 48, 6,  9,  0,
        0,  48, 20, 1,  0,  0,  0,  3,  0,  38, 45, 1,  6, 0,  0};
    staticData->serializedATN = antlr4::atn::SerializedATNView(
        serializedATNSegment,
        sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

    antlr4::atn::ATNDeserializer deserializer;
    staticData->atn = deserializer.deserialize(staticData->serializedATN);

    const size_t count = staticData->atn->getNumberOfDecisions();
    staticData->decisionToDFA.reserve(count);
    for (size_t i = 0; i < count; i++) {
        staticData->decisionToDFA.emplace_back(
            staticData->atn->getDecisionState(i), i);
    }
    latexlexerLexerStaticData = staticData.release();
}

} // namespace

LatexLexer::LatexLexer(CharStream *input) : Lexer(input) {
    LatexLexer::initialize();
    _interpreter = new atn::LexerATNSimulator(
        this, *latexlexerLexerStaticData->atn,
        latexlexerLexerStaticData->decisionToDFA,
        latexlexerLexerStaticData->sharedContextCache);
}

LatexLexer::~LatexLexer() { delete _interpreter; }

std::string LatexLexer::getGrammarFileName() const { return "Latex.g4"; }

const std::vector<std::string> &LatexLexer::getRuleNames() const {
    return latexlexerLexerStaticData->ruleNames;
}

const std::vector<std::string> &LatexLexer::getChannelNames() const {
    return latexlexerLexerStaticData->channelNames;
}

const std::vector<std::string> &LatexLexer::getModeNames() const {
    return latexlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary &LatexLexer::getVocabulary() const {
    return latexlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LatexLexer::getSerializedATN() const {
    return latexlexerLexerStaticData->serializedATN;
}

const atn::ATN &LatexLexer::getATN() const {
    return *latexlexerLexerStaticData->atn;
}

void LatexLexer::initialize() {
    ::antlr4::internal::call_once(latexlexerLexerOnceFlag,
                                  latexlexerLexerInitialize);
}
