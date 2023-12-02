#include "shell.h"

/**
 * _strlen - function that calculates the input
 * length excluding \0
 *
 * @input: string to be calculates its length
 * Return: length of string
 */

int _strlen(const char *input)
{

	int len;

	for (len = 0; input[len] != '\0'; len++)
		;

	return (len);
}
