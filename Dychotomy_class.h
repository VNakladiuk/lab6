#ifndef DYCHOTOMY_CLASS_H
#define DYCHOTOMY_CLASS_H

#include <functional>

class Dychotomy_class {
public:
    Dychotomy_class(std::function<double(double)> f_);
    void setInterval(double a_, double b_);
    void setTolerance(double eps_);
    double solve();

private:
    double a, b, eps;
    std::function<double(double)> f;
};

#endif
