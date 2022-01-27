/*
** @param str: a C-string containing only lowercase letters and spaces (' ')
** @return:    a C-string allocated on the heap containing the highest scoring word of str
*/
char  *highestScoringWord(const char *str)
{
  char* res = (char*)malloc(strlen(str) * sizeof(char) + 1);
	strcpy(res, str);

	const int offset = 96;
	int score = 0, highscore = -1;
	int index = 0;

	for (int i = strlen(res) - 1; i >= 0; --i) {
		if (res[i] != ' ')
			score += (int)res[i] - offset;
		else
			score = 0;

		if (score >= highscore) {
			index = i;
			highscore = score;
		}
	}

	int writer = 0;
	for (int i = index; (res[i] != ' ') && (i < strlen(res)); ++i)
		res[writer++] = res[i];
	res[writer] = '\0';

	return res;
}