#include "shell.h"

/**
 * _execute_command - executes a command provided by the user
 *
 * @argv: main program arguments
 * @command: array of string as command and its arguments
 * @counter: command counter
 * @env: environment
 *
 * Return: 0 on success, otherwise 1
 */
int _execute_command(char **argv, char **command, int counter, char **env)
{
	pid_t child;
	int status;
	char *cmd = _check_path(command[0]);

	if (cmd == NULL)
	{
		_error_handler(argv[0], counter, command, 1);
		free(cmd);
		if (isatty(STDIN_FILENO))
			return (127);
		exit(127);
	}

	if (argv == NULL)
	{
		_free_full_command(command);
		free(cmd);
		return (1);
	}

	child = fork();

	if (child < 0)
	{
		perror("fork");
		_free_full_command(command);
		free(cmd);
		exit(1);
	}
	else if (child == 0)
		execve(cmd, command, env);
	else
	{
		free(cmd);
		waitpid(child, &status, 0);
	}
	return (0);
}
