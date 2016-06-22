#include <ncurses.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <typeinfo>
#include <fstream>
#include <cstdlib>
#include "square.h"
#include "services.h"
#include "railway.h"
#include "properties.h"
#include "avenues.h"
#include "player.h"
#include "go.h"
#include "jail.h"
#include "chance.h"
#include "tax.h"
#include "community.h"
#include "freeSquare.h"

using std::string;
using std::stringstream;
using std::vector;
using std::ofstream;
using std::ifstream;
using std::ios;

void boardPic();
void cleanScreen();
void drawDiceOne(int);
void drawDiceTwo(int);

int main(int argc, char*argv[]){
	initscr();
	start_color();
	char filename[80] = "Monopoly.bin";
	char key[1];
	vector <square*> board;
	bool game = true;
	while(game) {
		echo();
		boardPic();
		srand(time(0));
		move(4,80);
		printw("WELCOME TO MONOPOLY");
		move(8,80);
		printw("NEW GAME --> TAP N");
		move(10,80);
		printw("LOAD GAME -> TAP L");
		move(12,80);
		printw("EXIT ------> TAP E");
		move(14,80);
		printw("OPTION: ");
		getstr(key);
		cleanScreen();
		if(key[0] == 'n' || key[0] == 'N'){
			board.push_back(new go());
			board.push_back(new avenues(60,30,false,2));
			board.push_back(new community());
			board.push_back(new avenues(60,30,false,4));
			board.push_back(new tax());
			board.push_back(new railway(200,100,false,25));
			board.push_back(new avenues(100,50,false,6));
			board.push_back(new chance());
			board.push_back(new avenues(100,50,false,6));
			board.push_back(new avenues(120,60,false,8));
			board.push_back(new jail());
			board.push_back(new avenues(140,70,false,10));
			board.push_back(new services(150,75,false,0));
			board.push_back(new avenues(140,70,false,10));
			board.push_back(new avenues(160,80,false,12));
			board.push_back(new railway(200,100,false,25));
			board.push_back(new avenues(180,90,false,14));
			board.push_back(new community());
			board.push_back(new avenues(180,90,false,14));
			board.push_back(new avenues(200,100,false,16));
			board.push_back(new freeSquare());
			board.push_back(new avenues(220,110,false,18));
			board.push_back(new chance());
			board.push_back(new avenues(220,110,false,18));
			board.push_back(new avenues(240,120,false,20));
			board.push_back(new railway(200,100,false,25));
			board.push_back(new avenues(260,130,false,22));
			board.push_back(new avenues(260,130,false,22));
			board.push_back(new services(150,75,false,0));
			board.push_back(new avenues(280,140,false,24));
			board.push_back(new jail());
			board.push_back(new avenues(300,150,false,26));
			board.push_back(new avenues(300,150,false,26));
			board.push_back(new community());
			board.push_back(new avenues(320,160,false,28));
			board.push_back(new railway(200,100,false,25));
			board.push_back(new chance());
			board.push_back(new avenues(350,175,false,35));
			board.push_back(new tax());
			board.push_back(new avenues(400,200,false,50));
			char keyNew[1];
			char namePlayer1[50];
			char namePlayer2[50];
			move(4,80);
			printw("Name of player 1: ");
			getstr(namePlayer1);
			string namePlayer1String = static_cast<char*>(namePlayer1);
			move(6,80);
			printw("Name of player 2: ");
			getstr(namePlayer2);
			string namePlayer2String = static_cast<char*>(namePlayer2);
			player* player1 = new player(namePlayer1String);
			player* player2 = new player(namePlayer2String);
			mvprintw(8,80,player1 -> toString().c_str());
			mvprintw(10,80,player2 -> toString().c_str());
			mvprintw(12,80,"Start game? [Y=>Yes/N=>No]: ");
			getstr(keyNew);
			char keyPlayer[1];
			int dice1,dice2;
			int spaces;
			if(keyNew[0] == 'Y' || keyNew[0] == 'y'){
				cleanScreen();
				int playerTurn = 1;
				bool players = true, quick = false, gameOverPlayer1 = false, gameOverPlayer2 = false;
				while(players){
					if(playerTurn == 1 && !player1 -> isWinner(gameOverPlayer1) && !player2 -> isWinner(gameOverPlayer2)){
						mvprintw(4,80, "Player %d",playerTurn);
						mvprintw(4,89, player1 -> getName().c_str());
						mvprintw(5,80,"Choose your option...");
						mvprintw(6,80,"1.-Throwing dice\n");
						mvprintw(7,80,"2.-See your properties\n");
						mvprintw(8,80,"3.-See your data\n");
						mvprintw(9,80,"4.-Quick\n");
						mvprintw(10,80,"5.-Save game\n");
						mvprintw(11,80,"6.-End of the game\n");
						mvprintw(12,80,"Your option? -> ");
						getstr(keyPlayer);
						if(keyPlayer[0] == '1'){
							dice1 = (1 + rand() % 6);
							dice2 = (1 + rand() % 6);
							spaces = dice1 + dice2;
							player1 -> setTurn(spaces);
							init_pair(1, COLOR_BLACK, COLOR_WHITE);
							attron(COLOR_PAIR(1));
							drawDiceOne(dice1);
							drawDiceTwo(dice2);
							attroff(COLOR_PAIR(1));
							noecho();
							getch();
							cleanScreen();
							board.at(player1 -> getTurn()) -> printSquare(player1 -> getTurn());
							mvprintw(32,20, board.at(player1 -> getTurn()) -> toString().c_str());
							getch();
							echo();
							if(typeid(*board.at(player1 -> getTurn())) == typeid(avenues))
								static_cast<avenues*>(board.at(player1 -> getTurn())) -> buyProperty(board,player1,player2);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(railway))
								static_cast<railway*>(board.at(player1 -> getTurn())) -> buyProperty(board,player1,player2);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(services))
								static_cast<services*>(board.at(player1 -> getTurn())) -> buyProperty(board,player1,player2);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(chance))
								static_cast<chance*>(board.at(player1 -> getTurn())) -> drawACard(board,player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(community))
								static_cast<community*>(board.at(player1 -> getTurn())) -> drawACard(board,player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(go))
								static_cast<go*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(jail)){
								for (int i = 0; i < 3; i++)
										static_cast<jail*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							} else if(typeid(*board.at(player1 -> getTurn())) == typeid(freeSquare))
								static_cast<freeSquare*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(tax))
								static_cast<tax*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							getch();
							cleanScreen();
							playerTurn++;
						} else if (keyPlayer[0] == '2'){
							if((player1 -> getMayor()).empty())
								mvprintw(14,80,"You don't have any properties                                ");
							else {
								for (int i = 0; i < player1 -> getMayor().size(); i++)
									mvprintw(14+i,80,(player1 -> getMayor().at(i)) -> toString().c_str());
							}
						} else if (keyPlayer[0] == '3'){
							mvprintw(14,80,player1 -> toString().c_str());
						} else if (keyPlayer[0] == '4'){
							gameOverPlayer2 = true;
							mvprintw(14,80,"Player 1 quick, Player 2 is the winner");
							players = false;
						} else if (keyPlayer[0] == '5'){
							ofstream output(filename, ios::binary | ios::trunc);
							output.write(reinterpret_cast<char*>(&player1),sizeof(player1));
							output.write(reinterpret_cast<char*>(&player2),sizeof(player2));
							output.write(reinterpret_cast<char*>(&board),sizeof(board));
							mvprintw(13,80,"Save game, don't worry, your can play later :3");
							getch();
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						} else if (keyPlayer[0] == '6'){
							mvprintw(13,80,"Thanks for playing! :D");
							players = false;
						}
					} else if(playerTurn == 2 && !player1 -> isWinner(gameOverPlayer1) && !player2 -> isWinner(gameOverPlayer2)){
						mvprintw(4,80, "Player %d",playerTurn);
						mvprintw(4,89, player2 -> getName().c_str());
						mvprintw(5,80,"Choose your option...");
						mvprintw(6,80,"1.-Throwing dice\n");
						mvprintw(7,80,"2.-See your properties\n");
						mvprintw(8,80,"3.-See your data\n");
						mvprintw(9,80,"4.-Quick\n");
						mvprintw(10,80,"5.-Save game\n");
						mvprintw(11,80,"6.-End of the game\n");
						mvprintw(12,80,"Your option? -> ");
						getstr(keyPlayer);
						if(keyPlayer[0] == '1'){
							dice1 = (1 + rand() % 6);
							dice2 = (1 + rand() % 6);
							spaces = dice1 + dice2;
							player2 -> setTurn(spaces);
							init_pair(1, COLOR_BLACK, COLOR_WHITE);
							attron(COLOR_PAIR(1));
							drawDiceOne(dice1);
							drawDiceTwo(dice2);
							attroff(COLOR_PAIR(1));
							noecho();
							getch();
							cleanScreen();
							board.at(player2 -> getTurn()) -> printSquare(player2 -> getTurn());
							mvprintw(32,20, board.at(player2 -> getTurn()) -> toString().c_str());
							getch();
							echo();
							if(typeid(*board.at(player2 -> getTurn())) == typeid(avenues))
								static_cast<avenues*>(board.at(player2 -> getTurn())) -> buyProperty(board,player2,player1);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(railway))
								static_cast<railway*>(board.at(player2 -> getTurn())) -> buyProperty(board,player2,player1);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(services))
								static_cast<services*>(board.at(player2 -> getTurn())) -> buyProperty(board,player2,player1);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(chance))
								static_cast<chance*>(board.at(player2 -> getTurn())) -> drawACard(board,player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(community))
								static_cast<community*>(board.at(player2 -> getTurn())) -> drawACard(board,player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(go))
								static_cast<go*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(jail)){
								for (int i = 0; i < 3; i++)
										static_cast<jail*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							} else if(typeid(*board.at(player2 -> getTurn())) == typeid(freeSquare))
								static_cast<freeSquare*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(tax))
								static_cast<tax*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							getch();
							cleanScreen();
							playerTurn--;
						} else if (keyPlayer[0] == '2'){
							if((player2 -> getMayor()).empty())
								mvprintw(14,80,"You don't have properties                                   ");
							else {
								for (int i = 0; i < player2 -> getMayor().size(); i++)
									mvprintw(14+i,80,(player2 -> getMayor().at(i)) -> toString().c_str());
							}
						} else if (keyPlayer[0] == '3'){
							mvprintw(14,80,player2 -> toString().c_str());
						} else if (keyPlayer[0] == '4'){
							gameOverPlayer1 = true;
							mvprintw(14,80,"Player 2 quick, Player 1 is the winner");
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						} else if (keyPlayer[0] == '5'){
							ofstream output(filename, ios::binary | ios::trunc);
							output.write(reinterpret_cast<char*>(&player1),sizeof(player1));
							output.write(reinterpret_cast<char*>(&player2),sizeof(player2));
							output.write(reinterpret_cast<char*>(&board),sizeof(board));
							mvprintw(13,80,"Save game, don't worry, your can play later :3");
							getch();
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						} else if (keyPlayer[0] == '6'){
							mvprintw(13,80,"Thanks for playing! :D");
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						}
					}
				}
			}
			cleanScreen();
			noecho();
		} else if(key[0] == 'L' || key[0] == 'l'){
			ifstream input(filename, ios::binary);
			player* player1 = new player("");
			player* player2 = new player("");
			input.read(reinterpret_cast<char*>(&player1),sizeof(player1));
			input.read(reinterpret_cast<char*>(&player2),sizeof(player2));
			input.read(reinterpret_cast<char*>(&board),sizeof(board));
			input.close();
			cleanScreen();
			char keyNew[1];
			mvprintw(8,80,player1 -> toString().c_str());
			mvprintw(10,80,player2 -> toString().c_str());
			mvprintw(12,80,"Start game? [Y=>Yes/N=>No]: ");
			getstr(keyNew);
			char keyPlayer[1];
			int dice1,dice2;
			int spaces;
			if(keyNew[0] == 'Y' || keyNew[0] == 'y'){
				cleanScreen();
				int playerTurn = 1;
				bool players = true, quick = false, gameOverPlayer1 = false, gameOverPlayer2 = false;
				while(players){
					if(playerTurn == 1 && !player1 -> isWinner(gameOverPlayer1) && !player2 -> isWinner(gameOverPlayer2)){
						mvprintw(4,80, "Player %d",playerTurn);
						mvprintw(4,89, player1 -> getName().c_str());
						mvprintw(5,80,"Choose your option...");
						mvprintw(6,80,"1.-Throwing dice\n");
						mvprintw(7,80,"2.-See your properties\n");
						mvprintw(8,80,"3.-See your data\n");
						mvprintw(9,80,"4.-Quick\n");
						mvprintw(10,80,"5.-Save game\n");
						mvprintw(11,80,"6.-End of the game\n");
						mvprintw(12,80,"Your option? -> ");
						getstr(keyPlayer);
						if(keyPlayer[0] == '1'){
							cleanScreen();
							dice1 = (1 + rand() % 6);
							dice2 = (1 + rand() % 6);
							spaces = dice1 + dice2;
							player1 -> setTurn(spaces);
							init_pair(1, COLOR_BLACK, COLOR_WHITE);
							attron(COLOR_PAIR(1));
							drawDiceOne(dice1);
							drawDiceTwo(dice2);
							attroff(COLOR_PAIR(1));
							noecho();
							getch();
							cleanScreen();
							board.at(player1 -> getTurn()) -> printSquare(player1 -> getTurn());
							mvprintw(32,20, board.at(player1 -> getTurn()) -> toString().c_str());
							getch();
							echo();
							if(typeid(*board.at(player1 -> getTurn())) == typeid(avenues))
								static_cast<avenues*>(board.at(player1 -> getTurn())) -> buyProperty(board,player1,player2);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(railway))
								static_cast<railway*>(board.at(player1 -> getTurn())) -> buyProperty(board,player1,player2);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(services))
								static_cast<services*>(board.at(player1 -> getTurn())) -> buyProperty(board,player1,player2);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(chance))
								static_cast<chance*>(board.at(player1 -> getTurn())) -> drawACard(board,player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(community))
								static_cast<community*>(board.at(player1 -> getTurn())) -> drawACard(board,player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(go))
								static_cast<go*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(jail)){
								for (int i = 0; i < 3; i++)
										static_cast<jail*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							} else if(typeid(*board.at(player1 -> getTurn())) == typeid(freeSquare))
								static_cast<freeSquare*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							else if(typeid(*board.at(player1 -> getTurn())) == typeid(tax))
								static_cast<tax*>(board.at(player1 -> getTurn())) -> playerInSquare(player1);
							getch();
							cleanScreen();
							playerTurn++;
						} else if (keyPlayer[0] == '2'){
							if((player1 -> getMayor()).empty())
								mvprintw(14,80,"You don't have any properties                                ");
							else {
								for (int i = 0; i < player1 -> getMayor().size(); i++)
									mvprintw(14+i,80,(player1 -> getMayor().at(i)) -> toString().c_str());
							}
						} else if (keyPlayer[0] == '3'){
							mvprintw(14,80,player1 -> toString().c_str());
						} else if (keyPlayer[0] == '4'){
							gameOverPlayer2 = true;
							mvprintw(14,80,"Player 1 quick, Player 2 is the winner");
							players = false;
						} else if (keyPlayer[0] == '5'){
							ofstream output(filename, ios::binary | ios::trunc);
							output.write(reinterpret_cast<char*>(&player1),sizeof(player1));
							output.write(reinterpret_cast<char*>(&player2),sizeof(player2));
							output.write(reinterpret_cast<char*>(&board),sizeof(board));
							mvprintw(13,80,"Save game, don't worry, your can play later :3");
							getch();
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						} else if (keyPlayer[0] == '6'){
							mvprintw(13,80,"Thanks for playing! :D");
							players = false;
						}
					} else if(playerTurn == 2 && !player1 -> isWinner(gameOverPlayer1) && !player2 -> isWinner(gameOverPlayer2)){
						mvprintw(4,80, "Player %d",playerTurn);
						mvprintw(4,89, player2 -> getName().c_str());
						mvprintw(5,80,"Choose your option...");
						mvprintw(6,80,"1.-Throwing dice\n");
						mvprintw(7,80,"2.-See your properties\n");
						mvprintw(8,80,"3.-See your data\n");
						mvprintw(9,80,"4.-Quick\n");
						mvprintw(10,80,"5.-Save game\n");
						mvprintw(11,80,"6.-End of the game\n");
						mvprintw(12,80,"Your option? -> ");
						getstr(keyPlayer);
						if(keyPlayer[0] == '1'){
							dice1 = (1 + rand() % 6);
							dice2 = (1 + rand() % 6);
							spaces = dice1 + dice2;
							player2 -> setTurn(spaces);
							init_pair(1, COLOR_BLACK, COLOR_WHITE);
							attron(COLOR_PAIR(1));
							drawDiceOne(dice1);
							drawDiceTwo(dice2);
							attroff(COLOR_PAIR(1));
							noecho();
							getch();
							cleanScreen();
							board.at(player2 -> getTurn()) -> printSquare(player2 -> getTurn());
							mvprintw(32,20, board.at(player2 -> getTurn()) -> toString().c_str());
							getch();
							echo();
							if(typeid(*board.at(player2 -> getTurn())) == typeid(avenues))
								static_cast<avenues*>(board.at(player2 -> getTurn())) -> buyProperty(board,player2,player1);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(railway))
								static_cast<railway*>(board.at(player2 -> getTurn())) -> buyProperty(board,player2,player1);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(services))
								static_cast<services*>(board.at(player2 -> getTurn())) -> buyProperty(board,player2,player1);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(chance))
								static_cast<chance*>(board.at(player2 -> getTurn())) -> drawACard(board,player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(community))
								static_cast<community*>(board.at(player2 -> getTurn())) -> drawACard(board,player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(go))
								static_cast<go*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(jail)){
								for (int i = 0; i < 3; i++)
										static_cast<jail*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							} else if(typeid(*board.at(player2 -> getTurn())) == typeid(freeSquare))
								static_cast<freeSquare*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							else if(typeid(*board.at(player2 -> getTurn())) == typeid(tax))
								static_cast<tax*>(board.at(player2 -> getTurn())) -> playerInSquare(player2);
							getch();
							cleanScreen();
							playerTurn--;
						} else if (keyPlayer[0] == '2'){
							if((player2 -> getMayor()).empty())
								mvprintw(14,80,"You don't have properties                                   ");
							else {
								for (int i = 0; i < player2 -> getMayor().size(); i++)
									mvprintw(14+i,80,(player2 -> getMayor().at(i)) -> toString().c_str());
							}
						} else if (keyPlayer[0] == '3'){
							mvprintw(14,80,player2 -> toString().c_str());
						} else if (keyPlayer[0] == '4'){
							gameOverPlayer1 = true;
							mvprintw(14,80,"Player 2 quick, Player 1 is the winner");
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						} else if (keyPlayer[0] == '5'){
							ofstream output(filename, ios::binary | ios::trunc);
							output.write(reinterpret_cast<char*>(&player1),sizeof(player1));
							output.write(reinterpret_cast<char*>(&player2),sizeof(player2));
							output.write(reinterpret_cast<char*>(&board),sizeof(board));
							mvprintw(13,80,"Save game, don't worry, your can play later :3");
							getch();
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						} else if (keyPlayer[0] == '6'){
							mvprintw(13,80,"Thanks for playing! :D");
							for (int i = 0; i < board.size(); i++)
								delete board.at(i);
							players = false;
						}
					} else if(player1 -> isWinner(gameOverPlayer1))
						mvprintw(14,80,"Player " , player1 -> toString().c_str() , " are the winner :3");
					else if(player2 -> isWinner(gameOverPlayer2))
						mvprintw(14,80,"Player " , player2 -> toString().c_str() , " are the winner :3");
				}
			}
			cleanScreen();
			noecho();
			for (int i = 0; i < board.size(); i++)
				delete board.at(i);
		}else if (key[0] == 'E' || key[0] == 'e'){
			
			endwin();
			game = false;
		}
	}
	return 0;
}

