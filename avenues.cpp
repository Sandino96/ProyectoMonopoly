#include "avenues.h"
#include "player.h"
#include "properties.h"
#include <ncurses.h>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

avenues::avenues(double price, double mortgaged,bool owner,double rent):properties(price,mortgaged,owner,rent){
}

avenues::~avenues(){
}

void avenues::printSquare(int option){
	if(option == 1){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_WHITE,COLOR_BLACK);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*           Mediterranean Ave.         *\n");
		mvprintw(13,20,"*                                      *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*                Rent $2               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $10      *\n");
		mvprintw(20,20,"*       with 2 houses---->    $30      *\n");
		mvprintw(21,20,"*       with 3 houses---->    $90      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $160      *\n");
		mvprintw(23,20,"*       with hotel------->   $250      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $30          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 3){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_WHITE,COLOR_BLACK);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*               Baltic Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*                Rent $4               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $20      *\n");
		mvprintw(20,20,"*       with 2 houses---->    $60      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $180      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $320      *\n");
		mvprintw(23,20,"*       with hotel------->   $450      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $30          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 6){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_MAGENTA);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*              Vermont Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*                Rent $6               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $30      *\n");
		mvprintw(20,20,"*       with 2 houses---->    $90      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $270      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $400      *\n");
		mvprintw(23,20,"*       with hotel------->   $550      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $50          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 8){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_MAGENTA);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*             Oriental Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*                Rent $6               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $30      *\n");
		mvprintw(20,20,"*       with 2 houses---->    $90      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $270      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $400      *\n");
		mvprintw(23,20,"*       with hotel------->   $550      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $50          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 9){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_MAGENTA);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*            Connecticut Ave.          *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*                Rent $8               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $40      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $100      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $300      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $450      *\n");
		mvprintw(23,20,"*       with hotel------->   $600      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $60          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 11){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*               States Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $10               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $50      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $150      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $450      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $650      *\n");
		mvprintw(23,20,"*       with hotel------->   $750      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $70          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 13){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*           ST. Charles Place          *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $10               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $50      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $150      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $450      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $625      *\n");
		mvprintw(23,20,"*       with hotel------->   $750      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $70          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 14){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		attron(COLOR_PAIR(1));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*              Virginia Ave.           *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $12               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $60      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $180      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $500      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $700      *\n");
		mvprintw(23,20,"*       with hotel------->   $900      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $80          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	}else if(option == 16){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_CYAN);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*              New York Ave.           *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $16               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $80      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $220      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $600      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $800      *\n");
		mvprintw(23,20,"*       with hotel------->  $1000      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*         Mortgage Value $100          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 18){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_CYAN);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*             Tennessee Ave.           *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $14               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $70      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $200      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $550      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $750      *\n");
		mvprintw(23,20,"*       with hotel------->   $950      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $90          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 19){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_CYAN);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*            ST. James Place           *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $14               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $70      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $200      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $550      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $750      *\n");
		mvprintw(23,20,"*       with hotel------->   $950      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $90          *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 21){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_RED);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*              Kentucky Ave.           *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $18               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $90      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $250      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $700      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $875      *\n");
		mvprintw(23,20,"*       with hotel------->  $1050      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $110         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 23){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_RED);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*              Indiana Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $18               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->    $90      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $250      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $700      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $875      *\n");
		mvprintw(23,20,"*       with hotel------->  $1050      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $110         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 24){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_RED);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*             Illionis Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $20               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $100      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $300      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $750      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $925      *\n");
		mvprintw(23,20,"*       with hotel------->  $1100      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $120         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 26){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_YELLOW);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*             Atlantic Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $22               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $110      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $330      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $800      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $975      *\n");
		mvprintw(23,20,"*       with hotel------->  $1150      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $130         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 27){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_YELLOW);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*             Ventnor Ave.             *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $22               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $110      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $330      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $800      *\n");
		mvprintw(22,20,"*       with 4 houses---->   $975      *\n");
		mvprintw(23,20,"*       with hotel------->  $1150      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $130         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 29){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_YELLOW);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*             Marvin Gardens           *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $24               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $120      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $360      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $850      *\n");
		mvprintw(22,20,"*       with 4 houses---->  $1025      *\n");
		mvprintw(23,20,"*       with hotel------->  $1200      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $140         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 31){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_GREEN);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*            No. Carolina Ave.         *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $26               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $130      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $390      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $900      *\n");
		mvprintw(22,20,"*       with 4 houses---->  $1100      *\n");
		mvprintw(23,20,"*       with hotel------->  $1275      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $150         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 32){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_GREEN);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*              Pacific Ave.            *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $26               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $130      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $390      *\n");
		mvprintw(21,20,"*       with 3 houses---->   $900      *\n");
		mvprintw(22,20,"*       with 4 houses---->  $1100      *\n");
		mvprintw(23,20,"*       with hotel------->  $1275      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $150         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 34){
 		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_GREEN);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*           Pennsylvania Ave.          *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $28               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $150      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $450      *\n");
		mvprintw(21,20,"*       with 3 houses---->  $1000      *\n");
		mvprintw(22,20,"*       with 4 houses---->  $1200      *\n");
		mvprintw(23,20,"*       with hotel------->  $1400      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $160         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 37){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_BLUE);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*               Park Place             *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $35               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $175      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $500      *\n");
		mvprintw(21,20,"*       with 3 houses---->  $1100      *\n");
		mvprintw(22,20,"*       with 4 houses---->  $1300      *\n");
		mvprintw(23,20,"*       with hotel------->  $1500      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $175         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	} else if(option == 39){
		init_pair(1,COLOR_BLACK,COLOR_WHITE);
		init_pair(2,COLOR_BLACK,COLOR_BLUE);
		attron(COLOR_PAIR(2));
		mvprintw(10,20,"****************************************\n");
		mvprintw(11,20,"*                                      *\n");
		mvprintw(12,20,"*               Boardwalk              *\n");
		mvprintw(13,20,"*        	                           *\n");
		mvprintw(14,20,"****************************************\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(15,20,"*                                      *\n");
		mvprintw(16,20,"*               Rent $35               *\n");
		mvprintw(17,20,"*                                      *\n");
		mvprintw(18,20,"*                                      *\n");
		mvprintw(19,20,"*       with 1 house ---->   $200      *\n");
		mvprintw(20,20,"*       with 2 houses---->   $600      *\n");
		mvprintw(21,20,"*       with 3 houses---->  $1400      *\n");
		mvprintw(22,20,"*       with 4 houses---->  $1700      *\n");
		mvprintw(23,20,"*       with hotel------->  $2000      *\n");
		mvprintw(24,20,"*                                      *\n");
		mvprintw(25,20,"*                                      *\n");
		mvprintw(26,20,"*          Mortgage Value $200         *\n");
		mvprintw(27,20,"*                                      *\n");
		mvprintw(28,20,"*                                      *\n");
		mvprintw(29,20,"*                                      *\n");
		mvprintw(30,20,"****************************************\n");
		attroff(COLOR_PAIR(1));
 	}
}

string avenues::toString() const{
	stringstream ss;
	ss << "Price: $" << price << " - Have owner -> ";
	if(owner){
		ss << "Yes";
	} else {
		ss << "No";
	}
	return ss.str();
}

void avenues::buyProperty(vector<square*> board,player* player1,player* player2){
	if(static_cast<properties*>(board.at(player1 -> getTurn())) -> getOwner()){
		bool haveIt = false;
		for (int i = 0; i < (player1 -> getMayor()).size(); i++){
			if(player1 -> getMayor().at(i) == (board.at(player1 -> getTurn())))
				haveIt = true;
		}
		if (haveIt){
			//char house[1];
			mvprintw(10,80,"This property is yours");
			/*mvprintw(12,80,"Do you want to buy a house or houses [Y=Yes/N=No]: ");
			getstr(house);
			if(house == 'Y' || house == 'y'){
				char house2[1000];
				mvprintw(14,80,"How much of houses do you want to buy [1-4]: ");
				getstr(house2);
				if(house2 == '1'){

				}
			} else if(house == 'N' || house == 'n'){
				mvprintw(14,80,"Ok, thanks for coming :3");
			}*/
		} else {
			mvprintw(10,80,"This property is owned by -> ",player2 -> getName().c_str());
			if((static_cast<properties*>(board.at(player1 -> getTurn()))) -> getRent() > player1 -> getWallet()){
				mvprintw(12,80,"You are a loser, you are broke :3");
				player2 -> isWinner(true);
			} else {
				player2 -> setWallet((static_cast<properties*>(board.at(player1 -> getTurn()))) -> getRent());
				player1 -> setWallet((static_cast<properties*>(board.at(player1 -> getTurn())) -> getRent()) * -1);
				mvprintw(12,80,"Pay of rent %d",(static_cast<properties*>(board.at(player1 -> getTurn())) -> getRent()));
			}
		}
	} else {
		char keyProperty[1];
		mvprintw(10,80,"Choose your option");
		mvprintw(12,80,"1.-Sale this property");
		mvprintw(14,80,"2.-Ignore this and move on");
		mvprintw(16,80,"Your option -> ");
		getstr(keyProperty);
		if(keyProperty[0] == '1'){
			char keyPropertyConfirm[1];
			mvprintw(18,80,"Are you sure do you want to sale this property? [Y=Yes/N=No]");
			getstr(keyPropertyConfirm);
			if(keyPropertyConfirm[0] == 'Y' || keyPropertyConfirm[0] == 'y'){
				if(player1 -> getWallet() > static_cast<properties*>(board.at(player1 -> getTurn())) -> getPrice()){
					player1 -> setWallet((static_cast<properties*>(board.at(player1 -> getTurn())) -> getPrice()) * -1);
					mvprintw(20,80,"This property has been sale for you :3");
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