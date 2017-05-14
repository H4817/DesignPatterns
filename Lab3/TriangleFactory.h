#pragma once

#include "IFactory.h"

class TriangleFactory : public IFactory{
private:
    TriangleFactory() {}

    TriangleFactory(const TriangleFactory &);

    TriangleFactory &operator=(TriangleFactory &);

public:
    static TriangleFactory & getInstance();

    std::shared_ptr<AbstractShape> createShape(std::vector <int> parameters) override ;

};


