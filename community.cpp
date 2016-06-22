#include "community.h"
#include "square.h"
#include "player.h"
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <ncurses.h>

using std::string;
using std::stringstream;

community::community(){
	this -> deck.push_back("Income tax refound COLLECT $20");
	this -> deck.push_back("Receive for services $25");
	this -> deck.push_back("Doctor's fee PAY $50");
	this -> deck.push_back("YOU INHERIT $100");
	this -> deck.push_back("XMAS FUND MATURES COLLECT $100");
	this -> deck.push_back("Collect $50 from your oponent for opening night seats");
	this -> deck.push_back("Bank error in your favor COLLECT $200");
	this -> deck.push_back("GO TO JAIL :3");
	this -> deck.push_back("You have won second prize in a beauty contest COLLECT $10");
	this -> deck.push_back("PAY HOSPITAL $100");
	this -> deck.push_back("GET OUT OF JAIL FREE");
	this -> deck.push_back("From sale of stock you get $45");
	this -> deck.push_back("ADVANCE TO GO (COLLECT $200)");
	this -> deck.push_back("Life insurance matures COLLECT $100");
	this -> deck.push_back("Pay school tax of $150");
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

void community::drawACard(vector<square*> board,player* drawPlayer){
	int randomCommunity = rand() % this -> deck.size();
	if (randomCommunity == 0){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(20);
	} else if (randomCommunity == 1){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(15);
	} else if (randomCommunity == 2){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(-50);
	} else if (randomCommunity == 3){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(100);
	} else if (randomCommunity == 4){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(100);
	} else if (randomCommunity == 5){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(50);
	} else if (randomCommunity == 6){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(200);
	} else if (randomCommunity == 7){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
//jail
	} else if (randomCommunity == 8){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(10);
	} else if (randomCommunity == 9){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(-100);
	} else if (randomCommunity == 10){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
//getoutjail
	} else if (randomCommunity == 11){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(45);
	} else if (randomCommunity == 12){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
//go
	} else if (randomCommunity == 13){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(100);
	} else if (randomCommunity == 14){
		mvprintw(12,80,this -> deck.at(randomCommunity).c_str());
		drawPlayer -> setWallet(-150);
	}
}
