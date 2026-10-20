OBJS = biba.o boba.o

all: hoba

hoba: $(OBJS)
	gcc -o $@ $^

biba.o: biba.c biba.h
	gcc -c biba.c

boba.o: boba.c biba.h
	gcc -c boba.c

clean :
	rm -f $(OBJS) hoba

.PHONY: clean