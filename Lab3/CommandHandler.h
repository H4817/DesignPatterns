#pragma once

#include "AbstractShape.h"
#include "ShapesContainer.h"
#include "CircleFactory.h"
#include "TriangleFactory.h"
#include "RectangleFactory.h"
#include <iterator>
#include <algorithm>

class CommandHandler {
public:
    void ProcessInput(std::string input);

    std::string PrepareOutput();

private:
    void AppendShapes(const std::vector<std::pair<std::string, std::vector<int>>> &namesAndArguments);

private:
    ShapesContainer shapesContainer;
    CircleFactory &circleFactory = CircleFactory::getInstance();
    TriangleFactory &triangleFactory = TriangleFactory::getInstance();
    RectangleFactory &rectangleFactory = RectangleFactory::getInstance();

};

