#include "ShapesContainer.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

std::vector<std::shared_ptr<AbstractShape>> ShapesContainer::GetShapes() {
    return shapes;
}

void ShapesContainer::AddShape(std::shared_ptr<AbstractShape> shape) {
        this->shapes.push_back(shape);
}

void ShapesContainer::RemoveLastOne() {
    this->shapes.pop_back();
}

void ShapesContainer::RemoveShape(const int position) {
    if (position == (this->shapes.size() - 1)) {
        RemoveLastOne();
    } else if (position < (this->shapes.size() - 1)) {
        this->shapes.erase(this->shapes.begin() + position);
    } else {
        std::cerr << "RemoveShape: out of range" << std::endl;
    }
}

void ShapesContainer::SetShapes(const std::vector<std::shared_ptr<AbstractShape>> &shapes) {
    this->shapes = shapes;
}

