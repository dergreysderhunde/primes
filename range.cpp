#include <iostream>

#include "primes.h"

int main() {
	int x;

	std::cin >> x;

	if (basicIsPrime(x)) {
		std::cout << "yes" << std::endl;
	}
	else
		std::cout << "no" << std::endl;
}