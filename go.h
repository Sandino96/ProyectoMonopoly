#pragma once
#include "square.h"
#include "player.h"
#include "others.h"

class go : public others{
  protected:
  	double salary;
  public:
  	go();
  	virtual ~go();
  	virtual string toString() const;
  	void printSquare(int);
	void playerInSquare(player*);
};
