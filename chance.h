#pragma once
#include "player.h"
#include "square.h"
#include <string>

using std::string;

class chance : public square{
  protected:
  	vector <string> deck;
  public:
	chance();
	virtual ~chance();
	string toString() const;
	void printSquare(int);
	void drawACard(vector<square*>,player*);
};
