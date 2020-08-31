main: main.o  Profile.o
	g++ -o main main.o Profile.o 

Profile.o: Profile.cpp Profile.h

tests: tests.o Profile.o
	g++ -o tests tests.o Profile.o

main.o: main.cpp Profile.h

tests.o: tests.cpp Profile.h


clean:
	rm -f main.o Profile.o tests.o
