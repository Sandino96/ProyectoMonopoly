#pragma once
#include "square.h"
#include <string>

using std::string;

class community : public square{
  public:
  	community();
  	virtual ~community();
  	string toString() const;
  	void printSquare(int);
	void turnInSquare(vector<square*>,player&,player&);
};
