#pragma once
#include "player.h"
#include "square.h"
#include <string>

using std::string;

class community : public square{
  protected:
  	vector <string> deck;
  public:
  	community();
  	virtual ~community();
  	string toString() const;
  	void printSquare(int);
	void drawACard(vector<square*>,player*);
};
