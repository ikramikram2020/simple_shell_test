#include "shell.h"

/**
 * _itoa - function that converts int number to a string
 *
 * @number: int to be converted
 *
 * Return: converted int as a string
*/
char *_itoa(int number)
{
	int nbr_digits = 0, temp;
	char *string_int;

	temp = number;
	if (number == 0)
		nbr_digits = 1;
	else
	{
		while (number != 0)
		{
			number = number / 10;
			nbr_digits++;
		}
	}

	string_int = malloc(sizeof(char) * (nbr_digits + 1));
	if (string_int == NULL)
	{
		perror("malloc");
		return (NULL);
	}
	string_int[nbr_digits] = '\0';

	while (nbr_digits > 0)
	{
		string_int[nbr_digits - 1] = '0' + (temp % 10);
		temp = temp / 10;
		nbr_digits--;
	}
	return (string_int);
}
