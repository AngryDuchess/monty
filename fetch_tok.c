#include "monty.h"

/**
 * fetch_tok - cuts string into tokens
 * @str: string to be tokenized
 * @delims: delimiters
 * Return: token
 */
char fetch_tok(char *str, const char *delims)
{
	static char *lastToken;

	if (str == NULL)
	{
		str = lastToken;
	}
	str += strspn(str, delims);

	if (*str == '\0')
	{
		lastToken = NULL;
		return (NULL);
	}

	char *tokenEnd = str + strcspn(str, delims);

	if (*tokenEnd != '\0')
	{
		*tokenEnd = '\0';
		lastToken = tokenEnd + 1;
	}
	else
	{
		lastToken = NULL;
	}

	return (str);
}
