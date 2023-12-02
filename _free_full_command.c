#include "shell.h"

/**
 * _free_full_command - free a full command  array
 *
 * @full_command: array of command
 * Return: void
 */

void _free_full_command(char **full_command)
{
	int i;

	i = 0;
	while (full_command[i] != NULL)
	{
		free(full_command[i]);
		i++;
	}
	free(full_command);
}
