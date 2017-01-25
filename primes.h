#ifndef _PRIMES_H
#define _PRIMES_H

#include <math.h>

bool basicIsPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++) if (!(x % i)) return false;
	return true;
}

#endif // _PRIMES_H