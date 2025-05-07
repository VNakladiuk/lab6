#include "Dychotomy_class.h"
#include <iostream>

Dychotomy_class::Dychotomy_class(std::function<double(double)> f_) {
    f = f_;
}

void Dychotomy_class::setInterval(double a_, double b_) {
    a = a_;
    b = b_;
}

void Dychotomy_class::setTolerance(double eps_) {
    eps = eps_;
}

double Dychotomy_class::solve() {
    double mid;
    int n = 0;
    while ((b - a) > eps) {
        n++;
        mid = (a + b) / 2;
        if (f(a) * f(mid) < 0)
            b = mid;
        else
            a = mid;
    }
    std::cout << " | Iterations: " << n << "\n";
    return (a + b) / 2;
}
