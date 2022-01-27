#include <stdlib.h>
#include <stdbool.h>

size_t solve(const char* str_in)
{
	size_t result = 0;
	size_t vowelsCounter = 0;
	bool previousCharIsVowel = false;
	const char vowels[] = "aeiou";

	for (int i = 0; str_in[i]; ++i)
	{
		for (int j = 0; vowels[j]; ++j)
		{
			if (str_in[i] == vowels[j])
			{
				previousCharIsVowel = true;
				break;
			}
			previousCharIsVowel = false;
		}
		if (previousCharIsVowel)
		{
			vowelsCounter++;
		}
		else
		{
			result = vowelsCounter > result ? vowelsCounter : result;
			vowelsCounter = 0;
		}
	}
	result = vowelsCounter > result ? vowelsCounter : result;

	return result;
}