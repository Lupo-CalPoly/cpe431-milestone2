CXX = g++
CFLAGS = -O2 -Wall -g
SRCS = matadd.cpp matadd-driver.cpp 
BIN = matadd

all:
	$(CXX) -D_CPP_ $(CFLAGS) -o $(BIN) $(SRCS)

clean:
	rm -f $(BIN)
