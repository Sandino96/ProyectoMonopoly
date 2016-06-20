#include "tax.h"
#include "square.h"
#include <string>
#include <sstream>
#include <ncurses.h>

using std::string;
using std::stringstream;

tax::tax(){

}

tax::~tax(){

}

string tax::toString() const{
	stringstream ss;
	ss << "PAY YOUR TAXES MAN";
	return ss.str();
}

void tax::printSquare(int option){
	if (option == 4){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*                                        *\n");
		mvprintw(13,20,"*    * *   *   ***   ***   *   * *****   *\n");
		mvprintw(14,20,"*    * **  *  *     *   *  ** ** *       *\n");
		mvprintw(15,20,"*    * * * * *     *     * * * * ***     *\n");
		mvprintw(16,20,"*    * *  **  *     *   *  *   * *       *\n");
		mvprintw(17,20,"*    * *   *   ***   ***   *   * *****   *\n");
		mvprintw(18,20,"*                                        *\n");
		mvprintw(19,20,"*           ***** ***** *   *            *\n");
		mvprintw(20,20,"*             *   *   *  * *             *\n");
		mvprintw(21,20,"*             *   *****   *              *\n");
		mvprintw(22,20,"*             *   *   *  * *             *\n");
		mvprintw(23,20,"*             *   *   * *   *            *\n");
		mvprintw(24,20,"*                                        *\n");
		mvprintw(25,20,"*                                        *\n");
		mvprintw(26,20,"*                                        *\n");
		mvprintw(27,20,"*                PAY $200                *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*                                        *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	} else if (option == 38) {
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*                                        *\n");
		mvprintw(13,20,"*   *     *   * *   * *   * ***** *   *  *\n");
		mvprintw(14,20,"*   *     *   *  * *  *   * *   *  * *   *\n");
		mvprintw(15,20,"*   *     *   *   *   *   * *****   *    *\n");
		mvprintw(16,20,"*   *     *   *  * *  *   * * *     *    *\n");
		mvprintw(17,20,"*   ***** ***** *   * ***** *  *    *    *\n");
		mvprintw(18,20,"*                                        *\n");
		mvprintw(19,20,"*           ***** ***** *   *            *\n");
		mvprintw(20,20,"*             *   *   *  * *             *\n");
		mvprintw(21,20,"*             *   *****   *              *\n");
		mvprintw(22,20,"*             *   *   *  * *             *\n");
		mvprintw(23,20,"*             *   *   * *   *            *\n");
		mvprintw(24,20,"*                                        *\n");
		mvprintw(25,20,"*                                        *\n");
		mvprintw(26,20,"*                                        *\n");
		mvprintw(27,20,"*                PAY  $75                *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*                                        *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	}
}

bool tax::turnInSquare(bool hola){
	return hola;
}
