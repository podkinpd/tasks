#include <iostream>

#include "ComplexNumber.hpp"

#include <fstream>

int main() {
	std::fstream fs("data/test.txt", std::fstream::in | std::fstream::out);
	ComplexNumber c1, c2;

	fs >> c1 >> c2;
	fs << std::endl;
	fs << c1 + c2 << std::endl;
	fs << c1 - c2 << std::endl;
	fs << c1 * c2 << std::endl;
	fs << c1 / c2 << std::endl;

	fs.close();

	return 0;
};
