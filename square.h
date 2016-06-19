#pragma once
#include <string>

using std::string;

class square{

  public:
  	square();
  	virtual~square();
  	virtual string toString()const = 0;
  	virtual void printSquare(int) = 0;
  	virtual bool turnInSquare(bool) = 0;
};