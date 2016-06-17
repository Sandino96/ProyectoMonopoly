#include <string>
#include "player.h"
#include "properties.h"
//#include "buildings.h"
#include <vector>
#include <sstream>

using std::string;
using std::stringstream;

player::player(string name):name(name){
	this->wallet = 1500;
	this->turn = 0;
}

player::~player(){
}

string player::toString() const{
	stringstream ss;
	ss << "Nombre: " << name << " tiene " << wallet << "$ y esta en la casilla " << turn;
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

bool player::winner(bool){

}

void player::setWallet(double wallet){
	this -> wallet = wallet;
}
