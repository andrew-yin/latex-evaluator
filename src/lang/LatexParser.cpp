
// Generated from /Users/andrewyin/src/latex-evaluator/src/lang/Latex.g4 by
// ANTLR 4.12.0

#include "LatexVisitor.h"

#include "LatexParser.h"

using namespace antlrcpp;
using namespace LatexEvaluator;

using namespace antlr4;

namespace {

struct LatexParserStaticData final {
    LatexParserStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
        : ruleNames(std::move(ruleNames)),
          literalNames(std::move(literalNames)),
          symbolicNames(std::move(symbolicNames)),
          vocabulary(this->literalNames, this->symbolicNames) {}

    LatexParserStaticData(const LatexParserStaticData &) = delete;
    LatexParserStaticData(LatexParserStaticData &&) = delete;
    LatexParserStaticData &operator=(const LatexParserStaticData &) = delete;
    LatexParserStaticData &operator=(LatexParserStaticData &&) = delete;

    std::vector<antlr4::dfa::DFA> decisionToDFA;
    antlr4::atn::PredictionContextCache sharedContextCache;
    const std::vector<std::string> ruleNames;
    const std::vector<std::string> literalNames;
    const std::vector<std::string> symbolicNames;
    const antlr4::dfa::Vocabulary vocabulary;
    antlr4::atn::SerializedATNView serializedATN;
    std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag latexParserOnceFlag;
LatexParserStaticData *latexParserStaticData = nullptr;

void latexParserInitialize() {
    assert(latexParserStaticData == nullptr);
    auto staticData = std::make_unique<LatexParserStaticData>(
        std::vector<std::string>{"input", "expression", "additiveExpression",
                                 "additiveOperator", "multiplicativeExpression",
                                 "multiplicativeOperator", "powerExpression",
                                 "signedAtom", "atom", "integer"},
        std::vector<std::string>{"", "'('", "')'", "'+'", "'-'", "'*'", "'/'",
                                 "'^'"},
        std::vector<std::string>{"", "LPAREN", "RPAREN", "PLUS", "MINUS",
                                 "TIMES", "DIV", "POW", "Integer",
                                 "Whitespace"});
    static const int32_t serializedATNSegment[] = {
        4,  1,  9,  72, 2,  0,  7,  0,  2,  1,  7,  1, 2,  2,  7,  2,  2,  3,
        7,  3,  2,  4,  7,  4,  2,  5,  7,  5,  2,  6, 7,  6,  2,  7,  7,  7,
        2,  8,  7,  8,  2,  9,  7,  9,  1,  0,  1,  0, 1,  0,  1,  1,  1,  1,
        1,  2,  1,  2,  1,  2,  1,  2,  5,  2,  30, 8, 2,  10, 2,  12, 2,  33,
        9,  2,  1,  3,  1,  3,  1,  4,  1,  4,  1,  4, 1,  4,  5,  4,  41, 8,
        4,  10, 4,  12, 4,  44, 9,  4,  1,  5,  1,  5, 1,  6,  1,  6,  1,  6,
        5,  6,  51, 8,  6,  10, 6,  12, 6,  54, 9,  6, 1,  7,  1,  7,  1,  7,
        1,  7,  1,  7,  3,  7,  61, 8,  7,  1,  8,  1, 8,  1,  8,  1,  8,  1,
        8,  3,  8,  68, 8,  8,  1,  9,  1,  9,  1,  9, 0,  0,  10, 0,  2,  4,
        6,  8,  10, 12, 14, 16, 18, 0,  2,  1,  0,  3, 4,  1,  0,  5,  6,  67,
        0,  20, 1,  0,  0,  0,  2,  23, 1,  0,  0,  0, 4,  25, 1,  0,  0,  0,
        6,  34, 1,  0,  0,  0,  8,  36, 1,  0,  0,  0, 10, 45, 1,  0,  0,  0,
        12, 47, 1,  0,  0,  0,  14, 60, 1,  0,  0,  0, 16, 67, 1,  0,  0,  0,
        18, 69, 1,  0,  0,  0,  20, 21, 3,  2,  1,  0, 21, 22, 5,  0,  0,  1,
        22, 1,  1,  0,  0,  0,  23, 24, 3,  4,  2,  0, 24, 3,  1,  0,  0,  0,
        25, 31, 3,  8,  4,  0,  26, 27, 3,  6,  3,  0, 27, 28, 3,  8,  4,  0,
        28, 30, 1,  0,  0,  0,  29, 26, 1,  0,  0,  0, 30, 33, 1,  0,  0,  0,
        31, 29, 1,  0,  0,  0,  31, 32, 1,  0,  0,  0, 32, 5,  1,  0,  0,  0,
        33, 31, 1,  0,  0,  0,  34, 35, 7,  0,  0,  0, 35, 7,  1,  0,  0,  0,
        36, 42, 3,  12, 6,  0,  37, 38, 3,  10, 5,  0, 38, 39, 3,  12, 6,  0,
        39, 41, 1,  0,  0,  0,  40, 37, 1,  0,  0,  0, 41, 44, 1,  0,  0,  0,
        42, 40, 1,  0,  0,  0,  42, 43, 1,  0,  0,  0, 43, 9,  1,  0,  0,  0,
        44, 42, 1,  0,  0,  0,  45, 46, 7,  1,  0,  0, 46, 11, 1,  0,  0,  0,
        47, 52, 3,  14, 7,  0,  48, 49, 5,  7,  0,  0, 49, 51, 3,  14, 7,  0,
        50, 48, 1,  0,  0,  0,  51, 54, 1,  0,  0,  0, 52, 50, 1,  0,  0,  0,
        52, 53, 1,  0,  0,  0,  53, 13, 1,  0,  0,  0, 54, 52, 1,  0,  0,  0,
        55, 56, 5,  3,  0,  0,  56, 61, 3,  16, 8,  0, 57, 58, 5,  4,  0,  0,
        58, 61, 3,  16, 8,  0,  59, 61, 3,  16, 8,  0, 60, 55, 1,  0,  0,  0,
        60, 57, 1,  0,  0,  0,  60, 59, 1,  0,  0,  0, 61, 15, 1,  0,  0,  0,
        62, 68, 3,  18, 9,  0,  63, 64, 5,  1,  0,  0, 64, 65, 3,  2,  1,  0,
        65, 66, 5,  2,  0,  0,  66, 68, 1,  0,  0,  0, 67, 62, 1,  0,  0,  0,
        67, 63, 1,  0,  0,  0,  68, 17, 1,  0,  0,  0, 69, 70, 5,  8,  0,  0,
        70, 19, 1,  0,  0,  0,  5,  31, 42, 52, 60, 67};
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
    latexParserStaticData = staticData.release();
}

} // namespace

LatexParser::LatexParser(TokenStream *input)
    : LatexParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LatexParser::LatexParser(TokenStream *input,
                         const antlr4::atn::ParserATNSimulatorOptions &options)
    : Parser(input) {
    LatexParser::initialize();
    _interpreter = new atn::ParserATNSimulator(
        this, *latexParserStaticData->atn, latexParserStaticData->decisionToDFA,
        latexParserStaticData->sharedContextCache, options);
}

LatexParser::~LatexParser() { delete _interpreter; }

const atn::ATN &LatexParser::getATN() const {
    return *latexParserStaticData->atn;
}

std::string LatexParser::getGrammarFileName() const { return "Latex.g4"; }

const std::vector<std::string> &LatexParser::getRuleNames() const {
    return latexParserStaticData->ruleNames;
}

const dfa::Vocabulary &LatexParser::getVocabulary() const {
    return latexParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LatexParser::getSerializedATN() const {
    return latexParserStaticData->serializedATN;
}

//----------------- InputContext
//------------------------------------------------------------------

LatexParser::InputContext::InputContext(ParserRuleContext *parent,
                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

LatexParser::ExpressionContext *LatexParser::InputContext::expression() {
    return getRuleContext<LatexParser::ExpressionContext>(0);
}

tree::TerminalNode *LatexParser::InputContext::EOF() {
    return getToken(LatexParser::EOF, 0);
}

size_t LatexParser::InputContext::getRuleIndex() const {
    return LatexParser::RuleInput;
}

std::any LatexParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitInput(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::InputContext *LatexParser::input() {
    InputContext *_localctx =
        _tracker.createInstance<InputContext>(_ctx, getState());
    enterRule(_localctx, 0, LatexParser::RuleInput);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(20);
        expression();
        setState(21);
        match(LatexParser::EOF);

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionContext
//------------------------------------------------------------------

LatexParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent,
                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

LatexParser::AdditiveExpressionContext *
LatexParser::ExpressionContext::additiveExpression() {
    return getRuleContext<LatexParser::AdditiveExpressionContext>(0);
}

size_t LatexParser::ExpressionContext::getRuleIndex() const {
    return LatexParser::RuleExpression;
}

std::any
LatexParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitExpression(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::ExpressionContext *LatexParser::expression() {
    ExpressionContext *_localctx =
        _tracker.createInstance<ExpressionContext>(_ctx, getState());
    enterRule(_localctx, 2, LatexParser::RuleExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(23);
        additiveExpression();

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AdditiveExpressionContext
//------------------------------------------------------------------

LatexParser::AdditiveExpressionContext::AdditiveExpressionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

std::vector<LatexParser::MultiplicativeExpressionContext *>
LatexParser::AdditiveExpressionContext::multiplicativeExpression() {
    return getRuleContexts<LatexParser::MultiplicativeExpressionContext>();
}

LatexParser::MultiplicativeExpressionContext *
LatexParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
    return getRuleContext<LatexParser::MultiplicativeExpressionContext>(i);
}

std::vector<LatexParser::AdditiveOperatorContext *>
LatexParser::AdditiveExpressionContext::additiveOperator() {
    return getRuleContexts<LatexParser::AdditiveOperatorContext>();
}

LatexParser::AdditiveOperatorContext *
LatexParser::AdditiveExpressionContext::additiveOperator(size_t i) {
    return getRuleContext<LatexParser::AdditiveOperatorContext>(i);
}

size_t LatexParser::AdditiveExpressionContext::getRuleIndex() const {
    return LatexParser::RuleAdditiveExpression;
}

std::any LatexParser::AdditiveExpressionContext::accept(
    tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitAdditiveExpression(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::AdditiveExpressionContext *LatexParser::additiveExpression() {
    AdditiveExpressionContext *_localctx =
        _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
    enterRule(_localctx, 4, LatexParser::RuleAdditiveExpression);
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
        setState(25);
        multiplicativeExpression();
        setState(31);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LatexParser::PLUS

               || _la == LatexParser::MINUS) {
            setState(26);
            additiveOperator();
            setState(27);
            multiplicativeExpression();
            setState(33);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AdditiveOperatorContext
//------------------------------------------------------------------

LatexParser::AdditiveOperatorContext::AdditiveOperatorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *LatexParser::AdditiveOperatorContext::PLUS() {
    return getToken(LatexParser::PLUS, 0);
}

tree::TerminalNode *LatexParser::AdditiveOperatorContext::MINUS() {
    return getToken(LatexParser::MINUS, 0);
}

size_t LatexParser::AdditiveOperatorContext::getRuleIndex() const {
    return LatexParser::RuleAdditiveOperator;
}

std::any
LatexParser::AdditiveOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitAdditiveOperator(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::AdditiveOperatorContext *LatexParser::additiveOperator() {
    AdditiveOperatorContext *_localctx =
        _tracker.createInstance<AdditiveOperatorContext>(_ctx, getState());
    enterRule(_localctx, 6, LatexParser::RuleAdditiveOperator);
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
        setState(34);
        _la = _input->LA(1);
        if (!(_la == LatexParser::PLUS

              || _la == LatexParser::MINUS)) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MultiplicativeExpressionContext
//------------------------------------------------------------------

LatexParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

std::vector<LatexParser::PowerExpressionContext *>
LatexParser::MultiplicativeExpressionContext::powerExpression() {
    return getRuleContexts<LatexParser::PowerExpressionContext>();
}

LatexParser::PowerExpressionContext *
LatexParser::MultiplicativeExpressionContext::powerExpression(size_t i) {
    return getRuleContext<LatexParser::PowerExpressionContext>(i);
}

std::vector<LatexParser::MultiplicativeOperatorContext *>
LatexParser::MultiplicativeExpressionContext::multiplicativeOperator() {
    return getRuleContexts<LatexParser::MultiplicativeOperatorContext>();
}

LatexParser::MultiplicativeOperatorContext *
LatexParser::MultiplicativeExpressionContext::multiplicativeOperator(size_t i) {
    return getRuleContext<LatexParser::MultiplicativeOperatorContext>(i);
}

size_t LatexParser::MultiplicativeExpressionContext::getRuleIndex() const {
    return LatexParser::RuleMultiplicativeExpression;
}

std::any LatexParser::MultiplicativeExpressionContext::accept(
    tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitMultiplicativeExpression(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::MultiplicativeExpressionContext *
LatexParser::multiplicativeExpression() {
    MultiplicativeExpressionContext *_localctx =
        _tracker.createInstance<MultiplicativeExpressionContext>(_ctx,
                                                                 getState());
    enterRule(_localctx, 8, LatexParser::RuleMultiplicativeExpression);
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
        setState(36);
        powerExpression();
        setState(42);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LatexParser::TIMES

               || _la == LatexParser::DIV) {
            setState(37);
            multiplicativeOperator();
            setState(38);
            powerExpression();
            setState(44);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MultiplicativeOperatorContext
//------------------------------------------------------------------

LatexParser::MultiplicativeOperatorContext::MultiplicativeOperatorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *LatexParser::MultiplicativeOperatorContext::TIMES() {
    return getToken(LatexParser::TIMES, 0);
}

tree::TerminalNode *LatexParser::MultiplicativeOperatorContext::DIV() {
    return getToken(LatexParser::DIV, 0);
}

size_t LatexParser::MultiplicativeOperatorContext::getRuleIndex() const {
    return LatexParser::RuleMultiplicativeOperator;
}

std::any LatexParser::MultiplicativeOperatorContext::accept(
    tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitMultiplicativeOperator(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::MultiplicativeOperatorContext *
LatexParser::multiplicativeOperator() {
    MultiplicativeOperatorContext *_localctx =
        _tracker.createInstance<MultiplicativeOperatorContext>(_ctx,
                                                               getState());
    enterRule(_localctx, 10, LatexParser::RuleMultiplicativeOperator);
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
        setState(45);
        _la = _input->LA(1);
        if (!(_la == LatexParser::TIMES

              || _la == LatexParser::DIV)) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PowerExpressionContext
//------------------------------------------------------------------

LatexParser::PowerExpressionContext::PowerExpressionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

std::vector<LatexParser::SignedAtomContext *>
LatexParser::PowerExpressionContext::signedAtom() {
    return getRuleContexts<LatexParser::SignedAtomContext>();
}

LatexParser::SignedAtomContext *
LatexParser::PowerExpressionContext::signedAtom(size_t i) {
    return getRuleContext<LatexParser::SignedAtomContext>(i);
}

std::vector<tree::TerminalNode *> LatexParser::PowerExpressionContext::POW() {
    return getTokens(LatexParser::POW);
}

tree::TerminalNode *LatexParser::PowerExpressionContext::POW(size_t i) {
    return getToken(LatexParser::POW, i);
}

size_t LatexParser::PowerExpressionContext::getRuleIndex() const {
    return LatexParser::RulePowerExpression;
}

std::any
LatexParser::PowerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitPowerExpression(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::PowerExpressionContext *LatexParser::powerExpression() {
    PowerExpressionContext *_localctx =
        _tracker.createInstance<PowerExpressionContext>(_ctx, getState());
    enterRule(_localctx, 12, LatexParser::RulePowerExpression);
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
        setState(47);
        signedAtom();
        setState(52);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LatexParser::POW) {
            setState(48);
            match(LatexParser::POW);
            setState(49);
            signedAtom();
            setState(54);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SignedAtomContext
//------------------------------------------------------------------

LatexParser::SignedAtomContext::SignedAtomContext(ParserRuleContext *parent,
                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *LatexParser::SignedAtomContext::PLUS() {
    return getToken(LatexParser::PLUS, 0);
}

LatexParser::AtomContext *LatexParser::SignedAtomContext::atom() {
    return getRuleContext<LatexParser::AtomContext>(0);
}

tree::TerminalNode *LatexParser::SignedAtomContext::MINUS() {
    return getToken(LatexParser::MINUS, 0);
}

size_t LatexParser::SignedAtomContext::getRuleIndex() const {
    return LatexParser::RuleSignedAtom;
}

std::any
LatexParser::SignedAtomContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitSignedAtom(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::SignedAtomContext *LatexParser::signedAtom() {
    SignedAtomContext *_localctx =
        _tracker.createInstance<SignedAtomContext>(_ctx, getState());
    enterRule(_localctx, 14, LatexParser::RuleSignedAtom);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(60);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case LatexParser::PLUS: {
            enterOuterAlt(_localctx, 1);
            setState(55);
            match(LatexParser::PLUS);
            setState(56);
            atom();
            break;
        }

        case LatexParser::MINUS: {
            enterOuterAlt(_localctx, 2);
            setState(57);
            match(LatexParser::MINUS);
            setState(58);
            atom();
            break;
        }

        case LatexParser::LPAREN:
        case LatexParser::Integer: {
            enterOuterAlt(_localctx, 3);
            setState(59);
            atom();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AtomContext
//------------------------------------------------------------------

LatexParser::AtomContext::AtomContext(ParserRuleContext *parent,
                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

LatexParser::IntegerContext *LatexParser::AtomContext::integer() {
    return getRuleContext<LatexParser::IntegerContext>(0);
}

tree::TerminalNode *LatexParser::AtomContext::LPAREN() {
    return getToken(LatexParser::LPAREN, 0);
}

LatexParser::ExpressionContext *LatexParser::AtomContext::expression() {
    return getRuleContext<LatexParser::ExpressionContext>(0);
}

tree::TerminalNode *LatexParser::AtomContext::RPAREN() {
    return getToken(LatexParser::RPAREN, 0);
}

size_t LatexParser::AtomContext::getRuleIndex() const {
    return LatexParser::RuleAtom;
}

std::any LatexParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitAtom(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::AtomContext *LatexParser::atom() {
    AtomContext *_localctx =
        _tracker.createInstance<AtomContext>(_ctx, getState());
    enterRule(_localctx, 16, LatexParser::RuleAtom);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(67);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case LatexParser::Integer: {
            enterOuterAlt(_localctx, 1);
            setState(62);
            integer();
            break;
        }

        case LatexParser::LPAREN: {
            enterOuterAlt(_localctx, 2);
            setState(63);
            match(LatexParser::LPAREN);
            setState(64);
            expression();
            setState(65);
            match(LatexParser::RPAREN);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- IntegerContext
//------------------------------------------------------------------

LatexParser::IntegerContext::IntegerContext(ParserRuleContext *parent,
                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *LatexParser::IntegerContext::Integer() {
    return getToken(LatexParser::Integer, 0);
}

size_t LatexParser::IntegerContext::getRuleIndex() const {
    return LatexParser::RuleInteger;
}

std::any LatexParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
    if (auto parserVisitor = dynamic_cast<LatexVisitor *>(visitor))
        return parserVisitor->visitInteger(this);
    else
        return visitor->visitChildren(this);
}

LatexParser::IntegerContext *LatexParser::integer() {
    IntegerContext *_localctx =
        _tracker.createInstance<IntegerContext>(_ctx, getState());
    enterRule(_localctx, 18, LatexParser::RuleInteger);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(69);
        match(LatexParser::Integer);

    } catch (RecognitionException &e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

void LatexParser::initialize() {
    ::antlr4::internal::call_once(latexParserOnceFlag, latexParserInitialize);
}
