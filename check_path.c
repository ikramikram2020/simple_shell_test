#include "shell.h"

/**
 * _check_path - checks if the command exists in one
 * of the PATH directories
 *
 * @command: command to check
 *
 * Return: command path if it exists,
 * if it doesn't exist return the command as it was
 */
char *_check_path(const char *command)
{
	char *path, *new_path, *new_command, *dir, *command_copy;
	int dir_len;
	int command_len = _stringlen(command);
	struct stat buf;

	command_copy = _stringdup(command);
	path = _get_path();
	if (path)
	{
		new_path = _stringdup(path);
		dir = strtok(new_path, ":");
		while (dir != NULL)
		{
			dir_len = _stringlen(dir);
			new_command = malloc(sizeof(char) * (dir_len + command_len + 2));
			_stringcpy(new_command, dir);
			_stringcat(new_command, "/");
			_stringcat(new_command, command_copy);
			_stringcat(new_command, "\0");

			if (stat(new_command, &buf) == 0)
			{
				free(new_path);
				free(command_copy);
				return (new_command);
			}
			else
			{
				free(new_command);
				dir = strtok(NULL, ":");
			}
		}
		free(new_path);
		if (stat(command_copy, &buf) == 0)
			return (command_copy);
		free(command_copy);
		return (NULL);
	}
	free(command_copy);
	return (NULL);
}
