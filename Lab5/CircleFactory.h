#pragma once

#include "IFactory.h"

class CircleFactory : public IFactory {
private:
    CircleFactory() {}

    CircleFactory(const CircleFactory &);

    CircleFactory &operator=(CircleFactory &);

public:
    static CircleFactory & getInstance();

    std::shared_ptr<AbstractShape> createShape(std::vector <int> parameters) override ;

};


