#include "square.h"
#include "player.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

square::square(){
}

square::~square(){
}

string square::toString() const {
	stringstream ss;
	ss << "Square";
	return ss.str();
}