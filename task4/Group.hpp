#pragma once

#include "Student.hpp"

#include <vector>

class Group {

 public:
	void AddStudent(Student& student) {
		students_.push_back(student);
	};

	double GetAvgScore() {
		double preSum = 0;
		for(int i = 0; i < students_.size(); i++) {
			preSum += students_[i].GetAvgScore();
		}
		return preSum / students_.size();
	};
	
	~Group() {
		students_.clear();
	};
 protected:
 	std::vector<Student> students_;
};
