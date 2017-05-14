#pragma once

#include "AbstractShape.h"

class ShapesContainer {
public:
//    ShapesContainer(const std::vector<std::shared_ptr<AbstractShape>> &shapes);

    std::vector<std::shared_ptr<AbstractShape>> GetShapes();

    void SetShapes(const std::vector<std::shared_ptr<AbstractShape>> &shapes);

    void AddShape(const AbstractShape &shape);

    void RemoveShape(const int position);

    void RemoveLastOne();

private:
    std::vector<std::shared_ptr<AbstractShape>> shapes;

};


