#pragma once
#include "Polygon.h"

class Quadrangle : public Polygon
{
private:
    const int Vertices = 4;
public:
    Quadrangle();
    ~Quadrangle();

    void Input();
    void Display();
};