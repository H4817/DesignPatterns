#pragma once

#include "IVisitor.h"

class PerimeterVisitor : public IVisitor {
public:
    double visit(Circle &v) override;
    double visit(Rectangle &v) override;
    double visit(Triangle &v) override;

};


