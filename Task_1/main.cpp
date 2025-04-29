#include <iostream>
#include "Rectangle.h"

using namespace std;
int main(){
    Rectangle rectangle1;
    float leng, widt;

    cout<<"Enter length of the rectangle: "<<endl;
    cin>> leng;
    rectangle1.setLength(leng);

    cout<<"Enter width of the rectangle: "<<endl;
    cin>> widt;
    rectangle1.setWidth(widt);

    cout<<"The area of the rectangle with length "
    <<rectangle1.getLength()<< " and width "<<rectangle1.getWidth()
    <<" is "<<rectangle1.getArea()<<endl;


// cout<<"size of Rectangle class is: " << sizeof(Rectangle)<<endl;
}