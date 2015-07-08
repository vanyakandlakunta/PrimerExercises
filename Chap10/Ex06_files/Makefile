CC=g++
CFLAGS = -I.
DEPS = Ex06.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
Ex06: Ex06.o Ex06_main.o
	g++ -o out Ex06.o Ex06_main.o -I.
