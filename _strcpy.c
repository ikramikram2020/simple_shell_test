#include "shell.h"

/**
 * _strcpy - function that copies a string
 * from source to destination
 *
 * @dest: string to copy to
 * @src: string to copy from
 *
 * Return: pointer to the dest string
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
