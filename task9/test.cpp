#include <iostream>

#include "ComplexNumber.hpp"
#include "Queue.hpp"

#include <fstream>

int main() {
	std::fstream fs("data/test.txt", std::fstream::in | std::fstream::out);
	ComplexNumber<double> c1, c2;

	fs >> c1 >> c2;
	fs << std::endl;
	fs << c1 + c2 << std::endl;
	fs << c1 - c2 << std::endl;
	fs << c1 * c2 << std::endl;
	fs << c1 / c2 << std::endl;

	fs.close();

	Queue<int> q;
	q.Push(1);
	q.Push(2);
	q.Push(3);
	q.Print();
	std::cout << std::endl << q.Pop() << std::endl << q.Top() << std::endl;
	q.Print();

	Queue<std::string> q1;
	q1.Push("123");
	q1.Push("234");
	std::cout << q1.Top() << std::endl;
	q1.Print();
	return 0;
};
