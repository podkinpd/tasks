#pragma once

#include <iostream>

template <class T>
class Figure {
 public:
 	double GetPerimeter() {
		return static_cast<T&>(*this).GetPerimeter();
	};

	double GetArea() {
		return static_cast<T&>(*this).GetArea();
	};

	std::ostream& Print(std::ostream& out) {
		return static_cast<T&>(*this).Print(out);
	};

	friend std::ostream& operator<<(std::ostream& out, Figure& f) {
		f.Print(out);
		return out;
	};



};
