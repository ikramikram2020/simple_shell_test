#include "shell.h"

/**
 * _create_full_command - creates an array of strings from a command
 *
 * @command: command to create an array of strings from
 *
 * Return: array of strings of the full command
 */
char **_create_full_command(const char *command)
{
	int no_command, i;
	const char *delim = " \t\n";
	char *command_copy, *single_command;
	char **full_command;

	if (command == NULL)
		return (0);
	no_command = _count_commands(command);
	if (no_command == 0)
		return (NULL);
	command_copy = _stringdup(command);
	full_command = malloc(sizeof(char *) * (no_command + 1));
	if (full_command == NULL)
	{
		perror("malloc");
		_free_full_command(full_command);
		free(command_copy);
		exit(1);
	}
	single_command = strtok(command_copy, delim);
	for (i = 0; single_command != NULL; i++)
	{
		full_command[i] = malloc(sizeof(char) * _stringlen(single_command) + 1);
		if (full_command[i] == NULL)
		{
			perror("malloc");
			_free_full_command(full_command);
			free(command_copy);
			free(single_command);
			exit(1);
		}
		_stringcpy(full_command[i], single_command);
		single_command = strtok(NULL, delim);
	}
	full_command[i] = NULL;
	free(command_copy);
	command_copy = NULL;
	free(single_command);
	return (full_command);
}
