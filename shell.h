#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

void _print_prompt(void);
char *_get_input(void);
char **_create_command(const char *command);
int _count_commands(const char *command);
void _error_handler(char *name, int count, char **command, int status);
int _execute_command(char *argv[], char *command[], int count, char *env[]);
char *_get_path(void);
char *_check_path(const char *command);
void _print_env(char **env);
int _check_exit(char **full_command);
void _free_command(char **full_command);

/* helper functions */
long int _atoi(char *string);
char *_itoa(int number);

/* string functions */
int _strlen(const char *input);
char *_strdup(const char *input);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int _strncmp(const char *first, const char *second, size_t nbr_bytes);

#endif /* _SHELL_H_ */
