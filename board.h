#pragma once
#include <string>

class square{
	bool gameOn;

  public:
  	board(bool);
  	virtual~board();
  	string toString()const;
  	virtual bool turnInSquare(bool) = 0;
}