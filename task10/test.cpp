#include <iostream>
#include <string>

template <typename... T>
int SizeCalc(T... args) {
	return (... + sizeof(args));
}


int main() {
	int i = 1;
	double a = 1.1;
	std::string s("aaaaaaaaaaa");
	std::cout << SizeCalc(i) << std::endl;
	std::cout << SizeCalc(i, a) << std::endl;
	std::cout << SizeCalc(i, a, s) << std::endl;





	return 0;
};
