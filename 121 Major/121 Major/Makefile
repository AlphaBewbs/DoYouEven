game: Master.o Magic.o Bludgeoning.o Piercing.o Main.cpp
	g++ -std=c++11 *.cpp *.h -o battleground `pkg-config gtkmm-3.0 --cflags` `pkg-config gtkmm-3.0 --libs`

Unit.o: Unit.h Unit.cpp Magic.cpp Magic.h Bludgeoning.cpp Bludgeoning.h Piercing.cpp Piercing.h
	g++ -Wall -Werror -c Unit.cpp
	g++ -Wall -Werror -c Magic.cpp
	g++ -Wall -Werror -c Bludgeoning.cpp
	g++ -Wall -Werror -c Piercing.cpp

Factory.o:	UnitFactory.h

Team.o: Team.h Team.cpp HeroTeam.cpp HeroTeam.h MonsterTeam.cpp MonsterTeam.h
	g++ -Wall -Werror -c HeroTeam.cpp
	g++ -Wall -Werror -c MonsterTeam.cpp
	g++ -Wall -Werror -c Team.cpp

run:
	./battleground

clean:
	rm *.o battleground
