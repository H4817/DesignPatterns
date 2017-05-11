#include "Triangle.h"

Triangle::Triangle(std::pair<int, int> p1, std::pair<int, int> p2, std::pair<int, int> p3) {
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    lengthsOfSides = std::make_tuple(std::sqrt(pow((p2.first - p1.first), 2) +
                                               pow((p2.second - p1.second), 2)),
                                     std::sqrt(pow((p3.first - p2.first), 2) +
                                               pow((p3.second - p2.second), 2)), std::sqrt(
                    pow((p1.first - p3.first), 2) +
                    pow((p1.second - p3.second), 2)));
    perimeter = std::get<0>(lengthsOfSides) + std::get<1>(lengthsOfSides) + std::get<2>(lengthsOfSides);
    area = std::sqrt(abs(perimeter / 2 * (perimeter / 2 - std::get<0>(lengthsOfSides)) *
                         (perimeter / 2 - std::get<1>(lengthsOfSides)) *
                         (perimeter / 2 - std::get<2>(lengthsOfSides))));
}

std::string Triangle::ToString() {
    return "TRIANGLE: P=" + std::to_string(GetPerimeter()) + "; S=" + std::to_string(GetArea()) + "\n";
}
