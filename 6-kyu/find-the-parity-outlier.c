#include <stdlib.h>
#include <stdbool.h>

bool isEven(int n) {
	return n % 2 ? false : true;
}

int find_outlier(const int *values, size_t count){
	bool tempA, tempB, tempC;
	tempA = isEven(*values);
	tempB = isEven(*(values + 1));
	tempC = isEven(*(values + 2));

  for (int i = 0; i < count; ++i) {
		if ((tempA && tempA == tempB) || (tempA && tempA == tempC) || (tempB && tempB == tempC)) {
			if (!isEven(*(values + i)))
				return *(values + i);
		}
			else {
				if (isEven(*(values + i)))
					return *(values + i);
		}
	}
}