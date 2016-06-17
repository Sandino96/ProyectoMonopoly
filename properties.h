#pragma once
#include <string>

using std::string;

class properties{
	double price;
	double mortgaged;
	bool owner;

  public:
  	properties(double,double,bool);
  	virtual~properties();
  	//virtual string name();
  	virtual string toString() const = 0;
  	bool turnInSquare(bool);
};