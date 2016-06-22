#include <string>
#include "player.h"
#include "properties.h"
#include <vector>
#include <sstream>

using std::string;
using std::stringstream;
using std::vector;

player::player(string name):name(name){
	this->wallet = 1500;
	this->turn = 0;
}

player::~player(){
}

string player::toString() const{
	stringstream ss;
	ss << "Name: " << name << " you have $" << wallet << " and you are in the square " << turn;
	return ss.str();
}

int player::isTurn(const int myTurn, int positions, int turnNow){
	if (myTurn == turnNow){
		this -> turn += positions;
		turnNow++;
		return turnNow;
	} else {
		return turnNow;
	}
}

int player::getTurn(){
	return this -> turn;
}

void player::setTurn(int turn){
	if((this -> turn + turn) >= 40){
		int temporalTurn =(this -> turn + turn) - 40 ;
		this -> turn = temporalTurn;
		this -> wallet += 200;
	} else {
		this -> turn += turn;
	}
}

bool player::isWinner(bool over){
	if(over){
		return true;
	} else {
		return false;
	}
}

double player::getWallet(){
	return this -> wallet;
}

void player::setWallet(double wallet){
	this -> wallet += wallet;
}

string player::getName(){
	return this -> name;
}

void player::setMayor(square* property){
	this -> mayor.push_back(property);
}

vector<square*> player::getMayor(){
	return this -> mayor;
}

void player::setCard(square* aCardWouldSaveYou){
	this -> aCardWouldSaveYou = aCardWouldSaveYou;
}