#pragma once
#ifndef SQUARE_H
#define SQUARE_H
#include "Figure.h"

class Square {
private:
    Figure figure1;
    Figure figure2;

public:
    Square(const Figure& fig1, const Figure& fig2);
    bool checkIntersection();
};
//класс, представляющий квадрат как фигуру, состоящую из двух других фигур.
#endif