#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define BUFFER_SIZE 1

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include <math.h>
#include <time.h>

typedef struct s_stack
{
    int *array;
    int first;
    int last;
}            t_stack;

int         is_all_digit(char **av);
void        ft_putchar(char *str);
// int         *makeArray(int ac, char **av);
int         isdub(char **av, char *c, int i);
int         isDublicate(char **av);
void        sa(t_stack *stack);
void        makeArray(int ac, char **av, t_stack *st);
void        ra(t_stack *stack, int ac, int first);
void        rra(t_stack *stack, int ac, int last);
#endif