void boardPic(){
	move(1,1);
}

void drawDiceOne(int dice1){
	if (dice1 == 1){
		mvprintw(1,3,"*******************************\n");
		mvprintw(2,3,"*                             *\n");
		mvprintw(3,3,"*                             *\n");
		mvprintw(4,3,"*                             *\n");
		mvprintw(5,3,"*                             *\n");
		mvprintw(6,3,"*                             *\n");
		mvprintw(7,3,"*             ***             *\n");
		mvprintw(8,3,"*             ***             *\n");
		mvprintw(9,3,"*             ***             *\n");
		mvprintw(10,3,"*                             *\n");
		mvprintw(11,3,"*                             *\n");
		mvprintw(12,3,"*                             *\n");
		mvprintw(13,3,"*                             *\n");
		mvprintw(14,3,"*                             *\n");
		mvprintw(15,3,"*******************************\n");
	} else if (dice1 == 2){
		mvprintw(1,3,"*******************************\n");
		mvprintw(2,3,"*                             *\n");
		mvprintw(3,3,"*                             *\n");
		mvprintw(4,3,"*                             *\n");
		mvprintw(5,3,"*                             *\n");
		mvprintw(6,3,"*                             *\n");
		mvprintw(7,3,"*      ***           ***      *\n");
		mvprintw(8,3,"*      ***           ***      *\n");
		mvprintw(9,3,"*      ***           ***      *\n");
		mvprintw(10,3,"*                             *\n");
		mvprintw(11,3,"*                             *\n");
		mvprintw(12,3,"*                             *\n");
		mvprintw(13,3,"*                             *\n");
		mvprintw(14,3,"*                             *\n");
		mvprintw(15,3,"*******************************\n");
	} else if (dice1 == 3) {
		mvprintw(1,3,"*******************************\n");
		mvprintw(2,3,"*                             *\n");
		mvprintw(3,3,"*     ***                     *\n");
		mvprintw(4,3,"*     ***                     *\n");
		mvprintw(5,3,"*     ***                     *\n");
		mvprintw(6,3,"*                             *\n");
		mvprintw(7,3,"*             ***             *\n");
		mvprintw(8,3,"*             ***             *\n");
		mvprintw(9,3,"*             ***             *\n");
		mvprintw(10,3,"*                             *\n");
		mvprintw(11,3,"*                     ***     *\n");
		mvprintw(12,3,"*                     ***     *\n");
		mvprintw(13,3,"*                     ***     *\n");
		mvprintw(14,3,"*                             *\n");
		mvprintw(15,3,"*******************************\n");
	} else if (dice1 == 4) {
		mvprintw(1,3,"*******************************\n");
		mvprintw(2,3,"*                             *\n");
		mvprintw(3,3,"*     ***             ***     *\n");
		mvprintw(4,3,"*     ***             ***     *\n");
		mvprintw(5,3,"*     ***             ***     *\n");
		mvprintw(6,3,"*                             *\n");
		mvprintw(7,3,"*                             *\n");
		mvprintw(8,3,"*                             *\n");
		mvprintw(9,3,"*                             *\n");
		mvprintw(10,3,"*                             *\n");
		mvprintw(11,3,"*     ***             ***     *\n");
		mvprintw(12,3,"*     ***             ***     *\n");
		mvprintw(13,3,"*     ***             ***     *\n");
		mvprintw(14,3,"*                             *\n");
		mvprintw(15,3,"*******************************\n");
	} else if (dice1 == 5) {
		mvprintw(1,3,"*******************************\n");
		mvprintw(2,3,"*                             *\n");
		mvprintw(3,3,"*     ***             ***     *\n");
		mvprintw(4,3,"*     ***             ***     *\n");
		mvprintw(5,3,"*     ***             ***     *\n");
		mvprintw(6,3,"*                             *\n");
		mvprintw(7,3,"*             ***             *\n");
		mvprintw(8,3,"*             ***             *\n");
		mvprintw(9,3,"*             ***             *\n");
		mvprintw(10,3,"*                             *\n");
		mvprintw(11,3,"*     ***             ***     *\n");
		mvprintw(12,3,"*     ***             ***     *\n");
		mvprintw(13,3,"*     ***             ***     *\n");
		mvprintw(14,3,"*                             *\n");
		mvprintw(15,3,"*******************************\n");
	} else if (dice1 == 6) {
		mvprintw(1,3,"*******************************\n");
		mvprintw(1,3,"*                             *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*                             *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*                             *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*     ***             ***     *\n");
		mvprintw(1,3,"*                             *\n");
		mvprintw(1,3,"*******************************\n");
	}
}

