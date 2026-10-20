OBJS	= biba.o boba.o

hoba: $(OBJS)
	gcc -o hoba $(OBJS)

biba.o: biba.c biba.h
	gcc -c biba.c

boba.o: boba.c biba.h
	gcc -c boba.c

clean :
	rm -f hoba $(OBJS)

.PHONY: clean