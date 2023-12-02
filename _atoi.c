#include "shell.h"

/**
 * _atoi - converts a string into an int
 *
 * @str: string to be converted
 *
 * Return: int (converted string)
 */
long int _atoi(char *str)
{
	int numb = 0, count = 0;

	if (str == NULL)
		return (-1);
	if (!str[1])
	{
		numb = str[0] - '0';
		return (numb);
	}

	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
			numb = (numb * 10) + (str[count] - '0');
		else
			return (-1);
		count++;
	}

	return (numb);
}
