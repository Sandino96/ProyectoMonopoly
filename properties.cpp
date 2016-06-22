#include "properties.h"
#include "square.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

properties::properties(double price, double mortgaged, bool owner, double rent):price(price),mortgaged(mortgaged),owner(owner),rent(rent){
}

properties::~properties(){
}

bool properties::getOwner(){
	return owner;
}

void properties::setOwner(bool owner){
	this -> owner = owner;
}

double properties::getMortgaged(){
	return mortgaged;
}

double properties::getRent(){
	return rent;
}

double properties::getPrice(){
	return price;
}
