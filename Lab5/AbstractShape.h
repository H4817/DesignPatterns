#pragma once

#include "IShape.h"

class AbstractShape : public IShape {
public:
    AbstractShape() = default;

    virtual ~AbstractShape() {}

    float GetPerimeter() override;

    float GetArea() override;

    std::string ToString() override;

    virtual std::string GetClassName() const;

    double accept(IVisitor &v) override;

protected:
    float perimeter;
    float area;
};

