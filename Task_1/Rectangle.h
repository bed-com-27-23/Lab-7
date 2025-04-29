 class Rectangle{
    public:
    Rectangle();

    ~Rectangle();

    void setLength(float);
    void setWidth(float);

   float getLength() const;
  float getWidth() const;

   float getArea();
    
    private:
    float length;
    float width;

 };