#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @sentence: input value
 *
 * Return: sentence
 */

char *cap_string(char *sentence)
{
	int i, j;
	char first_word;

	first_word = 0;

	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == ' ' || is_special_char(sentence[i]))
		{
			sentence[i] = sentence[i];
			first_word++;
		}
		else if (sentence[i] >= 'a' && sentence[i] <= 'z')
		{
			if (first_word)
				sentence[i] = sentence[i] - 32;
			else
				sentence[i] = sentence[i];
			first_word = 0;
		}
		else
		{
			sentence[i] = sentence[i];
			first_word = 0;
		}
	}
	return (sentence);
}
