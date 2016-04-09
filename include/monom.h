#ifndef _MONOM_H_
#define _MONOM_H_
#include <iostream>
#include <sstream>
#include <locale>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using std::istream;
using std::ostream;

class Monom
{
	double coeff;
    int deg;
	Monom *next;
public:
    Monom(int = 0, int = 0, Monom* = NULL);
	Monom(const Monom &m);
	void SetCoeff(int coeff);
    int GetCoeff();
	void SetDegree(int deg);
    int GetDegree();
	void SetNext(Monom *_next);
	Monom* GetNext();
	Monom& operator=(const Monom &m);
	bool operator==(const Monom &m) const;
};

#endif