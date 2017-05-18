#include "AbstractShape.h"

float AbstractShape::GetPerimeter() {
    return perimeter;
}

float AbstractShape::GetArea() {
    return area;
}

std::string AbstractShape::ToString() {
    return "";
}

std::string AbstractShape::GetClassName() const {
    return "AbstractShape";
}

double AbstractShape::accept(IVisitor &v) {
    return 0;
}
