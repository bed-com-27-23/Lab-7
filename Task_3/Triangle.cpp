#include "Triangle.h"
using namespace shapes;

Triangle::Triangle(){
    base = 0;
    height = 0;
}
Triangle::~Triangle(){

}
Triangle::Triangle(float newBase, float newHeight){
    base = newBase;
    height = newHeight;
}

float Triangle::getBase(){
    return base;
}

float Triangle::setBase(float newBase){
    return base = newBase;
}
float Triangle::getHeight(){
    return height;
}
float Triangle::setHeight(int height){
    return height;
}

