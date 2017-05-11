#pragma once

#include "AbstractShape.h"
//#include "ShapesContainer.h"
#include <iterator>
#include <algorithm>

class CommandHandler {
public:
    void ProcessInput(std::string input);

    std::string PrepareOutput();

private:
    void AppendShapes(const std::vector<std::pair<std::string, std::vector<int>>> & namesAndArguments);

private:
//    ShapesContainer shapesContainer;
    std::vector<std::shared_ptr<AbstractShape>> m_shapes;
};

