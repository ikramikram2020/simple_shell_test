#include "shell.h"

/**
 * _strncmp - function that compares two strings at most nbr_bytes
 *
 * @first: first string
 * @second: second string
 * @nbr_bytes: number of bytes to compare
 *
 * Return: 0 if strings match at most nbr_bytes,
 * 1 otherwise
 */
int _strncmp(const char *first, const char *second, size_t nbr_bytes)
{
	size_t i;

	for (i = 0; i < nbr_bytes; i++)
	{
		if (first[i] == second[i])
			continue;
		return (1);
	}
	return (0);
}
