#include "railway.h"
#include "properties.h"
#include "player.h"
#include <string>
#include <typeinfo>
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

void railway::buyProperty(vector<square*> board,player* player1,player* player2){
	if(static_cast<properties*>(board.at(player1 -> getTurn())) -> getOwner()){
		bool haveIt = false;
		for (int i = 0; i < (player1 -> getMayor()).size(); i++){
			if(player1 -> getMayor().at(i) == (board.at(player1 -> getTurn())))
				haveIt = true;
		}
		if (haveIt)
			mvprintw(10,80,"This railway is yours");
		else {
			mvprintw(10,80,"This railway is owned by -> ",player2 -> getName().c_str());
			int counterRailways = 0;
			for (int i = 0; i < player2 -> getMayor().size(); i++){
				if (typeid(*player2 -> getMayor().at(i)) == typeid(railway))
					counterRailways++;
			}
			player2 -> setWallet((static_cast<properties*>(board.at(player1 -> getTurn()))) -> getRent() * counterRailways);
			player1 -> setWallet((static_cast<properties*>(board.at(player1 -> getTurn())) -> getRent()) * -1 * counterRailways);
			mvprintw(12,80,"Pay of rent %d",(static_cast<properties*>(board.at(player1 -> getTurn())) -> getRent()) * -1 * counterRailways);
			if(((static_cast<properties*>(board.at(player1 -> getTurn())) -> getRent()) * -1 * counterRailways) > player1 -> getWallet()){
				mvprintw(12,80,"You are a loser, you are broke :3");
				player2 -> isWinner(true);
			}
		}
	} else {
		char keyProperty[1];
		mvprintw(10,80,"Choose your option");
		mvprintw(12,80,"1.-Sale this railway");
		mvprintw(14,80,"2.-Ignore this and move on");
		mvprintw(16,80,"Your option -> ");
		getstr(keyProperty);
		if(keyProperty[0] == '1'){
			char keyPropertyConfirm[1];
			mvprintw(18,80,"Are you sure do you want to sale this railway? [Y=Yes/N=No]");
			getstr(keyPropertyConfirm);
			if(keyPropertyConfirm[0] == 'Y' || keyPropertyConfirm[0] == 'y'){
				if(player1 -> getWallet() > static_cast<properties*>(board.at(player1 -> getTurn())) -> getPrice()){
					player1 -> setWallet((static_cast<properties*>(board.at(player1 -> getTurn())) -> getPrice()) * -1);
					mvprintw(20,80,"This railway has been sale for you :3");
					(player1 -> setMayor(static_cast<properties*>(board.at(player1 -> getTurn()))));
					static_cast<properties*>(board.at(player1 -> getTurn())) -> setOwner(true);
				}
			} else if(keyPropertyConfirm[0] == 'N' || keyPropertyConfirm[0] == 'n')
				mvprintw(18,80,"Ok, thanks for coming :3");
		} else if (keyProperty[0] == '2'){
			mvprintw(18,80,"Ok, get out of here then >.<");
		}
	}
}