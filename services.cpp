#include "services.h"
#include "properties.h"
#include <ncurses.h>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

services::services(double price, double mortgaged, bool owner, double rent):properties(price,mortgaged,owner,rent){
}

services::~services(){
}

string services::toString() const{
	stringstream ss;
	ss << "Price $" << price << " Have owner -> ";
	if(owner){
		ss << "Yes";
	} else {
		ss << "No";
	}
	return ss.str();
}

void services::printSquare(int option){
	if(option == 28){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                <===*===>               *\n");
		mvprintw(12,20,"*                    |                   *\n");
		mvprintw(13,20,"*           *      *****                 *\n");
		mvprintw(14,20,"*          * ***************             *\n");
		mvprintw(15,20,"*          * *              *            *\n");
		mvprintw(16,20,"*          * *               *           *\n");
		mvprintw(17,20,"*          * ************     *          *\n");
		mvprintw(18,20,"*           *            *    *          *\n");
		mvprintw(19,20,"*                         *   *          *\n");
		mvprintw(20,20,"*                         *   *          *\n");
		mvprintw(21,20,"*                         *****          *\n");
		mvprintw(22,20,"*   ----------------------------------   *\n");
		mvprintw(23,20,"*                Water Works             *\n");
		mvprintw(24,20,"*   ----------------------------------   *\n");
		mvprintw(25,20,"*   If one Service is owned rent is 4    *\n");
		mvprintw(26,20,"*   times amount shown on dice.          *\n");
		mvprintw(27,20,"*   If both Services are owned rent is   *\n");
		mvprintw(28,20,"*   10 times amount shown on dice.       *\n");
		mvprintw(29,20,"*                                        *\n");
		mvprintw(30,20,"*          Mortgage Value  $75           *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	} else if (option == 12){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*               ***********              *\n");
		mvprintw(12,20,"*              *   *   *   *             *\n");
		mvprintw(13,20,"*             *   * * * *   *            *\n");
		mvprintw(14,20,"*             *   *  *  *   *            *\n");
		mvprintw(15,20,"*             *    *_*_*    *            *\n");
		mvprintw(16,20,"*              *    | |    *             *\n");
		mvprintw(17,20,"*               *   | |   *              *\n");
		mvprintw(18,20,"*                *  | |  *               *\n");
		mvprintw(19,20,"*                 *******                *\n");
		mvprintw(20,20,"*                 *-----*                *\n");
		mvprintw(21,20,"*                 *******                *\n");
		mvprintw(22,20,"*   ----------------------------------   *\n");
		mvprintw(23,20,"*            Electronic Company          *\n");
		mvprintw(24,20,"*   ----------------------------------   *\n");
		mvprintw(25,20,"*   If one Service is owned rent is 4    *\n");
		mvprintw(26,20,"*   times amount shown on dice.          *\n");
		mvprintw(27,20,"*   If both Services are owned rent is   *\n");
		mvprintw(28,20,"*   10 times amount shown on dice.       *\n");
		mvprintw(29,20,"*                                        *\n");
		mvprintw(30,20,"*          Mortgage Value  $75           *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	}
}

void services::turnInSquare(vector <square*> board, player& player1, player& player2){
	
}