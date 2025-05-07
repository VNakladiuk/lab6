#include "Newton_class.h"
#include <cmath>
#include <iostream>

Newton_class::Newton_class(std::function<double(double)> f_, std::function<double(double)> df_) {
    f = f_;
    df = df_;
}

void Newton_class::setStart(double x0_) {
    x0 = x0_;
}

void Newton_class::setTolerance(double eps_) {
    eps = eps_;
}

double Newton_class::solve() {
    double x = x0;
    int n = 0;
    while (fabs(f(x)) > eps) {
        if (fabs(df(x)) < 1e-10) {
            std::cerr << "Derivative too small. Aborting.\n";
            break;
        }
        x = x - f(x) / df(x);
        n++;
    }
    std::cout << " | Iterations: " << n << "\n";
    return x;
}
