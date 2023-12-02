#include "shell.h"

/**
 * _int_to_string - converts int number to a string
 *
 * @number: int to be converted
 *
 * Return: converted int as a string
*/
char *_int_to_string(int number)
{
	int no_digits = 0, temp;
	char *string_int;

	temp = number;
	if (number == 0)
		no_digits = 1;
	else
	{
		while (number != 0)
		{
			number = number / 10;
			no_digits++;
		}
	}
	string_int = malloc(sizeof(char) * (no_digits + 1));
	if (string_int == NULL)
	{
		perror("malloc");
		return (NULL);
	}
	string_int[no_digits] = '\0';

	while (no_digits > 0)
	{
		string_int[no_digits - 1] = '0' + (temp % 10);
		temp = temp / 10;
		no_digits--;
	}
	return (string_int);
}
