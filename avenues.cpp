#include "avenues.h"
#include "properties.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

avenues::avenues(double price, double mortgaged,bool owner, int houses, int hotels):properties(price,mortgaged,owner),houses(houses),hotels(hotels){
}

avenues::~avenues(){
}

string avenues::name(int option){
	if(option == 1){
		stringstream ss;
		ss << "Mediterranean Ave.\n";
		ss << "\n";
		ss << "\tRent $2\n";
		ss << "with 1 house 	$10\n";
		ss << "with 2 houses 	$30\n";
		ss << "with 3 houses 	$90\n";
		ss << "with 4 houses 	$160\n";
		ss << "with hotel 		$250\n";
		ss << "Mortgage Value 	$30\n";
		return ss.str();
 	} else if(option == 2){
		stringstream ss;
		ss << "Baltic Ave.\n";
		ss << "\n";
		ss << "\tRent $4\n";
		ss << "with 1 house 	$20\n";
		ss << "with 2 houses 	$60\n";
		ss << "with 3 houses 	$180\n";
		ss << "with 4 houses 	$320\n";
		ss << "with hotel 		$450\n";
		ss << "Mortgage Value 	$30\n";
		return ss.str();
 	} else if(option == 3){
		stringstream ss;
		ss << "Vermont Ave.\n";
		ss << "\n";
		ss << "\tRent $6\n";
		ss << "with 1 house 	$30\n";
		ss << "with 2 houses 	$90\n";
		ss << "with 3 houses 	$270\n";
		ss << "with 4 houses 	$400\n";
		ss << "with hotel 		$550\n";
		ss << "Mortgage Value 	$50\n";
		return ss.str();
 	} else if(option == 4){
		stringstream ss;
		ss << "Oriental Ave.\n";
		ss << "\n";
		ss << "\tRent $6\n";
		ss << "with 1 house 	$30\n";
		ss << "with 2 houses 	$90\n";
		ss << "with 3 houses 	$270\n";
		ss << "with 4 houses 	$400\n";
		ss << "with hotel 		$550\n";
		ss << "Mortgage Value 	$50\n";
		return ss.str();
 	} else if(option == 5){
		stringstream ss;
		ss << "States Ave.\n";
		ss << "\n";
		ss << "\tRent $10\n";
		ss << "with 1 house 	$50\n";
		ss << "with 2 houses 	$150\n";
		ss << "with 3 houses 	$450\n";
		ss << "with 4 houses 	$650\n";
		ss << "with hotel 		$750\n";
		ss << "Mortgage Value 	$70\n";
		return ss.str();
 	} else if(option == 6){
		stringstream ss;
		ss << "Virginia Ave.\n";
		ss << "\n";
		ss << "\tRent $12\n";
		ss << "with 1 house 	$60\n";
		ss << "with 2 houses 	$180\n";
		ss << "with 3 houses 	$500\n";
		ss << "with 4 houses 	$700\n";
		ss << "with hotel 		$900\n";
		ss << "Mortgage Value 	$80\n";
		return ss.str();
 	} else if(option == 7){
		stringstream ss;
		ss << "New York Ave.\n";
		ss << "\n";
		ss << "\tRent $16\n";
		ss << "with 1 house 	$80\n";
		ss << "with 2 houses 	$220\n";
		ss << "with 3 houses 	$600\n";
		ss << "with 4 houses 	$800\n";
		ss << "with hotel 		$1000\n";
		ss << "Mortgage Value 	$100\n";
		return ss.str();
 	} else if(option == 8){
		stringstream ss;
		ss << "Tennessee Ave.\n";
		ss << "\n";
		ss << "\tRent $14\n";
		ss << "with 1 house 	$70\n";
		ss << "with 2 houses 	$200\n";
		ss << "with 3 houses 	$550\n";
		ss << "with 4 houses 	$750\n";
		ss << "with hotel 		$950\n";
		ss << "Mortgage Value 	$90\n";
		return ss.str();
 	} else if(option == 9){
		stringstream ss;
		ss << "Kentucky Ave.\n";
		ss << "\n";
		ss << "\tRent $18\n";
		ss << "with 1 house 	$90\n";
		ss << "with 2 houses 	$250\n";
		ss << "with 3 houses 	$700\n";
		ss << "with 4 houses 	$875\n";
		ss << "with hotel 		$1050\n";
		ss << "Mortgage Value 	$110\n";
		return ss.str();
 	} else if(option == 10){
		stringstream ss;
		ss << "Indiana Ave.\n";
		ss << "\n";
		ss << "\tRent $18\n";
		ss << "with 1 house 	$90\n";
		ss << "with 2 houses 	$250\n";
		ss << "with 3 houses 	$700\n";
		ss << "with 4 houses 	$875\n";
		ss << "with hotel 		$1050\n";
		ss << "Mortgage Value 	$110\n";
		return ss.str();
 	} else if(option == 11){
		stringstream ss;
		ss << "Atlantic Ave.\n";
		ss << "\n";
		ss << "\tRent $22\n";
		ss << "with 1 house 	$110\n";
		ss << "with 2 houses 	$330\n";
		ss << "with 3 houses 	$800\n";
		ss << "with 4 houses 	$975\n";
		ss << "with hotel 		$1150\n";
		ss << "Mortgage Value 	$130\n";
		return ss.str();
 	} else if(option == 12){
		stringstream ss;
		ss << "Ventnor Ave.\n";
		ss << "\n";
		ss << "\tRent $22\n";
		ss << "with 1 house 	$110\n";
		ss << "with 2 houses 	$330\n";
		ss << "with 3 houses 	$800\n";
		ss << "with 4 houses 	$975\n";
		ss << "with hotel 		$1150\n";
		ss << "Mortgage Value 	$130\n";
		return ss.str();
 	} else if(option == 13){
		stringstream ss;
		ss << "No. Carolina Ave.\n";
		ss << "\n";
		ss << "\tRent $26\n";
		ss << "with 1 house 	$130\n";
		ss << "with 2 houses 	$390\n";
		ss << "with 3 houses 	$900\n";
		ss << "with 4 houses 	$1100\n";
		ss << "with hotel 		$1275\n";
		ss << "Mortgage Value 	$150\n";
		return ss.str();
 	} else if(option == 14){
		stringstream ss;
		ss << "Pacific Ave.\n";
		ss << "\n";
		ss << "\tRent $26\n";
		ss << "with 1 house 	$130\n";
		ss << "with 2 houses 	$390\n";
		ss << "with 3 houses 	$900\n";
		ss << "with 4 houses 	$1100\n";
		ss << "with hotel 		$1275\n";
		ss << "Mortgage Value 	$150\n";
		return ss.str();
 	} else if(option == 14){
		stringstream ss;
		ss << "Park Place\n";
		ss << "\n";
		ss << "\tRent $35\n";
		ss << "with 1 house 	$175\n";
		ss << "with 2 houses 	$500\n";
		ss << "with 3 houses 	$1100\n";
		ss << "with 4 houses 	$1300\n";
		ss << "with hotel 		$1500\n";
		ss << "Mortgage Value 	$175\n";
		return ss.str();
 	} else if(option == 15){
		stringstream ss;
		ss << "Boardwalk\n";
		ss << "\n";
		ss << "\tRent $50\n";
		ss << "with 1 house 	$200\n";
		ss << "with 2 houses 	$600\n";
		ss << "with 3 houses 	$1400\n";
		ss << "with 4 houses 	$1700\n";
		ss << "with hotel 		$2000\n";
		ss << "Mortgage Value 	$200\n";
		return ss.str();
 	}
}

string avenues::toString() const{
	stringstream ss;
	ss << "****************************************\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "*                                      *\n";
	ss << "****************************************\n";
	return ss.str();
}