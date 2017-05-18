
#pragma once

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

class IVisitor {
public:
    virtual double visit(Circle &circle) = 0;
    virtual double visit(Rectangle &rectangle) = 0;
    virtual double visit(Triangle &triangle) = 0;
    virtual ~IVisitor() = default;
};
