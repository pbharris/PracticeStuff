#this Makefile works!!!
CC = gcc
CCOPTS = -O2 -ggdb -lm -march=ia64 
CCLIBS = -c
RM = rm -f

default:extern

all:all

pointer_to_function: pointer_to_function.c 
	$(CC) $(CCOPTS) -o pointer_to_function pointer_to_function.c 

recurse:
	$(CC) $(CCOPTS) -o recurse recurse.c 

pointer_fun:
	$(CC) $(CCOPTS) -o pointer_fun pointer_fun.c 

average:average.c
	$(CC) $(CCOPTS) -o average average.c 

sm:sm.c
	$(CC) $(CCOPTS) -o sm sm.c 

ptr2f:ptr2f.c
	$(CC) $(CCOPTS) -o ptr2f ptr2f.c 

linkedlist:linkedlist.c
	$(CC) $(CCOPTS) -o linkedlist linkedlist.c

ascii:ascii.c
	$(CC) $(CCOPTS) -o ascii ascii.c

ptr:ptr.c
	$(CC) $(CCOPTS) -o ptr ptr.c 

extern_obs:extern1.c extern2.c
	$(CC) $(CCOPTS) $(CCLIBS) extern1.c extern2.c

extern:extern_obs
	$(CC) $(CCOPTS) -o extern_scope  extern1.o extern2.o

ex15_10:ex15_10.c
	$(CC) $(CCOPTS) ex15_10 ex15_10.c 

test:test.c
	$(CC) $(CCOPTS) -o test test.c

bu_fact2:bu_fact2.c
	$(CC) $(CCOPTS) -o bu_fact2 bu_fact2.c

structs:structs.c
	$(CC) $(CCOPTS) -o structs structs.c

quadeq:quadeq.c
	$(CC) $(CCOPTS) -o structs structs.c

clean:
	$(RM) ex15_10 test *.o pointer_to_function
