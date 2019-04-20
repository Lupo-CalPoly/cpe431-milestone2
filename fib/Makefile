CC = gcc
CFLAGS = -O1 -Wall -g
SRCS = fib.c
BIN = fib 
ECHO = $?

all:
	$(CC) $(CFLAGS) -o $(BIN) $(SRCS)

run:
	./$(BIN); echo $(value ECHO)

clean:
	rm -f $(BIN)
