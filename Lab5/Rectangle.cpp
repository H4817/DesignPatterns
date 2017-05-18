#include "Rectangle.h"

Rectangle::Rectangle(std::pair<int, int> p1, std::pair<int, int> p3) {
    this->p1 = p1;
    this->p3 = p3;
    this->width = sqrt(pow((p1.first - p1.first), 2) + pow((p3.second - p1.second), 2));
    this->height = sqrt(pow((p1.second - p1.first), 2) + pow((p3.first - p1.second), 2));
    this->area = width * height;
    this->perimeter = (width + height) * 2;
}

std::string Rectangle::ToString() {
    return "RECTANGLE: P=" + std::to_string(GetPerimeter()) + "; S=" + std::to_string(GetArea()) + "\n";
}

std::string Rectangle::GetClassName() const {
    return "Rectangle";
}

void Rectangle::accept(IVisitor &v) {
    v.visit(*this);
}

