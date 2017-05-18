#include "Circle.h"

Circle::Circle(std::pair<int, int> center, int radius) {
    this->center = center;
    this->radius = radius;
    this->area = M_PI * pow(this->radius, 2);
    this->perimeter = 2 * M_PI * this->radius;
}

std::string Circle::ToString() {
    return "CIRCLE: P=" + std::to_string(GetPerimeter()) + "; S=" + std::to_string(GetArea()) + "\n";
}

std::string Circle::GetClassName() const {
    return "Circle";
}

void Circle::accept(IVisitor &v) {
    v.visit(*this);
}
