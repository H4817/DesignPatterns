#pragma once

#include "AbstractShape.h"

class Rectangle : public AbstractShape {
public:
    Rectangle(std::pair<int, int> p1, std::pair<int, int> p3);

    std::string ToString() override;

    std::string GetClassName() const override;

    double accept(IVisitor &v) override;

    const std::pair<int, int> &getP1() const;

    void setP1(const std::pair<int, int> &p1);

    const std::pair<int, int> &getP3() const;

    void setP3(const std::pair<int, int> &p3);

    double getWidth() const;

    void setWidth(double width);

    double getHeight() const;

    void setHeight(double height);

    std::string ToString(IVisitor &v);

private:
    std::pair<int, int> p1;
    std::pair<int, int> p3;
    double width;
    double height;

};


