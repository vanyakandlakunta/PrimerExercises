CC = g++
CFLAGS = -I.
DEPS = Ex04.h

%.o: %.c $(DEPS)
	$(CC) -c -o out Ex04.o Ex04_main.o -I.

Ex04: Ex04.o Ex04_main.o
	g++ -o out Ex04.o Ex04_main.o -I.
