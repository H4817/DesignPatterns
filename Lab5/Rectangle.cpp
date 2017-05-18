#include "Rectangle.h"

Rectangle::Rectangle(std::pair<int, int> p1, std::pair<int, int> p3) {
    this->p1 = p1;
    this->p3 = p3;
    this->width = sqrt(pow((p1.first - p1.first), 2) + pow((p3.second - p1.second), 2));
    this->height = sqrt(pow((p1.second - p1.first), 2) + pow((p3.first - p1.second), 2));
//    this->area = width * height;
//    this->perimeter = (width + height) * 2;
}


std::string Rectangle::ToString(IVisitor & v) {
    return "RECTANGLE: P=" + std::to_string(GetPerimeter()) + "; S=" + std::to_string(GetArea()) + "\n";
}


std::string Rectangle::ToString() {
    return "RECTANGLE: P=" + std::to_string(GetPerimeter()) + "; S=" + std::to_string(GetArea()) + "\n";
}

std::string Rectangle::GetClassName() const {
    return "Rectangle";
}

double Rectangle::accept(IVisitor &v) {
    return v.visit(*this);
}

const std::pair<int, int> &Rectangle::getP1() const {
    return p1;
}

void Rectangle::setP1(const std::pair<int, int> &p1) {
    Rectangle::p1 = p1;
}

const std::pair<int, int> &Rectangle::getP3() const {
    return p3;
}

void Rectangle::setP3(const std::pair<int, int> &p3) {
    Rectangle::p3 = p3;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double height) {
    Rectangle::height = height;
}

