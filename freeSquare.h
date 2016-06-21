#pragma once
#include "square.h"
#include <string>

using std::string;

class freeSquare : public square{
  public:
	freeSquare();
	virtual ~freeSquare();
	string toString() const;
	void printSquare(int);
};
