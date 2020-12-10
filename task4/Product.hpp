#pragma once
#include <string>

class Product {

 public:
 	Product() : name_(), number_(0), price_(0) {};
	Product(std::string name, double number = 0, double price = 0) : name_(name), number_(number), price_(price) {};

	void SetName(std::string& newName) {
		name_ = newName;
	};

	void SetNumber(double newNumber) {
		number_ = newNumber;
	};

	void SetPrice(double newPrice) {
		price_ = newPrice;
	};

	std::string& GetName() {
		return name_;
	};

	double GetNumber() {
		return number_;
	};

	double GetPrice() {
		return price_;
	};

	double GetCost() {
		return number_ * price_;
	};

 protected:
 	std::string name_;
	double number_;
	double price_;
};
