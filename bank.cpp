#include <string>
#include <sstream>
#include <vector>

bank::bank(){}

string bank::toString() const{
	stringstream ss;
	ss << safe;
	return ss.str();
}

void bank::setSafe(double safe){
	this -> safe = safe;
}

double bank::getSafe(){
	return this -> safe;
}