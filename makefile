CC      = gcc
CFLAGS  = -Wall 
SRC     = factorial

all: factorial 

factorial: factorial.o
	$(CC) $(CFLAGS) -o $@ $(SRC).c

.PHONY: clean 

clean:
	rm factorial factorial.o


