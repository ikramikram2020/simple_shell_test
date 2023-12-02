#include "shell.h"

/**
 * _print_prompt - prints "$ " prompt to the user
 *
 * Return: void
 */
void _print_prompt(void)
{
	char *prompt = "$ ";

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, prompt, 2);
	}
}
