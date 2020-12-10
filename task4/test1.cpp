#include "Capacitor.hpp"

#include <iostream>

int main() {
	Capacitor c(1.5, 3.7);
	std::cout << c.GetCharge() << std::endl;




	return 0;
};
