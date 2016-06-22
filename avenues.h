#pragma once
#include "properties.h"
#include "player.h"
#include <string>

using std::string;

class avenues : public properties{
	int houses;
	int hotels;
  public:
  	avenues(double,double,bool,double,int,int);
  	virtual ~avenues();
  	string toString()const;
  	void printSquare(int);
  	void buyProperty(vector<square*>,player*,player*);
};