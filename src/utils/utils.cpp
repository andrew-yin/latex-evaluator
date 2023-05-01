#include "utils.h"

int LatexEvaluator::ipow(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) {
            res *= base;
        }
        exp >>= 1;
        base *= base;
    }
    return res;
}
