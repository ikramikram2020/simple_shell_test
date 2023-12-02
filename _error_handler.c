#include "shell.h"

/**
 * _error_handler - prints error messages like sh
 *
 * @name: my shell's name
 * @command: command written
 * @counter: command counter
 * @status: error status, put 0 for exit, otherwise 1
 *
 * Return: void
 */
void _error_handler(char *name, int counter, char **command, int status)
{
	char *string_counter;

	string_counter = _int_to_string(counter);
	write(STDERR_FILENO, name, _stringlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, string_counter, _stringlen(string_counter));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command[0], _stringlen(command[0]));
	write(STDERR_FILENO, ": ", 2);
	if (status == 1)
		write(STDERR_FILENO, "not found", 9);
	else
	{
		write(STDERR_FILENO, "Illegal number", 14);
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, command[1], _stringlen(command[1]));
	}
	write(STDERR_FILENO, "\n", 1);

	free(string_counter);
}
