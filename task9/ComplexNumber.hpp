#include <cmath>
#include <iostream>

template <typename T>
class ComplexNumber {
 public:
 	ComplexNumber() : realPart_(T()), imaginePart_(T()) {};
 	ComplexNumber(T real, T imagine) : realPart_(real), imaginePart_(imagine) {};
	ComplexNumber(const ComplexNumber& c) : realPart_(c.realPart_), imaginePart_(c.imaginePart_) {};

	T& GetAbs() const {
		return sqrt(realPart_ * realPart_ + imaginePart_ * imaginePart_);
	};

	ComplexNumber<T>& operator=(const ComplexNumber<T> c) {
		this->realPart_ = c.realPart_;
		this->imaginePart_ = c.imaginePart_;
		return *this;
	};

	const ComplexNumber<T> operator+(ComplexNumber<T> c) const {
		return ComplexNumber(this->realPart_ + c.realPart_, this->imaginePart_ + c.imaginePart_);
	};

	const ComplexNumber<T> operator-(ComplexNumber<T> c) const {
		return ComplexNumber<T>(this->realPart_ - c.realPart_, this->imaginePart_ - c.imaginePart_);
	};

	const ComplexNumber<T> operator*(ComplexNumber<T> c) const {
		return ComplexNumber<T>(this->realPart_ * c.realPart_ - this->imaginePart_ * c.imaginePart_, this->realPart_ * c.imaginePart_ + this->imaginePart_ * c.realPart_);
	};

	const ComplexNumber<T> operator/(ComplexNumber<T> c) const {
		if(c.imaginePart_ == 0) {
			return ComplexNumber<T>(this->realPart_ / c.realPart_, this->imaginePart_ / c.realPart_);
		}
		else return *this * c.GetConjugate() / (c * c.GetConjugate());
	};

	friend std::istream& operator>>(std::istream& in, ComplexNumber<T>& c) {
		in >> c.realPart_ >> c.imaginePart_;
		return in;
	}

	friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& c) {
		out << c.realPart_ << " ";
		if(c.imaginePart_ < 0) {
			out << "- " << std::abs(c.imaginePart_) << " i";
		}
		else {
			out << "+ " << c.imaginePart_ << " i";
		}
		return out;
	};
 private:
 	ComplexNumber GetConjugate() const {
		return ComplexNumber(this->realPart_, -this->imaginePart_);
	};

 protected:
 	T realPart_;
	T imaginePart_;
};
