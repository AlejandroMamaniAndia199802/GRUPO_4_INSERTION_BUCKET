OUTPUT = $(wildcard *.o *.out *.gch)
EXE = tests.out

catch2:
	g++ test-main.cpp -c

src:
	g++ sorter.cpp -c

tests:
	g++ test-main.o sorter.o test-sorter.cpp -o $(EXE)

exe:
	./$(EXE)

clean:
	clear
	rm -rf $(OUTPUT)

all: clean catch2 src tests exe

