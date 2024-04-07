CC=g++
CFLAGS=-g
run: src/main.o src/budget.o
	$(CC) $(CFLAGS) src/main.o src/budget.o -o run

src/main.o: src/main.cpp
	$(CC) -c src/main.cpp $(CFLAGS) -o src/main.o

src/budget.o: src/budget.cpp
	$(CC) -c src/budget.cpp $(CFLAGS) -o src/budget.o

clean:
	rm -f src/*.o run
