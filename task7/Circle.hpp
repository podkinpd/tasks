#pragma once

#include <iostream>
#include <cmath>

class Circle : public Ellipse {
 public:
 	Circle(double r) : Ellipse(r, r), r_(r) {};

 	virtual double GetPerimeter() {
		return Ellipse::GetPerimeter();
	};
	virtual double GetArea() {
		return Ellipse::GetArea();
	};

	virtual std::ostream& Print(std::ostream& out) {
		out << "Circle:\n";
		out << "R = " << r_ << "\n";
		out << "Perimeter = "<< GetPerimeter() << "\n";
		out << "Area = "<< GetArea();
		return out;
	};

	friend std::ostream& operator<<(std::ostream& out, Circle& c) {
		c.Print(out);
		return out;
	};


 protected:
 	double r_;
};
