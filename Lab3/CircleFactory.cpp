#include "CircleFactory.h"
#include "Circle.h"

CircleFactory &CircleFactory::getInstance() {
    static CircleFactory instance;
    return instance;
}

std::shared_ptr<AbstractShape> CircleFactory::createShape(std::vector<int> parameters) {
    if (parameters.size() != 3)
        std::cerr << "CircleFactory: cannot create instance properly, amount parameters is wrong" << std::endl;
    return std::make_shared<Circle>(Circle({parameters[0], parameters[1]}, parameters[2]));
}
