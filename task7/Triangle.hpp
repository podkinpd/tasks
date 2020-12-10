#pragma once

#include "Poligon.hpp"

#include <iostream>
#include <string>

class Triangle : public Poligon {
 public:
 	Triangle(std::string pointStr) : Poligon(3, pointStr) {};

 	virtual double GetPerimeter() {
		return Poligon::GetPerimeter();
	};
	virtual double GetArea() {
		return Poligon::GetArea();
	};
	virtual std::ostream& Print(std::ostream& out) {
		out << "Triangle:\n";
		out << "Vertexes:\n";
		for(int i = 0; i < vertexNum_; i++) {
			out << points_[i].first << " " << points_[i].second << "\n";
		}
		out << "Perimeter = " << GetPerimeter() << "\n";
		out << "Area = " << GetArea();
		return out;
	};

	friend std::ostream& operator<<(std::ostream& out, Triangle& t) {
		t.Print(out);
		return out;
	};

};
