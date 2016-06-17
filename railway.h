#pragma once
#include "properties.h"
#include <string>

class Railway : public properties{
	int	norecuerdo;
  public:
  	Railway(int);
  	virtual ~Railway();
  	virtual string toString() const;
};