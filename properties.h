#pragma once
#include <string>
#include "square.h"

using std::string;

class properties: public square{
	double price;
	double mortgaged;
	bool owner;

  public:
  	properties(double,double,bool);
  	virtual~properties();
};