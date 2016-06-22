#pragma once
#include "properties.h"
#include "player.h"
#include <string>

class railway : public properties{
  public:
  	railway(double,double,bool,double);
  	virtual ~railway();
  	string toString() const;
  	void printSquare(int);
	void buyProperty(vector<square*>,player*,player*);
};
