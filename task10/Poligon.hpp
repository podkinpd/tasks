#pragma once

#include "Figure.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <utility>
#include <cmath>

class Poligon : public Figure<Poligon> {
 public:
 	Poligon(int num, std::string pointStr) : vertexNum_(num) {
		points_ = new std::pair<double, double>[vertexNum_];
		std::stringstream ss;
		ss << pointStr;
		for(int i = 0; i < vertexNum_; i++) {
			ss >> points_[i].first;
			ss >> points_[i].second;
		}
	};

 	double GetPerimeter() {
		double preP = 0;
		for(int i = 0; i < vertexNum_ - 1; i++) {
			preP += sqrt( pow(points_[i].first - points_[i+1].first, 2) + pow(points_[i].second - points_[i+1].second, 2) );
		}
		preP += sqrt( pow(points_[0].first - points_[vertexNum_-1].first, 2) + pow(points_[0].second - points_[vertexNum_-1].second, 2) );
		return preP;
	};

	double GetArea() {
		double preArea = 0;
		for(int i = 0; i < vertexNum_ - 1; i++) {
			preArea += 0.5 *(
				points_[i].first * points_[i+1].second + points_[vertexNum_-1].first * points_[0].second - 
				points_[i+1].first * points_[i].second + points_[0].first * points_[vertexNum_-1].second
			);
		}
		return std::abs(preArea);
	};

	std::ostream& Print(std::ostream& out) {
		out << "Poligon:\n";
		out << "Number of vertexes = " << vertexNum_ << "\n";
		out << "Vertexes:\n";
		for(int i = 0; i < vertexNum_; i++) {
			out << points_[i].first << " " << points_[i].second << "\n";
		}
		out << "Perimeter = " << GetPerimeter() << "\n";
		out << "Area = " << GetArea();
		return out;
	};

	friend std::ostream& operator<<(std::ostream& out, Poligon& p) {
		p.Print(out);
		return out;
	};


 protected:
 	int vertexNum_;
	std::pair<double, double>* points_;
};
