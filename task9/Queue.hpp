#include <iostream>
#include <deque>

template<typename T, typename Out = std::ofstream()>
class Queue {
 public:
 	Queue() : data_() {};

	T& Front() const {
		return data_.front();
	};

	T& Back() const {
		return data_.back();
	};

	void PushBack(T t) {
		data_.push_back(t);
	};

	void PushFront(T t) {
		data_.push_front(t);
	};

	void Print() {
		for(int i = 0; i < data_.size(); i++) {
			std::cout << data_[i] << " ";
		}
	};
 protected:
 	std::deque<T> data_;
};
