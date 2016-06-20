#pragma once
#include "square.h"
#include <string>

using std::string;

class chance : public square{
  public:
	chance();
	virtual ~chance();
	string toString() const;
	void printSquare(int);
	bool turnInSquare(bool);
};