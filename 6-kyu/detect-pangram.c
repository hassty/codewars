#include <stdbool.h>

#define ALPHABET_SIZE 26

bool is_pangram(const char *str_in) {
	int used[ALPHABET_SIZE] = { 0 };

	for (int i = 0; str_in[i]; ++i) {
		char currentChar = *(str_in + i);
		if (currentChar >= 'a' && currentChar <= 'z')
			used[(currentChar - 'a')]++;
		else if (currentChar >= 'A' && currentChar <= 'Z')
			used[(currentChar - 'A')]++;
	}

	for (int i = 0; i < ALPHABET_SIZE; ++i)
		if (!used[i])
			return false;

	return true;
}