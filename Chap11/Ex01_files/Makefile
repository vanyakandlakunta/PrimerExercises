CC = g++
CFLAGS = -I.
DEPS = Ex01.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
Ex01: Ex01.o Ex01_main.o
	g++ -o out Ex01.o Ex01_main.o -I.

