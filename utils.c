/*
** EPITECH PROJECT, 2021
** UTILS
** File description:
** utils
*/

#include "./include/mysh.h"

void my_exit(int erroc_code, char *error_message)
{
    my_putstr(error_message);
    exit(erroc_code);
}


char *trim (char *str)
{
    char *ibuf, *obuf;

    if (str) {
        for (ibuf = obuf = str; *ibuf;) {
            while (*ibuf && (*ibuf == ' '))
                ibuf++;
            if (*ibuf && (obuf != str))
                *(obuf++) = ' ';
            while (*ibuf && (*ibuf != ' '))
                *(obuf++) = *(ibuf++);
        }
        *obuf = '\0';
    }
    return (str);
}

char *clean_str(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == '\t' || str[i] == '\n') {
            str[i] = ' ';
        }
        i++;
    }
    return (trim(str));
}

int array_len(char **array)
{
    int i = 0;

    for (; array[i]; i++);
    return (i);
}