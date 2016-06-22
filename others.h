#pragma once
#include "square.h"
#include "player.h"

class others : public square{
  public:
	others();
	virtual ~others();
	virtual void playerInSquare(player*) = 0;
};