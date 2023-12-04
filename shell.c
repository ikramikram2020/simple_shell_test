#include "shell.h"

/**
 * main - Main shell to execute commands.
 *
 * @argc: Number of arguments.
 * @argv: Array of strings representing arguments.
 * @env: Array of strings representing environment variables.
 *
 * Return: 0 on success, -1 on failure.
 */
int main(int argc, char **argv, char **env)
{
	int counter = 1;
	(void)argc;

	while (1)
	{
		char *get_input;
		char **full_command;

		_print_prompt();
		get_input = _get_input();
		if (get_input[0] == '\n' || get_input == NULL)
		{
			free(get_input);
			continue;
		}
		full_command = _create_full_command(get_input);
		free(get_input);
		get_input = NULL;
		if (full_command == NULL)
			continue;
		if (_check_exit(full_command) == -1)
		{
			_error_handler(argv[0], counter, full_command, 0);
			_free_full_command(full_command);
			if (!isatty(STDIN_FILENO))
				exit(2);
			counter++;
			continue;
		}
		if (_stringncmp(full_command[0], "env", 3) == 0)
		{
			_print_env(env);
			continue;
		}
		_execute_command(argv, full_command, counter, env);
		_free_full_command(full_command);
		full_command = NULL;
		counter++;
	}
	return (0);
}

