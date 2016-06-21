#pragma once
#include "properties.h"
#include <string>

class railway : public properties{
  public:
  	railway(double,double,bool,double);
  	virtual ~railway();
  	string toString() const;
  	void printSquare(int);
	void turnInSquare(vector<square*>,player&,player&);
};
