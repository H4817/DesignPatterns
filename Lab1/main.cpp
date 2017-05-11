#include <iostream>
#include "Circle.h"
#include "ShapesContainer.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "IOManager.h"
#include "CommandHandler.h"

int main() {

//    Circle circle = Circle({3, 3}, 5);
//    Rectangle rectangle = Rectangle({0, 0}, {10, 10});
//    Triangle triangle = Triangle({0, 0}, {0, 10}, {10, 0});
//    IOManager::WriteFile("output.txt", IOManager::ReadFile("input.txt"));
//    std::vector<std::shared_ptr<AbstractShape>> shapes_x;
//    shapes_x.push_back(std::make_shared<AbstractShape>(circle));
//    shapes_x.push_back(std::make_shared<AbstractShape>(rectangle));
//    shapes_x.push_back(std::make_shared<AbstractShape>(triangle));
//    ShapesContainer shapesContainer;
//    commandHandler.ProcessInput(IOManager::ReadFile("input.txt"));
//    std::cout << circle.ToString() << std::endl;
//    std::cout << triangle.GetArea() << std::endl;
//    std::cout << rectangle.GetPerimeter() << std::endl;

    CommandHandler commandHandler;
    commandHandler.ProcessInput(IOManager::ReadFile("input.txt"));
    IOManager::WriteFile("output.txt", commandHandler.PrepareOutput());
    // CommandHandler.ProcessInput(IOManager.ReadFile("input.txt"));
    // IOManager.WriteFile(CommandHandler.ProcessOutput());

    return 0;
}