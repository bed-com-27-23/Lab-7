#include "Rectangle.h"

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::~Rectangle(){
    
}
void Rectangle::setLength(float len){
    length = len;
}
void Rectangle::setWidth(float wid){
    width = wid;
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

