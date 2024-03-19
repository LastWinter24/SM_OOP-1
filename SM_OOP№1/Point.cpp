#include "Point.h"

Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

void Point::setCoordinates(double xCoord, double yCoord) {
    x = xCoord;
    y = yCoord;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
    //Функция setCoordinates позволяет установить новые координаты для точки.
    //Функции getX и getY возвращают координаты x и y соответственно.
}