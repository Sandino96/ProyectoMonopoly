#pragma once
#include <string>
#include <vector>

class bank{
	vector <Properties*> president;
	vector <Buildings*> owner;
	double safe;

  public:
  	bank(safe);
  	virtual~bank();
	string toString() const;
	void setSafe(double);
	double getSafe();
	
}