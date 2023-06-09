
// Generated from /Users/andrewyin/src/latex-evaluator/src/lang/Latex.g4 by
// ANTLR 4.12.0

#pragma once

#include "antlr4-runtime.h"

namespace LatexEvaluator {

class LatexLexer : public antlr4::Lexer {
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

    explicit LatexLexer(antlr4::CharStream *input);

    ~LatexLexer() override;

    std::string getGrammarFileName() const override;

    const std::vector<std::string> &getRuleNames() const override;

    const std::vector<std::string> &getChannelNames() const override;

    const std::vector<std::string> &getModeNames() const override;

    const antlr4::dfa::Vocabulary &getVocabulary() const override;

    antlr4::atn::SerializedATNView getSerializedATN() const override;

    const antlr4::atn::ATN &getATN() const override;

    // By default the static state used to implement the lexer is lazily
    // initialized during the first call to the constructor. You can call this
    // function if you wish to initialize the static state ahead of time.
    static void initialize();

  private:
    // Individual action functions triggered by action() above.

    // Individual semantic predicate functions triggered by sempred() above.
};

} // namespace LatexEvaluator
