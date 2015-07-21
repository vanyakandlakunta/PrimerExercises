CC = g++
CFLAGS = -I.
DEPS = Ex07.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
Ex07: Ex07.o Ex07_main.o
	g++ -o out Ex07.o Ex07_main.o -I.
