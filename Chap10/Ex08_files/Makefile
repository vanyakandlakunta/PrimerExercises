CC=g++
CFLAGS = -I.
DEPS = Ex08.h

%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
Ex08: Ex08.o Ex08_main.o
	g++ -o out Ex08.o Ex08_main.o -I.
	
