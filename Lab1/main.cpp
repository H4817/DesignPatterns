#include <iostream>
#include "Circle.h"
#include "ShapesContainer.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "IOManager.h"
#include "CommandHandler.h"

int main() {
    CommandHandler commandHandler;
    commandHandler.ProcessInput(IOManager::ReadFile("input.txt"));
    IOManager::WriteFile("output.txt", commandHandler.PrepareOutput());
    return 0;
}
