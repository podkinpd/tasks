#include <iostream>
#include <deque>
#include <string>

template<typename T>
class Queue {
 public:
 	Queue() : data_() {};

	const T& Top() const {
		return data_.front();
	};

	void Push(const T& t) {
		data_.push_back(t);
	};

	T Pop() {
		T t = data_.front();
		data_.pop_front();
		return t;
	}

	void Print() {
		for(int i = 0; i < data_.size(); i++) {
			std::cout << data_[i] << " ";
		}
	};
 protected:
 	std::deque<T> data_;
};


template<>
class Queue<std::string> {
 public:
 	Queue() : data_() {};

	const std::string& Top() const {
		return data_.front();
	};

	void Push(const std::string& t) {
		data_.push_back(t);
	};

	std::string Pop() {
		std::string s = data_.front();
		data_.pop_front();
		return s;
	}

	void Print() {
		for(int i = 0; i < data_.size(); i++) {
			std::cout << data_[i] << std::endl;
		}
	};
 protected:
 	std::deque<std::string> data_;
};
