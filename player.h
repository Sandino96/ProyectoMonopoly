#pragma once
#include <string>
//#include "properties.h"
//#include "buildings.h"
//#include <vector>

using std::string;

class player{
	//vector<Properties*> mayor;
	//cardOption option;
	//vector<Buildings*> propietor;
	string name;
	double wallet;
	int turn;
  public:
	//player(string, double, int, vector<Properties*>, cardOption, vector<Buildings*>);
	player(string);
	virtual~player();
	string toString() const;
	int isTurn(int,int,int);
	int getTurn();
	bool winner(bool);
	void setWallet(double);
};