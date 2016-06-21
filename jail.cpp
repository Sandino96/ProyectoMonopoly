#include "jail.h"
#include "square.h"
#include <string>
#include <sstream>
#include <ncurses.h>

using std::string;
using std::stringstream;

jail::jail(){
}

jail::~jail(){
}

string jail::toString() const{
	stringstream ss;
	ss << "GO TO JAIL :3";
	return ss.str();
}

void jail::printSquare(int option){
	if(option == 30){
		init_pair(1,COLOR_BLACK,COLOR_RED);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*                                        *\n");
		mvprintw(13,20,"*     ****** ******    ******* ******    *\n");
		mvprintw(14,20,"*     *      *    *       *    *    *    *\n");
		mvprintw(15,20,"*     *      *    *       *    *    *    *\n");
		mvprintw(16,20,"*     *   ** *    *       *    *    *    *\n");
		mvprintw(17,20,"*     *    * *    *       *    *    *    *\n");
		mvprintw(18,20,"*     ****** ******       *    ******    *\n");
		mvprintw(19,20,"*                                        *\n");
		mvprintw(20,20,"*         *******  ******  *  *          *\n");
		mvprintw(21,20,"*            *     *    *  *  *          *\n");
		mvprintw(22,20,"*            *     *    *  *  *          *\n");
		mvprintw(23,20,"*            *     ******  *  *          *\n");
		mvprintw(24,20,"*            *     *    *  *  *          *\n");
		mvprintw(25,20,"*         ****     *    *  *  *****      *\n");
		mvprintw(26,20,"*           _____________________        *\n");
		mvprintw(27,20,"*           |   |   |   |   |   |        *\n");
		mvprintw(28,20,"*           |   |   |   |   |   |        *\n");
		mvprintw(29,20,"*           |___|___|___|___|___|        *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	} else if(option == 10){
		init_pair(1,COLOR_BLACK,COLOR_RED);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*        |                               *\n");
		mvprintw(12,20,"*        |                               *\n");
		mvprintw(13,20,"*        |                               *\n");
		mvprintw(14,20,"*        |                               *\n");
		mvprintw(15,20,"*        |                               *\n");
		mvprintw(16,20,"*        |                               *\n");
		mvprintw(17,20,"*        |                               *\n");
		mvprintw(18,20,"*        |                               *\n");
		mvprintw(19,20,"*        |                               *\n");
		mvprintw(20,20,"*        |                               *\n");
		mvprintw(21,20,"*        |                               *\n");
		mvprintw(22,20,"*        |                               *\n");
		mvprintw(23,20,"*        |                               *\n");
		mvprintw(24,20,"*        |                               *\n");
		mvprintw(25,20,"*        |                               *\n");
		mvprintw(26,20,"*        |_____________________________  *\n");
		mvprintw(27,20,"*                                        *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*                                        *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	}
}

void jail::turnInSquare(vector <square*> board, player& player1, player& player2){
	
}