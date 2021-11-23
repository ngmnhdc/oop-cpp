#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
    Square();
    virtual ~Square();

    void Input();
    bool Check();
    void Display();
};

