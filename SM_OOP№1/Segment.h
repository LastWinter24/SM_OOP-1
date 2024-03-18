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

#endif