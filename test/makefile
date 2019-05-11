CC = g++
CFLAGS = -I.
DEPS = ../mlc.h ../mlc/include/bigint.h

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: TestMain.o ../mlc/src/bigint.o 
	$(CC) -o test TestMain.o ../mlc/src/bigint.o $(CFLAGS)