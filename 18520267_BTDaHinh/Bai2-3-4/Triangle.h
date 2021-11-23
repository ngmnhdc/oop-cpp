#pragma once
#include "Polygon.h"

class Triangle : public Polygon
{
private:
    const int Vertices = 3;
public:
    Triangle();
    ~Triangle();
    
    void Input();
    void Display();
};

