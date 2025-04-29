#include "Square.h"
using namespace shapes;

Square::Square(){
    side_length = 0;
}
Square::Square(float newSideLength){
    side_length = newSideLength;
}
Square::~Square(){
    
}
float Square::getSideLength(){
    return side_length;
}
float Square::setSideLength(float setlength){
    return side_length = setlength;
}
double Square::getAreaS(){
    return side_length *side_length;
}