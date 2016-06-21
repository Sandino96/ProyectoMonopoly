#pragma once
#include <string>
#include "properties.h"
#include <vector>

using std::string;
using std::vector;

class player{
	//cardOption option;
	//vector<Buildings*> propietor;
  protected:
  	vector<properties*> mayor;
	string name;
	double wallet;
	int turn;
  public:
	player(string);
	virtual~player();
	string toString() const;
	int isTurn(int,int,int);
	int getTurn();
	void setTurn(int);
	string getName();
	bool isWinner(bool);
	double getWallet();
	void setWallet(double);
	void setProperties(properties*);
	vector<properties*> getProperties();
};