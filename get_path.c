#include "shell.h"

/**
 * _get_path - gets the value of the variable PATH
 *
 * Return: value of PATH variable
*/
char *_get_path(void)
{
	int i;

	if (environ == NULL)
		return (NULL);

	for (i = 0; environ[i] != NULL; i++)
	{
		if ((_stringncmp(environ[i], "PATH", 4)) == 0)
			return (environ[i] + 5);
	}
	return (NULL);
}
