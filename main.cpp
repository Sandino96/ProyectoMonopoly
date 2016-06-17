#include "properties.h"
#include "avenues.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argv, char*argc[]){
	avenues a(200,100,false,0,0);
	cout << a.toString() << endl;
	return 0;
}