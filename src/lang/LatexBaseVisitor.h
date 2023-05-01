
// Generated from /Users/andrewyin/src/latex-evaluator/src/lang/Latex.g4 by
// ANTLR 4.12.0

#pragma once

#include "LatexVisitor.h"
#include "antlr4-runtime.h"

namespace LatexEvaluator {

/**
 * This class provides an empty implementation of LatexVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the
 * available methods.
 */
class LatexBaseVisitor : public LatexVisitor {
  public:
    virtual std::any visitInput(LatexParser::InputContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExpression(LatexParser::ExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitAdditiveExpression(
        LatexParser::AdditiveExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitAdditiveOperator(LatexParser::AdditiveOperatorContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitMultiplicativeExpression(
        LatexParser::MultiplicativeExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitMultiplicativeOperator(
        LatexParser::MultiplicativeOperatorContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitPowerExpression(LatexParser::PowerExpressionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any
    visitSignedAtom(LatexParser::SignedAtomContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitAtom(LatexParser::AtomContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitInteger(LatexParser::IntegerContext *ctx) override {
        return visitChildren(ctx);
    }
};

} // namespace LatexEvaluator
