Monopoly: properties.o player.o avenues.o Monopoly.o
	g++ properties.o player.o avenues.o Monopoly.o -lncurses -o pruebame

Monopoly.o:	Monopoly.cpp player.h avenues.h properties.h
	g++ -c Monopoly.cpp

player.o:	player.cpp player.h
	g++ -c player.cpp

avenues.o:	avenues.cpp avenues.h properties.h
	g++ -c avenues.cpp

properties.o:	properties.cpp properties.h
	g++ -c properties.cpp

clean:
	rm -f *.o Monopoly