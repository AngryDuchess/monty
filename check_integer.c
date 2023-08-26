#include "monty.h"
/**
 * check_integer - checks if the arguments passed contains valid numbers
 * @str: string to be checked
 * Return: 1 if valid number, 0 if invalid
 */
int check_integer(char *str)
{
	int i = 0;

	if (str[i] == '-')
		i++;
	while (*(str + i) != '\0')
	{
		if (*(str +i) >= '0' && *(str + i) <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
