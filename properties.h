#pragma once
#include <string>
#include "square.h"

using std::string;

class properties: public square{
  protected:
	double price;
	double mortgaged;
	bool owner;
	double rent;

  public:
  	properties(double,double,bool,double);
  	virtual~properties();
  	virtual bool getOwner();
  	virtual void setOwner(bool);
  	virtual double getRent();
  	virtual double getMortgaged();
  	virtual double getPrice();
};