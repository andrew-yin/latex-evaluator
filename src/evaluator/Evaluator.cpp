#include "Evaluator.h"
#include "antlr4-runtime.h"
#include "utils.h"

using namespace LatexEvaluator;

std::any Evaluator::visitInput(LatexParser::InputContext *context) {
    return visit(context->expression());
}

std::any Evaluator::visitExpression(LatexParser::ExpressionContext *context) {
    return visit(context->additiveExpression());
}

std::any Evaluator::visitAdditiveExpression(
    LatexParser::AdditiveExpressionContext *context) {
    std::vector<LatexParser::MultiplicativeExpressionContext *> operands =
        context->multiplicativeExpression();
    std::vector<LatexParser::AdditiveOperatorContext *> operators =
        context->additiveOperator();

    int res = std::any_cast<int>(visit(operands[0]));
    for (size_t i = 0; i < operators.size(); i++) {
        int right = std::any_cast<int>(visit(operands[i + 1]));
        if (operators[i]->PLUS()) {
            res += right;
        } else {
            res -= right;
        }
    }
    return res;
}

std::any Evaluator::visitMultiplicativeExpression(
    LatexParser::MultiplicativeExpressionContext *context) {
    std::vector<LatexParser::PowerExpressionContext *> operands =
        context->powerExpression();
    std::vector<LatexParser::MultiplicativeOperatorContext *> operators =
        context->multiplicativeOperator();

    int res = std::any_cast<int>(visit(operands[0]));
    for (size_t i = 0; i < operators.size(); i++) {
        int right = std::any_cast<int>(visit(operands[i + 1]));
        if (operators[i]->TIMES()) {
            res *= right;
        } else {
            res /= right;
        }
    }
    return res;
}

std::any
Evaluator::visitPowerExpression(LatexParser::PowerExpressionContext *context) {
    std::vector<LatexParser::SignedAtomContext *> operands =
        context->signedAtom();

    int res = std::any_cast<int>(visit(operands[0]));
    for (size_t i = 1; i < operands.size(); i++) {
        int right = std::any_cast<int>(visit(operands[i + 1]));
        right = ipow(res, right);
    }
    return res;
}

std::any Evaluator::visitSignedAtom(LatexParser::SignedAtomContext *context) {
    int atom = std::any_cast<int>(visit(context->atom()));
    if (context->MINUS()) {
        return -atom;
    }
    return atom;
}

std::any Evaluator::visitAtom(LatexParser::AtomContext *context) {
    if (context->integer()) {
        return visit(context->integer());
    }
    return visit(context->expression());
}

std::any Evaluator::visitInteger(LatexParser::IntegerContext *context) {
    std::string integer = context->Integer()->getText();
    return std::stoi(integer);
}
