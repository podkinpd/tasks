all: test

test:
	mkdir -p build
	mkdir -p data
	echo "1.3 3.2\n4.1 9.6" > data/test.txt
	clang++-8 -std=c++14 -Wall test.cpp -o build/test

clear:
	rm -f *.o
