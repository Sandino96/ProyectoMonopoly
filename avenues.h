#pragma once
#include "properties.h"
#include <string>

class avenues : public properties{
	int houses;
	int hotels;
  public:
  	avenues(double,double,bool,double,int,int);
  	virtual ~avenues();
  	string toString()const;
  	void printSquare(int);
  	bool turnInSquare(bool);
};