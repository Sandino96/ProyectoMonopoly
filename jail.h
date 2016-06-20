#pragma once
#include "square.h"
#include <string>

using std::string;

class jail : public square{
  public:
  	jail();
  	virtual ~jail();
  	string toString() const;
  	void printSquare(int);
  	bool turnInSquare(bool);
};