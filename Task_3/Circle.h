#pragma once

namespace shapes{
class Circle{
    public:
        Circle();
        Circle(float);
        
        float getRadius();
        float setRadius(float);

    ~Circle();

        private:
        float radius;
};
}