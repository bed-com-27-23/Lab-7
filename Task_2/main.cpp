#include <iostream>
#include "Rectangle.h"

using namespace std;
int main(){
  
    cout<<"enter the length of the rectangle: ";
    int newlength;
    cin>> newlength;

    cout<<"enter the width of the rectangle: ";
    int newwidth;
    cin>> newwidth;

    Rectangle rectangle1(newlength, newwidth);

    Rectangle rectangle2(newlength, newwidth);

    cout<<"The area of the rectangle with length "
    <<rectangle2.getLength()<< " and width "
    <<rectangle1.getWidth()<<" is "<<rectangle2.getArea()<<endl;
}