#include <sys/types.h>
#include <string.h>
#include <limits.h>

int min(int a, int b) {
	return (a && a < b) ? a : b;
}

ssize_t find_short(const char *s)
{
  int shortest = 0, prevLength = 0;

	for (int i = 0; i < (int)strlen(s) + 1; ++i) {
		if (*(s + i) == ' ' || *(s + i) == '\0') {
			shortest = min(shortest, i - prevLength);
			prevLength = i+1;
		}	
	}
	
	return shortest;
}