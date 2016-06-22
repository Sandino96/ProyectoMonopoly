#include "chance.h"
#include "square.h"
#include "player.h"
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <ncurses.h>

using std::string;
using std::stringstream;
using std::vector;

chance::chance(){
	this -> deck.push_back("Take a Ride on the reading (IF YOU PASS GO COLLECT $200)");
	this -> deck.push_back("ELECTED CHAIRMAN of the board PAY $50 TO YOUR OPONENT");
	this -> deck.push_back("Advance to Illinois Ave.");
	this -> deck.push_back("Advance to GO (COLLECT $200)");
	this -> deck.push_back("Your buildings and loan matures COLLECT $150");
	this -> deck.push_back("Advance to Boardwalk");
	this -> deck.push_back("Get out of Jail Free :3");
	this -> deck.push_back("Advance to ST. Charles Place (IF YOU PASS GO COLLECT $200)");
	this -> deck.push_back("PAY POOR TAX OF $15");
	this -> deck.push_back("Bank pays you dividend of $50");
	this -> deck.push_back("Go back 3 spaces");
	this -> deck.push_back("GOT TO JAIL :3");
}

chance::~chance(){

}

string chance::toString() const{
	stringstream ss;
	ss << "Take your chance -> Press any key";
	return ss.str();
}

void chance::printSquare(int option){
	if (option == 7 || option == 22 || option == 36){
		init_pair(1,COLOR_BLUE,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"******************************************\n");
		mvprintw(11,20,"*                                        *\n");
		mvprintw(12,20,"*                ???????                 *\n");
		mvprintw(13,20,"*               ??     ??                *\n");
		mvprintw(14,20,"*              ??       ??               *\n");
		mvprintw(15,20,"*               ??      ??               *\n");
		mvprintw(16,20,"*                      ??                *\n");
		mvprintw(17,20,"*                     ??                 *\n");
		mvprintw(18,20,"*                  ????                  *\n");
		mvprintw(19,20,"*                  ????                  *\n");
		mvprintw(20,20,"*                  ????                  *\n");
		mvprintw(21,20,"*                  ????                  *\n");
		mvprintw(22,20,"*                  ????                  *\n");
		mvprintw(23,20,"*                  ????                  *\n");
		mvprintw(24,20,"*                  ????                  *\n");
		mvprintw(25,20,"*                  ????                  *\n");
		mvprintw(26,20,"*                                        *\n");
		mvprintw(27,20,"*                   **                   *\n");
		mvprintw(28,20,"*                  ****                  *\n");
		mvprintw(29,20,"*                   **                   *\n");
		mvprintw(30,20,"*                                        *\n");
		mvprintw(31,20,"******************************************\n");
		attroff(COLOR_PAIR(1));
	}
}

void chance::drawACard(vector<square*> board, player* drawPlayer){
	int randomChance = rand() % this -> deck.size();
	if (randomChance == 0){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//reading
	} else if (randomChance == 1){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//50 oponent
	} else if (randomChance == 2){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//illinois
	} else if (randomChance == 3){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//go
	} else if (randomChance == 4){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());

	} else if (randomChance == 5){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
		drawPlayer -> setWallet(150);
	} else if (randomChance == 6){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//boardwalk
	} else if (randomChance == 7){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//getoutjail
	} else if (randomChance == 8){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//charlesplace
	} else if (randomChance == 9){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
		drawPlayer -> setWallet(-15);
	} else if (randomChance == 10){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
		drawPlayer -> setWallet(50);
	} else if (randomChance == 11){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
		drawPlayer -> setTurn(3);
	} else if (randomChance == 12){
		mvprintw(12,80,this -> deck.at(randomChance).c_str());
//jail
	}
}