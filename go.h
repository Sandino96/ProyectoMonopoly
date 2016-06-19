#pragma once
#include "square.h"

class go : public square{
  protected:
  	double salary;
  public:
  	go();
  	virtual ~go();
  	virtual string toString() const;
  	bool turnInSquare(bool);
  	void printSquare(int);
};