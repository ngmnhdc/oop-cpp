#pragma once
#include "Candidate.h"

class TestCandidate
{
private:
	int n;
	Candidate* ds;
public:
	TestCandidate();
	TestCandidate(int n);
	~TestCandidate();
	void NhapN();
	void TongDiemTren15();
};

