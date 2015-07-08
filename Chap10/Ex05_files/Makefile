CC=g++
CFLAGS =-I.
DEPS = Ex05.h

%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
Ex05: Ex05.o Ex05_main.o
	g++ -o out Ex05.o Ex05_main.o -I.
	
