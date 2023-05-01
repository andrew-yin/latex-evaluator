
// Generated from /Users/andrewyin/src/latex-evaluator/src/lang/Latex.g4 by
// ANTLR 4.12.0

#pragma once

#include "antlr4-runtime.h"

namespace LatexEvaluator {

class LatexParser : public antlr4::Parser {
  public:
    enum {
        LPAREN = 1,
        RPAREN = 2,
        PLUS = 3,
        MINUS = 4,
        TIMES = 5,
        DIV = 6,
        POW = 7,
        Integer = 8,
        Whitespace = 9
    };

    enum {
        RuleInput = 0,
        RuleExpression = 1,
        RuleAdditiveExpression = 2,
        RuleAdditiveOperator = 3,
        RuleMultiplicativeExpression = 4,
        RuleMultiplicativeOperator = 5,
        RulePowerExpression = 6,
        RuleSignedAtom = 7,
        RuleAtom = 8,
        RuleInteger = 9
    };

    explicit LatexParser(antlr4::TokenStream *input);

    LatexParser(antlr4::TokenStream *input,
                const antlr4::atn::ParserATNSimulatorOptions &options);

    ~LatexParser() override;

    std::string getGrammarFileName() const override;

    const antlr4::atn::ATN &getATN() const override;

    const std::vector<std::string> &getRuleNames() const override;

    const antlr4::dfa::Vocabulary &getVocabulary() const override;

    antlr4::atn::SerializedATNView getSerializedATN() const override;

    class InputContext;
    class ExpressionContext;
    class AdditiveExpressionContext;
    class AdditiveOperatorContext;
    class MultiplicativeExpressionContext;
    class MultiplicativeOperatorContext;
    class PowerExpressionContext;
    class SignedAtomContext;
    class AtomContext;
    class IntegerContext;

    class InputContext : public antlr4::ParserRuleContext {
      public:
        InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        ExpressionContext *expression();
        antlr4::tree::TerminalNode *EOF();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    InputContext *input();

    class ExpressionContext : public antlr4::ParserRuleContext {
      public:
        ExpressionContext(antlr4::ParserRuleContext *parent,
                          size_t invokingState);
        virtual size_t getRuleIndex() const override;
        AdditiveExpressionContext *additiveExpression();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExpressionContext *expression();

    class AdditiveExpressionContext : public antlr4::ParserRuleContext {
      public:
        AdditiveExpressionContext(antlr4::ParserRuleContext *parent,
                                  size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<MultiplicativeExpressionContext *>
        multiplicativeExpression();
        MultiplicativeExpressionContext *multiplicativeExpression(size_t i);
        std::vector<AdditiveOperatorContext *> additiveOperator();
        AdditiveOperatorContext *additiveOperator(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    AdditiveExpressionContext *additiveExpression();

    class AdditiveOperatorContext : public antlr4::ParserRuleContext {
      public:
        AdditiveOperatorContext(antlr4::ParserRuleContext *parent,
                                size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *PLUS();
        antlr4::tree::TerminalNode *MINUS();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    AdditiveOperatorContext *additiveOperator();

    class MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
      public:
        MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent,
                                        size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<PowerExpressionContext *> powerExpression();
        PowerExpressionContext *powerExpression(size_t i);
        std::vector<MultiplicativeOperatorContext *> multiplicativeOperator();
        MultiplicativeOperatorContext *multiplicativeOperator(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    MultiplicativeExpressionContext *multiplicativeExpression();

    class MultiplicativeOperatorContext : public antlr4::ParserRuleContext {
      public:
        MultiplicativeOperatorContext(antlr4::ParserRuleContext *parent,
                                      size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *TIMES();
        antlr4::tree::TerminalNode *DIV();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    MultiplicativeOperatorContext *multiplicativeOperator();

    class PowerExpressionContext : public antlr4::ParserRuleContext {
      public:
        PowerExpressionContext(antlr4::ParserRuleContext *parent,
                               size_t invokingState);
        virtual size_t getRuleIndex() const override;
        std::vector<SignedAtomContext *> signedAtom();
        SignedAtomContext *signedAtom(size_t i);
        std::vector<antlr4::tree::TerminalNode *> POW();
        antlr4::tree::TerminalNode *POW(size_t i);

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    PowerExpressionContext *powerExpression();

    class SignedAtomContext : public antlr4::ParserRuleContext {
      public:
        SignedAtomContext(antlr4::ParserRuleContext *parent,
                          size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *PLUS();
        AtomContext *atom();
        antlr4::tree::TerminalNode *MINUS();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    SignedAtomContext *signedAtom();

    class AtomContext : public antlr4::ParserRuleContext {
      public:
        AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        IntegerContext *integer();
        antlr4::tree::TerminalNode *LPAREN();
        ExpressionContext *expression();
        antlr4::tree::TerminalNode *RPAREN();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    AtomContext *atom();

    class IntegerContext : public antlr4::ParserRuleContext {
      public:
        IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        virtual size_t getRuleIndex() const override;
        antlr4::tree::TerminalNode *Integer();

        virtual std::any
        accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    IntegerContext *integer();

    // By default the static state used to implement the parser is lazily
    // initialized during the first call to the constructor. You can call this
    // function if you wish to initialize the static state ahead of time.
    static void initialize();

  private:
};

} // namespace LatexEvaluator
