class Rectangle{
    public:
    Rectangle();
    Rectangle(float newLength, float newWidth);

    ~Rectangle();

    float getLength() const;
    float getWidth() const;

   float getArea();
    
    private:
    float length;
    float width;

 };