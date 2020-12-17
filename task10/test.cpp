#include "Figure.hpp"
#include "Ellipse.hpp"
#include "Poligon.hpp"

#include <iostream>
#include <string>

template <typename... T>
int SizeCalc(T... args) {
	return (... + sizeof(args));
}

template <typename T, typename... Types>
T* NewObject(Types... args) {
	return new T(args...);
}

class TestClass {
 public:
	TestClass(int a, double b) : a_(a), b_(b) {};
 protected:
 	int a_;
	double b_;
};

template <typename Functor, typename... Types>
auto CallFunc(Functor func, Types... args) {
	return func(args...);
}



int main() {
	int i = 1;
	double a = 1.1;
	std::string s("aaaaaaaaaaa");
	std::cout << SizeCalc(i) << std::endl;
	std::cout << SizeCalc(i, a) << std::endl;
	std::cout << SizeCalc(i, a, s) << std::endl;

	NewObject<TestClass>(i, a);

	auto lambda = [] (int x) { std::cout << x * 50 << std::endl; return;};
	CallFunc(lambda, i);
	std::cout << CallFunc(SizeCalc<std::string>, s) << std::endl;

	Ellipse e(1,2);
	Figure<Ellipse>* figures[] = {&e};
	std::cout << figures[0]->GetArea() << std::endl;

	return 0;
};
