#include "ShapesContainer.h"

std::vector<std::shared_ptr<AbstractShape>> ShapesContainer::GetShapes() {
    return shapes;
}

void ShapesContainer::AddShape(const AbstractShape &shape) {
    this->shapes.push_back(std::make_shared<AbstractShape>(shape));
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
        std::cout << "err: out of range" << std::endl;
    }
}

void ShapesContainer::SetShapes(const std::vector<std::shared_ptr<AbstractShape>> &shapes) {
    this->shapes = shapes;
}

