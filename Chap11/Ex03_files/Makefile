CC = g++
CFLAGS = -I.
DEPS = Ex03.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
Ex03: Ex03.o Ex03_main.o
	g++ -o out Ex03.o Ex03_main.o -I.

