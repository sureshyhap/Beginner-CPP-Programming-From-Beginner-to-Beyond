main: main.o movies.o movie.o
	g++ -o main main.o movies.o movie.o
main.o: main.cpp movies.cpp movies.h
	g++ -c main.cpp
movies.o: movies.cpp movies.h
	g++ -c movies.cpp
movie.o: movie.cpp movie.h
	g++ -c movie.cpp
