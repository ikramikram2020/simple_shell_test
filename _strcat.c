#include "shell.h"

/**
 * _strcat - concat src string to dest string
 *
 * @dest: destination string to concat to
 * @src: source string to concat from
 *
 * Return: new dest string
 */
char *_strcat(char *dest, const char *src)
{
	int i, j;

	if (src == NULL)
		return (dest);

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[j + i] = src[j];

	dest[j + i] = '\0';
	return (dest);
}
