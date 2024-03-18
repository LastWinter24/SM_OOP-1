#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord, double yCoord);
    void setCoordinates(double xCoord, double yCoord);
    double getX() const;
    double getY() const;
};

#endif