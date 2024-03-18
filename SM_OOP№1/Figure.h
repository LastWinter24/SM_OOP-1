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

#endif