#include <math.h>

int digital_root(int n) {
	int temp = n, res = 0, counter = 0;
  
	do {
		counter++;
	} while (temp /= 10);

	for (int i = 0; i < counter; ++i)
		res += ((n % (int)pow(10, i + 1)) - (n % (int)pow(10, i))) / (int)pow(10, i);

	if (res > 9)
		return digital_root(res);
	else
		return res;
}