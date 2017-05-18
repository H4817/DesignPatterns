#include "PerimeterVisitor.h"

double PerimeterVisitor::visit(Circle &v) {
    return 0;
}

double PerimeterVisitor::visit(Triangle &v) {
    return 0;
}

double PerimeterVisitor::visit(Rectangle &v) {
    return (v.getWidth() + v.getHeight()) * 2;

}
