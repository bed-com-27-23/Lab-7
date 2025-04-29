#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Area.h"

using namespace std;

float Area::getAreaSquare(Square square){
    float sideLength = square.getSideLength();
    return sideLength*sideLength;
    }

float Area::getAreaTriangle(Triangle triangle){
        float base = triangle.getBase();
        float height = triangle.getBase();
        return (base*height)/2;
    }

float Area::getAreaCircle(Circle circle){
        float radius = circle.getRadius();
        return radius*radius*3.14159;
    }
