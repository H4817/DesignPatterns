#pragma once

#include "AbstractShape.h"

class Rectangle : public AbstractShape {
public:
    Rectangle(std::pair<int, int> p1, std::pair<int, int> p2);

    std::string ToString() override;

private:
    std::pair<int, int> p1;
    std::pair<int, int> p3;
    double width;
    double height;

};


