#pragma once

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
using namespace shapes;

class Area{
    public:

    static float getAreaSquare(Square square1);
    static float getAreaTriangle(Triangle triangle1);
    static float getAreaCircle(Circle circle1);
};