#include "shell.h"

/**
 * main - main shell to execute commands
 *
 * @argc: number of arguments
 * @argv: array of strings of arguments
 *
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char **argv)
{
	(void)argc, (void)argv;

	_print_prompt();

	return (0);
}
