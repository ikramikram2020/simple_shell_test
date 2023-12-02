#include "shell.h"

/**
 * _count_commands - count number of commands
 *
 * @command: full command to count its number of commands
 *
 * Return: number of commands
 */
int _count_commands(const char *command)
{
	char *single_command, *command_copy;
	const char *delim = " \t\n";
	int no_command = 0;

	command_copy = _stringdup(command);

	single_command = strtok(command_copy, delim);
	while (single_command != NULL)
	{
		no_command++;
		single_command = strtok(NULL, delim);
	}
	free(command_copy);
	free(single_command);
	return (no_command);
}
