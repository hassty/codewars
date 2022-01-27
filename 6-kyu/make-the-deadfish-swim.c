int* parse(char* program)
{
  int value = 0, size = 0;
	int* res = 0;

	for (int i = 0; i < (int)strlen(program); ++i) {
		switch (*(program + i)) {
			case 'i': value++; break;
			case 'd': value--; break;
			case 's': value *= value; break;
			case 'o': res = (int*)realloc(res, (++size) * sizeof(int)); *(res + size - 1) = value; break;		
		}
	}

	return res;
}