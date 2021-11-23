#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
    Rectangle();
    virtual ~Rectangle();
    
    void Input();
    bool Check();
    void Display();
};