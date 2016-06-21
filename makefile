Monopoly:	square.o freeSquare.o community.o chance.o tax.o jail.o go.o properties.o player.o railway.o services.o avenues.o Monopoly.o
	g++ square.o freeSquare.o community.o chance.o tax.o jail.o go.o properties.o player.o railway.o services.o avenues.o Monopoly.o -lncurses -o pruebame

Monopoly.o:	Monopoly.cpp player.h avenues.h railway.h services.h properties.h go.h jail.h chance.h tax.h community.h freeSquare.h square.h
	g++ -c Monopoly.cpp

avenues.o:	avenues.cpp avenues.h properties.h player.h
	g++ -c avenues.cpp

railway.o:	railway.cpp railway.h properties.h player.h
	g++ -c railway.cpp

services.o:	services.cpp services.h properties.h player.h
	g++ -c services.cpp

properties.o:	properties.cpp properties.h
	g++ -c properties.cpp

go.o:	go.cpp go.h square.h player.h
	g++ -c go.cpp

jail.o: jail.cpp jail.h square.h player.h
	g++ -c jail.cpp

chance.o: chance.cpp chance.h square.h player.h
	g++ -c chance.cpp

tax.o:	tax.cpp tax.h square.h player.h
	g++ -c tax.cpp

community.o:	community.cpp community.h square.h player.h
	g++ -c community.cpp

freeSquare.o:	freeSquare.cpp freeSquare.h square.h
	g++ -c freeSquare.cpp

square.o:	square.cpp square.h player.h
	g++ -c square.cpp

player.o:	player.cpp player.h
	g++ -c player.cpp

clean:
	rm -f *.o Monopoly