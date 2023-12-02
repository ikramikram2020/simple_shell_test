#include "shell.h"

/**
 * _print_env - prints environment values
 *
 * @env: environment variables
 *
 * Return: void
*/
void _print_env(char **env)
{
	int i;

	i = 0;
	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _stringlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
