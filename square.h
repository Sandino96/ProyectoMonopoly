#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;

class square{
  public:
  	square();
  	virtual~square();
  	virtual string toString()const = 0;
  	virtual void printSquare(int) = 0;
};