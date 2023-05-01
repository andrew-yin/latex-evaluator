#ifndef LATEXEVALUATOR_RUNNER_RUNNER_H
#define LATEXEVALUATOR_RUNNER_RUNNER_H

#include "Evaluator.h"

namespace LatexEvaluator {

class Runner {
  public:
    void run();

  private:
    std::string runCommand(std::string in);
    LatexEvaluator::Evaluator evaluator;
};

} // namespace LatexEvaluator

#endif
