#pragma once
#include <string>

class Student {

 public:
 	Student() : name_(), surname_(), avgScore_(0) {};
	Student(std::string name, std::string surname, double avgScore = 0) : name_(name), surname_(surname),avgScore_(avgScore) {};

	void SetName(std::string& newName) {
		name_ = newName;
	};

	void SetSurname(std::string& newSurname) {
		surname_ = newSurname;
	};

	void SetAvgScore(double newAvgScore) {
		avgScore_ = newAvgScore;
	};

	std::string& GetName() {
		return name_;
	};

	std::string& GetSurname() {
		return surname_;
	};

	double GetAvgScore() {
		return avgScore_;
	};

 protected:
 	std::string name_;
	std::string surname_;
	double avgScore_;
};
