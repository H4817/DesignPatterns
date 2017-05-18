#pragma once

#include "AbstractShape.h"

class Rectangle : public AbstractShape {
public:
    Rectangle(std::pair<int, int> p1, std::pair<int, int> p3);

    std::string ToString() override;

    std::string GetClassName() const override;

    void accept(IVisitor & v) override;
private:
    std::pair<int, int> p1;
    std::pair<int, int> p3;
    double width;
    double height;

};


