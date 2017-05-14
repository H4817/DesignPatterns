#pragma once

#include "IFactory.h"

class RectangleFactory : public IFactory {
private:
    RectangleFactory() {}

    RectangleFactory(const RectangleFactory &);

    RectangleFactory &operator=(RectangleFactory &);

public:
    static RectangleFactory & getInstance();

    std::shared_ptr<AbstractShape> createShape(std::vector <int> parameters) override ;

};


