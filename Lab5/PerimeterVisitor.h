#pragma once

#include "IVisitor.h"

class PerimeterVisitor : public IVisitor {
public:
    void visit (Circle & v) override;
    void visit (Rectangle & v) override;
    void visit (Triangle & v) override;

};


