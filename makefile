Monopoly:	square.o properties.o player.o avenues.o Monopoly.o
	g++ square.o properties.o player.o avenues.o Monopoly.o -lncurses -o pruebame

Monopoly.o:	Monopoly.cpp player.h avenues.h properties.h square.h
	g++ -c Monopoly.cpp

player.o:	player.cpp player.h
	g++ -c player.cpp

avenues.o:	avenues.cpp avenues.h properties.h
	g++ -c avenues.cpp

properties.o:	properties.cpp properties.h
	g++ -c properties.cpp

square.o:	square.cpp square.h
	g++ -c square.cpp

clean:
	rm -f *.o Monopoly