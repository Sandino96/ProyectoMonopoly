#pragma once
#include "square.h"
#include <string>

class tax : public square{
  public:
  	tax();
  	virtual ~tax();
  	string toString() const;
  	void printSquare(int);
  	bool turnInSquare(bool);
};