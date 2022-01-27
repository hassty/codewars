#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define arrSize 7

int getNumberOfDigits(int n) {
	int number = 1;
	while (n /= 10)
		number++;
	return number;
}

void addChar(char* res, int size, char value) {
	res = (char*)realloc(res, (size + 1) * sizeof(char));
	*(res + size++) = value;
}

char* solution(int n) {
	char* res = (char*)calloc(arrSize * 2 + 1, sizeof(char));
	int size = 0, digit = n;

	char roman[arrSize] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
	int arabic[arrSize] = { 1,5,10,50,100,500,1000 };

	int numberOfDigits = getNumberOfDigits(n);

	while (numberOfDigits > 0) {
		digit = n % (int)pow(10, numberOfDigits) - n % (int)pow(10, numberOfDigits - 1);
		numberOfDigits--;

		for (int i = 0; i < arrSize - 2; i += 2) {
			if (digit == *(arabic + i + 1) - *(arabic + i)) {
				addChar(res, size++, *(roman + i));
				addChar(res, size++, *(roman + i + 1));
				digit -= *(arabic + i + 1) - *(arabic + i);
				break;
			}
			else if (digit == *(arabic + i + 2) - *(arabic + i)) {
				addChar(res, size++, *(roman + i));
				addChar(res, size++, *(roman + i + 2));
				digit -= *(arabic + i + 2) - *(arabic + i);
				break;
			}
		}

		if (digit > 0) {
			for (int i = arrSize - 1; i >= 0; --i) {
				while (digit - *(arabic + i) >= 0) {
					addChar(res, size++, *(roman + i));					
					digit -= *(arabic + i);
				}
			}
		}

	}
	res[size] = '\0';

	return res;
}