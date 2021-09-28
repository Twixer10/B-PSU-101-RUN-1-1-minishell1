/*
** EPITECH PROJECT, 2021
** MYSH
** File description:
** MYSH
*/

#ifndef MYSH_H_
#define MYSH_H_
#define SETSIG 0
#define GETSIG 1
#define SIGINT_IGNORE 0
#define SIGINT_REGULAR 1

#include "./my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

typedef struct mysh_h
{
    char **env;
} mysh_t;

char **envcpy(char **env);
int get_cmd(char **cmd, mysh_t *mysh);
void free_array(char ***array);
char *get_last(char **array);
void command_manager(mysh_t *mysh, char *str);
void my_exit(int erroc_code, char *error_message);
char *my_newstrcpy(char *str);
char *my_getenv(char **env, const char *to_find);
void show_env(char **env);
void my_unsetenv(mysh_t *sh, char **to_unset);
int command_cd(char ***env, char **argv);
void my_setenv(char ***env, char *to_change, char *new_value);
char *clean_str(char *str);
int array_len(char **array);
int check_exe(char *exe, char **cmd);
void parent_exec(pid_t pid, int *status);
int signal_handler(int sigint_behavior);
int run_setenv(char ***env, char **cmd);
char **envcpyforrm(char **env, char *rm);

#endif /* !MYSH_H_ */
