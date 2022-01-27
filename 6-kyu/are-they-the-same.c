#include <stdbool.h>
#include <stdlib.h>

bool comp(const int *a, const int *b, size_t n) {
	int sumA = 0, sumB = 0, sumSquared = 0, sumSquareRoot = 0;
	int counter = 0;

	for (size_t i = 0; i < n; ++i) {
		sumA += *(a + i);
		sumB += *(b + i);
		sumSquared += pow(*(a + i), 2);
		sumSquareRoot += sqrt(*(b + i));
	}

	return (sumA == sumSquareRoot) && (sumB == sumSquared);
}