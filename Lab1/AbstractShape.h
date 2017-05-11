#pragma once

#include "IShape.h"

class AbstractShape : public IShape {
public:
    AbstractShape() = default;

    virtual ~AbstractShape() {}

    float GetPerimeter() override;

    float GetArea() override;

    std::string ToString() override;

protected:
    float perimeter;
    float area;
};

