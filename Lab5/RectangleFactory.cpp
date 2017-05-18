#include "RectangleFactory.h"
#include "Rectangle.h"

RectangleFactory &RectangleFactory::getInstance() {
    static RectangleFactory instance;
    return instance;
}

std::shared_ptr<AbstractShape> RectangleFactory::createShape(std::vector<int> parameters) {
    if (parameters.size() != 4)
        std::cerr << "RectangleFactory: cannot create instance properly, amount parameters is wrong" << std::endl;
    return std::make_shared<Rectangle>(Rectangle({parameters[0], parameters[1]}, {parameters[2], parameters[3]}));
}
