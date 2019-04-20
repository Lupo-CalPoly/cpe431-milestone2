CC = gcc
AR = ar
CFLAGS = -g -Wall -O1
CSRCS = addwithprint.c 
LIBSRCS = cpe431util.c 
LIB = libcpe431util.a 
BIN = addwithprint

all: $(LIB) $(BIN)

$(BIN):
	$(CC) $(CFLAGS) -c $(CSRCS)
	$(CC) $(CFLAGS) -o $(BIN) *.o -L. -lcpe431util

$(LIB):
	$(CC) $(CFLAGS) -c $(LIBSRCS)
	$(AR) rcs $(LIB) cpe431util.o

clean:
	rm -f *.o

cleanall:
	rm -f $(BIN) *.o *.a
