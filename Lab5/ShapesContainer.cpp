#include "ShapesContainer.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

std::vector<std::shared_ptr<AbstractShape>> ShapesContainer::GetShapes() {
    return shapes;
}

void ShapesContainer::AddShape(const AbstractShape &shape) {
    if (shape.GetClassName() == "Circle")
        this->shapes.push_back(std::make_shared<Circle>(shape));
    else if (shape.GetClassName() == "Triangle")
        this->shapes.push_back(std::make_shared<Triangle>(shape));
    else if (shape.GetClassName() == "Rectangle")
        this->shapes.push_back(std::make_shared<Rectangle>(shape));
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

