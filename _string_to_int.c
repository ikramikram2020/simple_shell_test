#include "shell.h"

/**
 * _string_to_int - converts a string into an int
 *
 * @string: string to be converted
 *
 * Return: int (converted string)
 */
long int _string_to_int(char *string)
{
	int number = 0, counter = 0;

	if (string == NULL)
		return (-1);
	if (!string[1])
	{
		number = string[0] - '0';
		return (number);
	}

	while (string[counter] != '\0')
	{
		if (string[counter] >= '0' && string[counter] <= '9')
			number = (number * 10) + (string[counter] - '0');
		else
			return (-1);
		counter++;
	}

	return (number);
}
