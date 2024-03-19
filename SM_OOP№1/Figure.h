#pragma once
#ifndef FIGURE_H
#define FIGURE_H
#include <vector>
#include "Point.h"

class Figure {
private:
    std::vector<Point> points;

public:
    Figure(const std::vector<Point>& pts);
};
//класс, представляющий фигуру на плоскости, состоящую из точек.
//Figure принимает вектор точек и использует их для создания фигуры.
#endif