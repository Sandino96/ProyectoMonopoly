#pragma once
#include "square.h"
#include "player.h"
#include <string>

class tax : public square{
  public:
  	tax();
  	virtual ~tax();
  	string toString() const;
  	void printSquare(int);
	void turnInSquare(vector<square*>,player&,player&);
};
