#pragma once
namespace shapes{
    class Triangle{
    public:
    Triangle();
    Triangle(float, float);

    float getBase();
    float setBase(float);

    float getHeight();
    float setHeight(int);
    
~Triangle();  

    private:
    float base;
    float height;

};
}