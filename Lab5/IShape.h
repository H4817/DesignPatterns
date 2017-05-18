#pragma once

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "IVisitor.h"

class IShape {
public:
    virtual ~IShape() {}

    virtual float GetPerimeter() = 0;

    virtual float GetArea() = 0;

    virtual std::string ToString() = 0;

    virtual double accept(IVisitor &v) = 0;
};

