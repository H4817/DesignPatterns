#include <sstream>
#include "CommandHandler.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <boost/algorithm/string.hpp>

void CommandHandler::AppendShapes(const std::vector<std::pair<std::string, std::vector<int>>> &namesAndArguments) {
    for (int counter = 0; counter < namesAndArguments.size(); ++counter) {
        auto name = namesAndArguments[counter].first;
        auto arguments = namesAndArguments[counter].second;
        if (name == "CIRCLE:") {
            m_shapes.push_back(std::make_shared<Circle>(Circle({arguments[0], arguments[1]}, arguments[2])));
        } else if (name == "RECTANGLE:") {
//            shapesContainer.AddShape(Rectangle({arguments[0], arguments[1]}, {arguments[2], arguments[3]}));
            m_shapes.push_back(
                    std::make_shared<Rectangle>(Rectangle({arguments[0], arguments[1]}, {arguments[2], arguments[3]})));
        } else if (name == "TRIANGLE:") {
//            shapesContainer.AddShape( Triangle({arguments[0], arguments[1]}, {arguments[2], arguments[3]}, {arguments[4], arguments[5]}));
            m_shapes.push_back(std::make_shared<Triangle>(
                    (Triangle({arguments[0], arguments[1]}, {arguments[2], arguments[3]},
                              {arguments[4], arguments[5]}))));
        }
    }
}

void CommandHandler::ProcessInput(std::string input) {
    std::vector<std::string> stringLines;
    std::vector<std::pair<std::string, std::vector<int>>> namesAndArguments;
    boost::split(stringLines, input, boost::is_any_of("\n"));
    for (int j = 0; j < stringLines.size(); ++j) {
        std::replace(stringLines[j].begin(), stringLines[j].end(), ',', ' ');
        std::replace(stringLines[j].begin(), stringLines[j].end(), ';', ' ');
        std::stringstream ss(stringLines[j]);
        std::string name;
        ss >> name;
        std::vector<int> arguments((std::istream_iterator<int>(ss)),
                                   std::istream_iterator<int>());
        namesAndArguments.push_back(std::make_pair(name, arguments));
    }
    AppendShapes(namesAndArguments);
}


std::string CommandHandler::PrepareOutput() {
    std::string result;
    for (int i = 0; i < m_shapes.size(); ++i) {
        result += m_shapes[i]->ToString();
    }
    return result;
}

