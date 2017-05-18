#include "TriangleFactory.h"
#include "Triangle.h"

TriangleFactory &TriangleFactory::getInstance() {
    static TriangleFactory instance;
    return instance;
}

std::shared_ptr<AbstractShape> TriangleFactory::createShape(std::vector<int> parameters) {
    if (parameters.size() != 6)
        std::cerr << "TriangleFactory: cannot create instance properly, amount parameters is wrong" << std::endl;
    return std::make_shared<Triangle>(
            Triangle({parameters[0], parameters[1]}, {parameters[2], parameters[3]}, {parameters[4], parameters[5]}));
}
