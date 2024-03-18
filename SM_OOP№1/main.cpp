#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Figure.h"
#include "Square.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    Point p1(1.0, 1.0);
    Point p2(2.0, 2.0);
    Point p3(3.0, 3.0);

    Segment seg(p1, p2);

    vector<Point> trianglePoints = { p1, p2, p3 };
    Figure triangle(trianglePoints);

    // Создание двух фигур для квадрата
    Figure square1(trianglePoints);
    vector<Point> square2Points = { p1, p2, p3, Point(4.0, 4.0) };
    Figure square2(square2Points);

    Square square(square1, square2);

    bool intersect = square.checkIntersection();

    if (intersect) {
        cout << "Фигуры пересекаются!" << endl;
    }
    else {
        cout << "Фигуры не пересекаются!" << endl;
    }

	
	return 0;
}



