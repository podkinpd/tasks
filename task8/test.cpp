#include <iostream>
#include <fstream>
#include <exception>

int Fact(int n) {
	if( n < 0 ) {
		throw std::invalid_argument("Arg less then 0");
	}
	return ( n <= 1 ) ? 1 : (n * Fact(n - 1));
}

int main() {
	try {
		std::cout << Fact(-1) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::ifstream fs("data/test.txt");
		fs.exceptions(fs.failbit);
		std::cout << fs.is_open() << std::endl;
		int i;

		fs >> i;
		std::cout << i;
	}
	catch (std::ifstream::failure& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
};
