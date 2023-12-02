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
int _execute_command(char *argv[], char *command[], int counter, char *env[]);
int _stringlen(const char *input);
char *_stringdup(const char *input);
char *_stringcpy(char *dest, const char *src);
void _error_handler(char *name, int counter, char **command, int status);
int _count_commands(const char *command);
char **_create_full_command(const char *command);
char *_int_to_string(int number);
char *_get_path(void);
int _stringncmp(const char *first, const char *second, size_t no_bytes);
char *_check_path(const char *command);
char *_stringcat(char *dest, const char *src);
char *_get_input(void);
void _print_env(char **env);
int _check_exit(char **full_command);
long int _string_to_int(char *string);
void _free_full_command(char **full_command);

#endif
