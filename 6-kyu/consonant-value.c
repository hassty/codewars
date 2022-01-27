int solve(const char* strin) {
	int sum = 0, highest = 0;

	for (int i = 0; *(strin + i); ++i) {
		char c = *(strin + i);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			sum = 0;
		else
			sum += c - 'a' + 1;

		highest = (sum > highest) ? sum : highest;
	}

	return highest;
}