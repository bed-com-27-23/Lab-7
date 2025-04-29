#include "Rectangle.h"
Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::Rectangle(float newLength, float newWidth){
    length = newLength;
    width = newWidth;
}

Rectangle::~Rectangle(){
    
}

float Rectangle::getLength() const{
    return length;
}
float Rectangle::getWidth() const{
    return width;
}

float Rectangle::getArea(){
    return length*width;
}