void drawDiceTwo(int dice2){
	if (dice2 == 1){
		mvprintw(1,36,"*******************************\n");
		mvprintw(2,36,"*                             *\n");
		mvprintw(3,36,"*                             *\n");
		mvprintw(4,36,"*                             *\n");
		mvprintw(5,36,"*                             *\n");
		mvprintw(6,36,"*                             *\n");
		mvprintw(7,36,"*             ***             *\n");
		mvprintw(8,36,"*             ***             *\n");
		mvprintw(9,36,"*             ***             *\n");
		mvprintw(10,36,"*                             *\n");
		mvprintw(11,36,"*                             *\n");
		mvprintw(12,36,"*                             *\n");
		mvprintw(13,36,"*                             *\n");
		mvprintw(14,36,"*                             *\n");
		mvprintw(15,36,"*******************************\n");
	} else if (dice2 == 2){
		mvprintw(1,36,"*******************************\n");
		mvprintw(2,36,"*                             *\n");
		mvprintw(3,36,"*                             *\n");
		mvprintw(4,36,"*                             *\n");
		mvprintw(5,36,"*                             *\n");
		mvprintw(6,36,"*                             *\n");
		mvprintw(7,36,"*      ***           ***      *\n");
		mvprintw(8,36,"*      ***           ***      *\n");
		mvprintw(9,36,"*      ***           ***      *\n");
		mvprintw(10,36,"*                             *\n");
		mvprintw(11,36,"*                             *\n");
		mvprintw(12,36,"*                             *\n");
		mvprintw(13,36,"*                             *\n");
		mvprintw(14,36,"*                             *\n");
		mvprintw(15,36,"*******************************\n");
	} else if (dice2 == 3) {
		mvprintw(1,36,"*******************************\n");
		mvprintw(2,36,"*                             *\n");
		mvprintw(3,36,"*     ***                     *\n");
		mvprintw(4,36,"*     ***                     *\n");
		mvprintw(5,36,"*     ***                     *\n");
		mvprintw(6,36,"*                             *\n");
		mvprintw(7,36,"*             ***             *\n");
		mvprintw(8,36,"*             ***             *\n");
		mvprintw(9,36,"*             ***             *\n");
		mvprintw(10,36,"*                             *\n");
		mvprintw(11,36,"*                     ***     *\n");
		mvprintw(12,36,"*                     ***     *\n");
		mvprintw(13,36,"*                     ***     *\n");
		mvprintw(14,36,"*                             *\n");
		mvprintw(15,36,"*******************************\n");
	} else if (dice2 == 4) {
		mvprintw(1,36,"*******************************\n");
		mvprintw(2,36,"*                             *\n");
		mvprintw(3,36,"*     ***             ***     *\n");
		mvprintw(4,36,"*     ***             ***     *\n");
		mvprintw(5,36,"*     ***             ***     *\n");
		mvprintw(6,36,"*                             *\n");
		mvprintw(7,36,"*                             *\n");
		mvprintw(8,36,"*                             *\n");
		mvprintw(9,36,"*                             *\n");
		mvprintw(10,36,"*                             *\n");
		mvprintw(11,36,"*     ***             ***     *\n");
		mvprintw(12,36,"*     ***             ***     *\n");
		mvprintw(13,36,"*     ***             ***     *\n");
		mvprintw(14,36,"*                             *\n");
		mvprintw(15,36,"*******************************\n");
	} else if (dice2 == 5) {
		mvprintw(1,36,"*******************************\n");
		mvprintw(2,36,"*                             *\n");
		mvprintw(3,36,"*     ***             ***     *\n");
		mvprintw(4,36,"*     ***             ***     *\n");
		mvprintw(5,36,"*     ***             ***     *\n");
		mvprintw(6,36,"*                             *\n");
		mvprintw(7,36,"*             ***             *\n");
		mvprintw(8,36,"*             ***             *\n");
		mvprintw(9,36,"*             ***             *\n");
		mvprintw(10,36,"*                             *\n");
		mvprintw(11,36,"*     ***             ***     *\n");
		mvprintw(12,36,"*     ***             ***     *\n");
		mvprintw(13,36,"*     ***             ***     *\n");
		mvprintw(14,36,"*                             *\n");
		mvprintw(15,36,"*******************************\n");
	} else if (dice2 == 6) {
		mvprintw(1,36,"*******************************\n");
		mvprintw(2,36,"*                             *\n");
		mvprintw(3,36,"*     ***             ***     *\n");
		mvprintw(4,36,"*     ***             ***     *\n");
		mvprintw(5,36,"*     ***             ***     *\n");
		mvprintw(6,36,"*                             *\n");
		mvprintw(7,36,"*     ***             ***     *\n");
		mvprintw(8,36,"*     ***             ***     *\n");
		mvprintw(9,36,"*     ***             ***     *\n");
		mvprintw(10,36,"*                             *\n");
		mvprintw(11,36,"*     ***             ***     *\n");
		mvprintw(12,36,"*     ***             ***     *\n");
		mvprintw(13,36,"*     ***             ***     *\n");
		mvprintw(14,36,"*                             *\n");
		mvprintw(15,36,"*******************************\n");
	}
}

void cleanScreen(){
	for (int i = 0; i < LINES; i++){
		for (int j = 0; j < COLS; j++){
			mvprintw(i,j," ");
		}
	}
}