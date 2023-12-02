#include "shell.h"

/**
 * _get_input - get's input from the user
 *
 * Return: pointer to string holding input
*/
char *_get_input(void)
{
	char *get_input = NULL;
	size_t n = 0;
	ssize_t no_chars_read;

	no_chars_read = getline(&get_input, &n, stdin);
	if (no_chars_read == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "\n", 1);
		}
		free(get_input);
		exit(0);
	}

	return (get_input);
}
