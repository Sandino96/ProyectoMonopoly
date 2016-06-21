#include "railway.h"
#include "properties.h"
#include <string>
#include <ncurses.h>
#include <sstream>

using std::string;
using std::stringstream;

railway::railway(double price,double mortgaged,bool owner,double rent):properties(price,mortgaged,owner,rent){
}

railway::~railway(){
}

string railway::toString() const{
	stringstream ss;
	ss << "Price $" << price << " Have owner -> ";
	if(owner){
		ss << "Yes";
	} else {
		ss << "No";
	}
	return ss.str();
}

void railway::printSquare(int option){
	if(option == 5){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*               ***      ****            *\n");
		mvprintw(13,20,"*               *        ***             *\n");
		mvprintw(14,20,"*               *************            *\n");
		mvprintw(15,20,"*              ***************           *\n");
		mvprintw(16,20,"*               ***************          *\n");
		mvprintw(17,20,"*                *  ***    ***           *\n");
		mvprintw(18,20,"*               ** *****  *****          *\n");
		mvprintw(19,20,"*              ***  ***    ***           *\n");
		mvprintw(20,20,"*   ----------------------------------   *\n");
		mvprintw(21,20,"*             B. & O. Railroad           *\n");
		mvprintw(22,20,"*   ----------------------------------   *\n");
		mvprintw(23,20,"*                                        *\n");
		mvprintw(24,20,"*      Rent        ------>        $25    *\n");
		mvprintw(25,20,"*      If 2 R.R.'s are owned -->  $50    *\n");
		mvprintw(26,20,"*      If 3 R.R.'s are owned --> $100    *\n");
		mvprintw(27,20,"*      If 4 R.R.'s are owned --> $150    *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*         Mortgage Value ---> $100       *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	} else if (option == 15){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*               ***      ****            *\n");
		mvprintw(13,20,"*               *        ***             *\n");
		mvprintw(14,20,"*               *************            *\n");
		mvprintw(15,20,"*              ***************           *\n");
		mvprintw(16,20,"*               ***************          *\n");
		mvprintw(17,20,"*                *  ***    ***           *\n");
		mvprintw(18,20,"*               ** *****  *****          *\n");
		mvprintw(19,20,"*              ***  ***    ***           *\n");
		mvprintw(20,20,"*   ----------------------------------   *\n");
		mvprintw(21,20,"*             Short Line R. R.           *\n");
		mvprintw(22,20,"*   ----------------------------------   *\n");
		mvprintw(23,20,"*                                        *\n");
		mvprintw(24,20,"*      Rent        ------>        $25    *\n");
		mvprintw(25,20,"*      If 2 R.R.'s are owned -->  $50    *\n");
		mvprintw(26,20,"*      If 3 R.R.'s are owned --> $100    *\n");
		mvprintw(27,20,"*      If 4 R.R.'s are owned --> $150    *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*         Mortgage Value ---> $100       *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	} else if (option == 25){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*               ***      ****            *\n");
		mvprintw(13,20,"*               *        ***             *\n");
		mvprintw(14,20,"*               *************            *\n");
		mvprintw(15,20,"*              ***************           *\n");
		mvprintw(16,20,"*               ***************          *\n");
		mvprintw(17,20,"*                *  ***    ***           *\n");
		mvprintw(18,20,"*               ** *****  *****          *\n");
		mvprintw(19,20,"*              ***  ***    ***           *\n");
		mvprintw(20,20,"*   ----------------------------------   *\n");
		mvprintw(21,20,"*             Reading Railroad           *\n");
		mvprintw(22,20,"*   ----------------------------------   *\n");
		mvprintw(23,20,"*                                        *\n");
		mvprintw(24,20,"*      Rent        ------>        $25    *\n");
		mvprintw(25,20,"*      If 2 R.R.'s are owned -->  $50    *\n");
		mvprintw(26,20,"*      If 3 R.R.'s are owned --> $100    *\n");
		mvprintw(27,20,"*      If 4 R.R.'s are owned --> $150    *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*         Mortgage Value ---> $100       *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	} else if (option == 35){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*               ***      ****            *\n");
		mvprintw(13,20,"*               *        ***             *\n");
		mvprintw(14,20,"*               *************            *\n");
		mvprintw(15,20,"*              ***************           *\n");
		mvprintw(16,20,"*               ***************          *\n");
		mvprintw(17,20,"*                *  ***    ***           *\n");
		mvprintw(18,20,"*               ** *****  *****          *\n");
		mvprintw(19,20,"*              ***  ***    ***           *\n");
		mvprintw(20,20,"*   ----------------------------------   *\n");
		mvprintw(21,20,"*            Pennsylvania R. R.          *\n");
		mvprintw(22,20,"*   ----------------------------------   *\n");
		mvprintw(23,20,"*                                        *\n");
		mvprintw(24,20,"*      Rent        ------>        $25    *\n");
		mvprintw(25,20,"*      If 2 R.R.'s are owned -->  $50    *\n");
		mvprintw(26,20,"*      If 3 R.R.'s are owned --> $100    *\n");
		mvprintw(27,20,"*      If 4 R.R.'s are owned --> $150    *\n");
		mvprintw(28,20,"*                                        *\n");
		mvprintw(29,20,"*         Mortgage Value ---> $100       *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	}
}

void railway::turnInSquare(vector <square*> board, player& player1, player& player2){
	
}