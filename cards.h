#pragma once
#include "square.h"
#include "player.h"
#include <vector>

using std::vector;

class cards : public square{
  public:
	cards();
	virtual ~cards();
	virtual void drawACard(vector<square*>,player*) = 0;
};