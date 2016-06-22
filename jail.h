#pragma once
#include "square.h"
#include "others.h"
#include "player.h"
#include <string>

using std::string;

class jail : public others{
  public:
  	jail();
  	virtual ~jail();
  	string toString() const;
  	void printSquare(int);
	void playerInSquare(player*);
};
