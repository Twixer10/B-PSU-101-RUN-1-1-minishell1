/*
** EPITECH PROJECT, 2021
** MY SH
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/mysh.h"

int main(int ac, char **av, char **env)
{
    mysh_t mysh;
    ac = ac;
    av = av;
    char *cmd = NULL;

    mysh.env = envcpy(env);
    while (get_cmd(&cmd, &mysh) != -1) {
        command_manager(&mysh, clean_str(cmd));
        cmd = NULL;
    }
    free(cmd);
    if (isatty(0))
        my_printf("exit\n");
    return (0);
}