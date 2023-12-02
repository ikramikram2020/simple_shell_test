#include "shell.h"

/**
 * _stringncmp - compares two strings at most no_bytes
 *
 * @first: first string
 * @second: second string
 * @no_bytes: number of bytes to compare
 *
 * Return: 0 if strings match at most no_bytes,
 * 1 otherwise
 */
int _stringncmp(const char *first, const char *second, size_t no_bytes)
{
	size_t i;

	for (i = 0; i < no_bytes; i++)
	{
		if (first[i] == second[i])
			continue;
		return (1);
	}
	return (0);
}
