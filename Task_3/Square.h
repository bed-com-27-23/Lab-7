#pragma once

namespace shapes{
class Square{
    public:
    Square();
    Square(float);

    float getSideLength();
    float setSideLength(float);

    double getAreaS();
    
    ~Square();
    private:
    float side_length;
};
}
