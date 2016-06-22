#pragma once
#include "properties.h"
#include "player.h"
#include <string>

class services : public properties{
  public:
	services(double,double,bool,double);
	virtual~services();
	string toString() const;
	void printSquare(int);
	void buyProperty(vector<square*>,player*,player*);
};
