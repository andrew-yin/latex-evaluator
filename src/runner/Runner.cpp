#include "Runner.h"
#include "Evaluator.h"
#include "LatexLexer.h"
#include "LatexParser.h"
#include "antlr4-runtime.h"

using namespace LatexEvaluator;
using namespace antlr4;

void Runner::run() {
    std::cout << "Enter input:" << std::endl;
    std::string in;
    getline(std::cin, in);

    std::cout << "Result:" << std::endl;
    std::cout << runCommand(in) << std::endl;
}

std::string Runner::runCommand(std::string in) {
    ANTLRInputStream input(in);

    LatexEvaluator::LatexLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    LatexEvaluator::LatexParser parser(&tokens);
    tree::ParseTree *tree = parser.input();

    LatexEvaluator::Evaluator evaluator;
    int result = std::any_cast<int>(evaluator.visit(tree));

    return std::to_string(result);
}
