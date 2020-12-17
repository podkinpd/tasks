#include <iostream>

//task 1
template<int n>
struct Factorial {
	const static int value = n * Factorial<n-1>::value;
};

template<>
struct Factorial<0> {
	const static int value = 1;
};
template<>
struct Factorial<1> {
	const static int value = 1;
};

template<int n, int k>
struct BinomialCoefficient {
	const static int value = Factorial<n>::value / (Factorial<k>::value * Factorial<n-k>::value);
};

//task 2
template<int n>
struct Fibonacci {
	const static int value = Fibonacci<n-1>::value + Fibonacci<n-2>::value;
};

template<>
struct Fibonacci<0> {
	const static int value = 0;
};
template<>
struct Fibonacci<1> {
	const static int value = 1;
};

//task 3
constexpr int FactCalc(int n) {
	return ((n <= 1) ? 1 : (n * FactCalc(n - 1)));
}

constexpr double ECalc(int n) {
	return ((n < 1) ? 1. : (ECalc(n - 1) + 1. / FactCalc(n)));
}

//task 4
constexpr bool IsPrimeLoop(int cur, int d) {
    return (d * d > cur) ? true : (cur % d == 0) ? false : IsPrimeLoop(cur, d + 1);
}

constexpr bool IsPrime(int cur) {
    return IsPrimeLoop(cur, 2);
}

constexpr int NextPrime(int cur) {
    return IsPrime(cur) ? cur : NextPrime(cur + 1);
}

constexpr int GetPrimeLoop(int number, int cur) {
	return (number == 0) ? cur : GetPrimeLoop(number - 1, NextPrime(cur + 1));
}

constexpr int GetPrime(int i) {
    return GetPrimeLoop(i, 2);
}

int main() {
	std::cout << Factorial<5>::value << std::endl;
	
	std::cout << BinomialCoefficient<5,2>::value << std::endl;

	std::cout << Fibonacci<11>::value << std::endl;

	std::cout << ECalc(15) << std::endl;

	std::cout << GetPrime(10) << std::endl;
	return 0;
};
