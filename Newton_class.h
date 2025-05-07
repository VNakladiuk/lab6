#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H

#include <functional>

class Newton_class {
public:
    Newton_class(std::function<double(double)> f_, std::function<double(double)> df_);
    void setStart(double x0_);
    void setTolerance(double eps_);
    double solve();

private:
    double x0, eps;
    std::function<double(double)> f;
    std::function<double(double)> df;
};

#endif
