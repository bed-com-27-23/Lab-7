#include "Circle.h"
using namespace shapes;

Circle::Circle(){
    radius = 0;
}
Circle::Circle(float newRadius){
    radius = newRadius;
}
Circle::~Circle(){
    
}
float Circle::getRadius(){
    return radius;
}
float Circle::setRadius(float newRadius){
    return radius = newRadius;
}
