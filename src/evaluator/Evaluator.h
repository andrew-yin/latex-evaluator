#ifndef LATEXEVALUATOR_EVALUATOR_EVALUATOR_H
#define LATEXEVALUATOR_EVALUATOR_EVALUATOR_H
#pragma once

#include "LatexBaseVisitor.h"
#include "antlr4-runtime.h"

namespace LatexEvaluator {

class Evaluator : public LatexBaseVisitor {
  public:
    std::any visitInput(LatexParser::InputContext *context);
    std::any visitExpression(LatexParser::ExpressionContext *context);
    std::any
    visitAdditiveExpression(LatexParser::AdditiveExpressionContext *context);
    std::any visitMultiplicativeExpression(
        LatexParser::MultiplicativeExpressionContext *context);
    std::any visitPowerExpression(LatexParser::PowerExpressionContext *context);
    std::any visitSignedAtom(LatexParser::SignedAtomContext *context);
    std::any visitAtom(LatexParser::AtomContext *context);
    std::any visitInteger(LatexParser::IntegerContext *context);
};

} // namespace LatexEvaluator
#endif
