#pragma once

#include "AbstractShape.h"

class IFactory {
public:
    virtual ~IFactory() {}

    virtual std::shared_ptr<AbstractShape> createShape(std::vector<int> parameters) = 0;
};
