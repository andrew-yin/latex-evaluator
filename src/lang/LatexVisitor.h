
// Generated from /Users/andrewyin/src/latex-evaluator/src/lang/Latex.g4 by
// ANTLR 4.12.0

#pragma once

#include "LatexParser.h"
#include "antlr4-runtime.h"

namespace LatexEvaluator {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by LatexParser.
 */
class LatexVisitor : public antlr4::tree::AbstractParseTreeVisitor {
  public:
    /**
     * Visit parse trees produced by LatexParser.
     */
    virtual std::any visitInput(LatexParser::InputContext *context) = 0;

    virtual std::any
    visitExpression(LatexParser::ExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(
        LatexParser::AdditiveExpressionContext *context) = 0;

    virtual std::any
    visitAdditiveOperator(LatexParser::AdditiveOperatorContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(
        LatexParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeOperator(
        LatexParser::MultiplicativeOperatorContext *context) = 0;

    virtual std::any
    visitPowerExpression(LatexParser::PowerExpressionContext *context) = 0;

    virtual std::any
    visitSignedAtom(LatexParser::SignedAtomContext *context) = 0;

    virtual std::any visitAtom(LatexParser::AtomContext *context) = 0;

    virtual std::any visitInteger(LatexParser::IntegerContext *context) = 0;
};

} // namespace LatexEvaluator
