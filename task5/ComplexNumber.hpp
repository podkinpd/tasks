#include <cmath>
#include <iostream>

class ComplexNumber {
 public:
 	ComplexNumber() : realPart_(0), imaginePart_(0) {};
 	ComplexNumber(double real, double imagine) : realPart_(real), imaginePart_(imagine) {};

	double GetAbs() const {
		return sqrt(realPart_ * realPart_ + imaginePart_ * imaginePart_);
	};

	ComplexNumber& operator=(const ComplexNumber& c) {
		this->realPart_ = c.realPart_;
		this->imaginePart_ = c.imaginePart_;
		return *this;
	};

	const ComplexNumber operator+(const ComplexNumber& c) const {
		return ComplexNumber(this->realPart_ + c.realPart_, this->imaginePart_ + c.imaginePart_);
	};

	const ComplexNumber operator-(const ComplexNumber& c) const {
		return ComplexNumber(this->realPart_ - c.realPart_, this->imaginePart_ - c.imaginePart_);
	};

	const ComplexNumber operator*(const ComplexNumber& c) const {
		return ComplexNumber(this->realPart_ * c.realPart_ - this->imaginePart_ * c.imaginePart_, this->realPart_ * c.imaginePart_ + this->imaginePart_ * c.realPart_);
	};

	const ComplexNumber operator/(const ComplexNumber& c) const {
		if(c.imaginePart_ == 0) {
			return ComplexNumber(this->realPart_ / c.realPart_, this->imaginePart_ / c.realPart_);
		}
		else return *this * c.GetConjugate() / (c * c.GetConjugate());
	};

	friend std::istream& operator>>(std::istream& in, ComplexNumber& c) {
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
 	double realPart_;
	double imaginePart_;
};
