#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in) {
  char space = ' ';
	char* str = (char*)malloc(strlen(str_in) * sizeof(char));
	strcpy(str, str_in);


	int writer = 0, reader = 0;
	while (str[reader]) {
		if (str[reader] != space)
			str[writer++] = str[reader];

		reader++;
	}
	str[writer] = '\0';

	str = (char*)realloc(str, strlen(str) * sizeof(char) + 1);
	return str;
}