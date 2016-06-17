#include <ncurses.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stdlib.h>
#include "properties.h"
#include "avenues.h"
#include "player.h"

using std::string;
using std::stringstream;

void boardPic();
string diceOne(int);
string diceTwo(int);

int main(int argc, char*argv[]){
	initscr();
	start_color();
	char key[1];
	bool game = true;
	while(game) {
		echo();
		boardPic();
		srand(time(0));
		move(4,60);
		printw("WELCOME TO MONOPOLY");
		move(8,60);
		printw("NEW GAME --> TAP N");
		move(10,60);
		printw("LOAD GAME -> TAP L");
		move(12,60);
		printw("EXIT ------> TAP E");
		move(14,60);
		printw("OPTION: ");
		getstr(key);
		system("clear");
		if(key[0] == 'n' || key[0] == 'N'){
			char namePlayer1[50];
			char namePlayer2[50];
			move(16,60);
			printw("Name of player 1: ");
			getstr(namePlayer1);
			string namePlayer1String = static_cast<char*>(namePlayer1);
			move(18,60);
			printw("Name of player 2: ");
			getstr(namePlayer2);
			string namePlayer2String = static_cast<char*>(namePlayer2);
			player* player1 = new player(namePlayer1String);
			player* player2 = new player(namePlayer2String);
			move(19,60);
			printw(player1 -> toString().c_str());
			move(20,60);
			printw(player2 -> toString().c_str());
			int dice1 = (1 + rand() % 6), dice2 = (1 + rand() % 6);
			int spaces = dice1 + dice2;
			move(1,0);
			init_pair(1, COLOR_BLACK, COLOR_WHITE);
			attron(COLOR_PAIR(1));
			printw(diceOne(dice1).c_str());
			printw("\n");
			init_pair(1, COLOR_BLACK, COLOR_WHITE);
			attron(COLOR_PAIR(1));
			printw(diceTwo(dice2).c_str());
			attroff(COLOR_PAIR(1));
			noecho();
		} //else if(){

		else if (key[0] == 'E' || key[0] == 'e'){
			endwin();
			game = false;
		}
	}
	return 0;
}

void boardPic(){
	move(1,1);
}

string diceOne(int dice1){
	stringstream ss;
	if (dice1 == 1){
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice1 == 2){
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*      ***           ***      *\n";
		ss << "*      ***           ***      *\n";
		ss << "*      ***           ***      *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice1 == 3) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***                     *\n";
		ss << "*     ***                     *\n";
		ss << "*     ***                     *\n";
		ss << "*                             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*                             *\n";
		ss << "*                     ***     *\n";
		ss << "*                     ***     *\n";
		ss << "*                     ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice1 == 4) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice1 == 5) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice1 == 6) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	}
}

string diceTwo(int dice2){
	stringstream ss;
	if (dice2 == 1){
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice2 == 2){
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*      ***           ***      *\n";
		ss << "*      ***           ***      *\n";
		ss << "*      ***           ***      *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice2 == 3) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***                     *\n";
		ss << "*     ***                     *\n";
		ss << "*     ***                     *\n";
		ss << "*                             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*                             *\n";
		ss << "*                     ***     *\n";
		ss << "*                     ***     *\n";
		ss << "*                     ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice2 == 4) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice2 == 5) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*             ***             *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	} else if (dice2 == 6) {
		ss << "*******************************\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*     ***             ***     *\n";
		ss << "*                             *\n";
		ss << "*******************************\n";
		return ss.str();
	}
}