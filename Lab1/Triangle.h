#pragma once

#include "AbstractShape.h"

class Triangle : public AbstractShape {
public:
    Triangle(std::pair<int, int> p1, std::pair<int, int> p2, std::pair<int, int> p3);

    std::string ToString() override;

private:
    std::pair<int, int> p1;
    std::pair<int, int> p2;
    std::pair<int, int> p3;
    std::tuple<double, double, double> lengthsOfSides;
};


