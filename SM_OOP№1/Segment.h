#pragma once
#ifndef SEGMENT_H
#define SEGMENT_H
#include "Point.h"

class Segment {
private:
    Point startPoint;
    Point endPoint;

public:
    Segment(const Point& start, const Point& end);
};
//класс, представляющий отрезок на плоскости, состоящий из двух точек.
//Конструктор Segment принимает начальную и конечную точки и создает отрезок между ними.
#endif