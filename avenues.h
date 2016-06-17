#pragma once
#include "properties.h"
#include <string>

class avenues : public properties{
	int houses;
	int hotels;
  public:
  	avenues(double,double,bool,int,int);
  	virtual ~avenues();
  	string toString()const;
  	void printAvenue(int);
  	bool turnInSquare(bool);
};