#include "Figure.hpp"
#include "Ellipse.hpp"
#include "Circle.hpp"
#include "Poligon.hpp"
#include "Triangle.hpp"

int main() {
	Ellipse e(1,2);
	Circle c(3);
	Poligon p(4, "0 0 0 1 1 2 1 0");
	Triangle t("0 0 0 1 1 0");
	Figure* figures[] = {&e, &c, &p, &t};
	std::cout << *figures[0] << std::endl << std::endl;
	std::cout << *figures[1] << std::endl << std::endl;
	std::cout << *figures[2] << std::endl << std::endl;
	std::cout << *figures[3] << std::endl << std::endl;






};
