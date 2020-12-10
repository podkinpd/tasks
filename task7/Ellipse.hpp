#pragma once

#include <iostream>
#include <cmath>

class Ellipse : public Figure {
 public:
 	Ellipse(double a, double b) : a_(a), b_(b) {};

 	virtual double GetPerimeter() {
		return 4 * (M_PI * a_ * b_ + a_ - b_) / (a_ + b_);
	};
	virtual double GetArea() {
		return M_PI * a_ * b_;
	};

	virtual std::ostream& Print(std::ostream& out) {
		out << "Ellipse:\n";
		out << "a = " << a_ << "\n";
		out << "b = " << b_ << "\n";
		out << "Perimeter = "<< GetPerimeter() << "\n";
		out << "Area = "<< GetArea();
		return out;
	};

	friend std::ostream& operator<<(std::ostream& out, Ellipse& e) {
		e.Print(out);
		return out;
	};


 protected:
 	double a_;
	double b_;
};
