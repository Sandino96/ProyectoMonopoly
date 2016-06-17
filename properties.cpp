#include "properties.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

properties::properties(double price, double mortgaged, bool owner):price(price),mortgaged(mortgaged),owner(owner){
}

properties::~properties(){
}

