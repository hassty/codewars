#include <stdlib.h>

int tickets(size_t length, const int people[length]) {
  const int cost = 25;
	int cash[2] = { 0, 0 };

	for (size_t i = 0; i < length; ++i) {
		switch (people[i])
		{
		case cost:
			cash[0]++; break;
		case cost*2:
			if (cash[0] * cost >= cost)
				cash[0]--;
			else
				return 0;
			cash[1]++;
			break;
		case cost*4:
			if (cash[1]) {
				if (cash[0] * cost >= cost) {
					cash[1]--;
					cash[0]--;
				}
				else
					return 0;
			}
			else {
				if (cash[0] >= 3)
					cash[0] -= 3;
				else
					return 0;
			}
			break;
		}
	}

	return 1;
}#include <stdlib.h>

int tickets(size_t length, const int people[length]) {
  const int cost = 25;
	int cash[3] = { 0, 0, 0 };

	for (size_t i = 0; i < length; ++i) {
		switch (people[i])
		{
		case cost:
			cash[0]++; break;
		case cost*2:
			if (cash[0] * cost >= cost)
				cash[0]--;
			else
				return 0;
			cash[1]++;
			break;
		case cost*4:
			if (cash[1]) {
				if (cash[0] * cost >= cost) {
					cash[1]--;
					cash[0]--;
				}
				else
					return 0;
			}
			else {
				if (cash[0] >= 3)
					cash[0] -= 3;
				else
					return 0;
			}
			cash[2]++;
			break;
		}
	}

	return 1;
}