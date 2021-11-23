#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram();
	virtual ~Parallelogram();

	void Input();
	bool Check();
	void Display();
};


