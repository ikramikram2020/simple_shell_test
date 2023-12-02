#include "shell.h"

/**
 * _stringcpy - copies a string from src to dest
 *
 * @dest: string to copy to
 * @src: string to copy from
 *
 * Return: pointer to the dest string
 */
char *_stringcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
