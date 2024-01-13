#ifndef SHAPES_H
#define SHAPES_H

class Shapes
{
private:
    int _side;
public:
    Shapes();

    Shapes(int side):_side(side){}

    virtual float Area() = 0;

    float Perimeter();


    ~Shapes()=default;
};

#endif // SHAPES_H
