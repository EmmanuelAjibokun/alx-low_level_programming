#include "main.h"

/**
 * is_special_char - check for special characters
 * @c: input value
 *
 * Return: int
 */

/**
 * cap_string - capitalizes all words of a string
 * @sentence: input value
 *
 * Return: sentence
 */

int is_special_char(char c)
{
	if (c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	else
		return (0);
}

char *cap_string(char *sentence)
{
	int i;
	char first_word;

	first_word = 0;

	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == ' ' || is_special_char(sentence[i]) || sentence[i] == '\t' || sentence[i] == '\n')
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
