#pragma once
#include "square.h"
#include "others.h"
#include "player.h"
#include <string>

class tax : public others{
  public:
  	tax();
  	virtual ~tax();
  	string toString() const;
  	void printSquare(int);
	void playerInSquare(player*);
};
