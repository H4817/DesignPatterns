
#pragma once

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

class IVisitor {
public:
    virtual void visit(Circle & circle) = 0;
    virtual void visit(Rectangle & rectangle) = 0;
    virtual void visit(Triangle & triangle) = 0;
    virtual ~IVisitor() = default;
};
