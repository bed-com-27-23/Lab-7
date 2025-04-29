#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Area.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    int choice = 0;

    

    while(choice != 4){
    
    cout<<"1. Calculate the area of a square \n"
        <<"2. Calculate the area of Triangle \n"
        <<"3. Calculate the area of a Circle \n"
        <<"4. Quit \n";
        cout<<"Enter your choice: "<<endl;
        cin>>choice;

    if(choice == 1){
        shapes::Square square1;

        float sideLength;
        cout<<"Enter the SideLength: ";
        cin>>sideLength;
        
        square1.setSideLength(sideLength);

        cout<<"Area of Square: "<< Area::getAreaSquare(square1)<<endl;;

    }
     else if(choice == 2){
            shapes::Triangle triangle;
            float base;
            float height;

            cout<<"Enter base length: "<<endl;
            cin>>base;

            cout<<"Enter height: "<<endl;
            cin>>height;
            
            triangle.setBase(base);
            triangle.setHeight(height);

            cout<<" Area of Triangle: "<<Area::getAreaTriangle(triangle)<<endl;
        
        }
        else if(choice == 3){
            shapes::Circle circle1;
            float radius;
        
            cout<<"Enter the radius: "<<endl;
            cin>>radius;

            circle1.setRadius(radius);

            cout<<"Area of the Circle: "<< Area::getAreaCircle(circle1)<<endl;
        
        }
        else{
            cout<<"Quiting.....";
        } 
    }
}
