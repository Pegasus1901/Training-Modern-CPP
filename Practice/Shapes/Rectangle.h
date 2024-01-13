#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shapes.h"

class Rectangle:public Shapes
{
private:
    float _length;
    float _breadth;
public:
    Rectangle()=delete;
    Rectangle(float length, float breadth):_length(length), _breadth(breadth){}
    float Area() override;
    
    ~Rectangle()=default;

    float length() const { return _length; }

    float breadth() const { return _breadth; }
};

#endif // RECTANGLE_H
