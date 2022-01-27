#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int value(char c) {
	return (c - '0');
}

int numberOfDigits(int value) {
	int counter = 0;

	do {
		counter++;
	} while (value /= 10);

	return counter;
}

char *calc(const char *s) {
	int res = 0;
	int val = 0;
  
	for (int i = (int)strlen(s) - 1, temp = 0, digit = 0; i >= 0; --i) {
		temp = value(s[i]);
		if (temp >= value('0') && temp <= value('9'))
			val += temp * (int)pow(10, digit++);
		else if (temp == value('s'))
			digit = 0;

		if (temp == value('p') || i == 0) {
			res += val;
			val = 0;
		}
		else if (temp == value('m')) {
			res -= val;
			val = 0;
		}
	}

	char* result = (char*)malloc((numberOfDigits(res) + 1) * sizeof(char));
	sprintf(result, "%d", res);
	return result;
}