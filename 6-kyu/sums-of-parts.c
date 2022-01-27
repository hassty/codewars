#include <stdlib.h>

/* Note:
    should also save the length of the parts_sums in <len>
*/

unsigned long long *parts_sums(size_t *len, const unsigned long long *ls, size_t n)
{
	*len = n + 1;
	unsigned long long *list = (unsigned long long*)calloc(*len, sizeof(unsigned long long));
	size_t i;

	unsigned long long sum = 0;
	for (i = 0; i < n; ++i)
		sum += *(ls + i);

	*list = sum;

	for (i = 1; i < *len - 1; ++i)
		*(list + i) = sum -= *(ls + i - 1);

	return list;
}