#include <iostream>
#include "Dychotomy_class.h"
#include "Newton_class.h"

int main() {
    auto f = [](double x) { return 0.1 * x * x - 5 * log(x) - 1; };
    auto df = [](double x) { return 0.2 * x - 5 / x; };

    Dychotomy_class dyh(f);
    dyh.setInterval(0.5, 1);
    dyh.setTolerance(0.0001);
    std::cout << "Root (Dichotomy): " << dyh.solve() << std::endl;

    Newton_class newton(f, df);
    newton.setStart(0.7);
    newton.setTolerance(0.0001);
    std::cout << "Root (Newton): " << newton.solve() << std::endl;

    return 0;
}
