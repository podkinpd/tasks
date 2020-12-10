#include "Product.hpp"

#include <iostream>

int main() {
	Product p("some product", 1.5, 3.7);
	std::cout << p.GetCost() << std::endl;




	return 0;
};
