#pragma once

#include <iostream>

class Figure {
 public:
 	virtual double GetPerimeter() {};
	virtual double GetArea() {};
	virtual std::ostream& Print(std::ostream& out) {
		return out;
	};

	friend std::ostream& operator<<(std::ostream& out, Figure& f) {
		f.Print(out);
		return out;
	};



};
