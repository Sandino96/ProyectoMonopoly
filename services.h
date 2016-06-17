#pragma once
#include "properties.h"
#include <string>

class Services : public properties{
  public:
	Services();
	virtual~Services();
	virtual string toString() const;
	string position(int);
};