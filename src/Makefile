CC=gcc
CXX=g++
CFLAGS=-Wall
EXEC=multmatrix

all: $(EXEC)

multmatrix: main.o
	$(CXX) -o $@ $^

%.o: %.c
	$(CXX) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o
	rm $(EXEC)

mrproper: clean
	rm -rf $(EXEC)
