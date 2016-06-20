#include "community.h"
#include "square.h"
#include <string>
#include <sstream>
#include <ncurses.h>

using std::string;
using std::stringstream;

community::community(){

}

community::~community(){

}

string community::toString() const{
	stringstream ss;
	ss << "Take your chest -> Press any key";
	return ss.str();
}

void community::printSquare(int option){
	if (option == 2 || option == 17 || option == 32){
		init_pair(1,COLOR_BLUE,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*                                        *\n");
		mvprintw(13,20,"*                                        *\n");
		mvprintw(14,20,"*    ********************************    *\n");
		mvprintw(15,20,"*    *            *   *             *    *\n");
		mvprintw(16,20,"*    ********************************    *\n");
		mvprintw(17,20,"*    *            *   *             *    *\n");
		mvprintw(18,20,"*    *             ***              *    *\n");
		mvprintw(19,20,"*    *                              *    *\n");
		mvprintw(20,20,"*    *                              *    *\n");
		mvprintw(21,20,"*    ********************************    *\n");
		mvprintw(22,20,"*                                        *\n");
		mvprintw(23,20,"*                                        *\n");
		mvprintw(24,20,"*                                        *\n");
		mvprintw(25,20,"*               COMMUNITY                *\n");
		mvprintw(26,20,"*                 CHEST                  *\n");
		mvprintw(27,20,"*                                        *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*                                        *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	}
}

bool community::turnInSquare(bool hola){
	return hola;
}