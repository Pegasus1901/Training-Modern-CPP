#ifndef CIRCLE_H
#define CIRCLE_H
#include"Shapes.h"

class Circle : public Shapes
{
private:
    
public:
    Circle()=delete;
    float Area() override;
    ~Circle()=default;
};

#endif // CIRCLE_H
