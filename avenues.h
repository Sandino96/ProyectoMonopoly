#pragma once
#include "properties.h"
#include <string>

class avenues : public properties{
	int houses;
	int hotels;
  public:
  	avenues(double,double,bool,int,int);
  	virtual ~avenues();
  	virtual string toString()const;
  	string name(int);
};