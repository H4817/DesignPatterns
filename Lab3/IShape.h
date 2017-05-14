#pragma once

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>

class IShape {
public:
    virtual ~IShape() {}

    virtual float GetPerimeter() = 0;

    virtual float GetArea() = 0;

    virtual std::string ToString() = 0;
};

