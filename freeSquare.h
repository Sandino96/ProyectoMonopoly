#pragma once
#include "others.h"
#include "square.h"
#include <string>

using std::string;

class freeSquare : public others{
  public:
	freeSquare();
	virtual ~freeSquare();
	string toString() const;
	void printSquare(int);
	void playerInSquare(player*);
};
