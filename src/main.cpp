#include <iostream>

#include "Runner.h"
#include "antlr4-runtime.h"

using namespace antlr4;

int main(int, const char **) {

    LatexEvaluator::Runner runner;
    runner.run();

    return 0;
}
