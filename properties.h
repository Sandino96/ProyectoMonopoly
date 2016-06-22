#pragma once
#include "square.h"
#include "player.h"
#include <vector>

using std::vector;

class player;

class properties : public square{
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
    	virtual void buyProperty(vector<square*>,player*,player*) = 0;
};
