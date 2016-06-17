#pragma once
#include <string>

class board{
	bool gameOn;

  public:
  	board(bool);
  	virtual~board();
  	string toString()const;
  	virtual bool turnInSquare(bool) = 0;
}