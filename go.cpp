#include "go.h"
#include "square.h"
#include <ncurses.h>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

go::go(){
	this -> salary = 200;
}

go::~go(){
}

string go::toString() const{
	stringstream ss;
	ss << "Collect $200.00 salay as you pass";
	return ss.str();
}

void go::printSquare(int option){
	if(option == 0){
		init_pair(1,COLOR_RED,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(3,20,"*******************************************\n");
		mvprintw(4,20,"*                                         *\n");
		mvprintw(5,20,"*                                         *\n");
		mvprintw(6,20,"*                                         *\n");
		mvprintw(7,20,"*            ********  ********           *\n");
		mvprintw(8,20,"*            *         *      *           *\n");
		mvprintw(9,20,"*            *         *      *           *\n");
		mvprintw(10,20,"*            *   ****  *      *           *\n");
		mvprintw(11,20,"*            *      *  *      *           *\n");
		mvprintw(12,20,"*            *      *  *      *           *\n");
		mvprintw(13,20,"*            ********  ********           *\n");
		mvprintw(14,20,"*                                         *\n");
		mvprintw(15,20,"*                                         *\n");
		mvprintw(16,20,"*                                         *\n");
		mvprintw(17,20,"*            /                            *\n");
		mvprintw(18,20,"*           /  ======================     *\n");
		mvprintw(19,20,"*           \\  ======================     *\n");
		mvprintw(20,20,"*            \\                            *\n");
		mvprintw(21,20,"*                                         *\n");
		mvprintw(22,20,"*                                         *\n");
		mvprintw(23,20,"*******************************************\n");
		attroff(COLOR_PAIR(1));
 	}
}

bool go::turnInSquare(bool hola){
	return hola;
}