#include "../include/push_swap.h"

void sa(t_stack *stack)
{
    int swap = stack->array[0];
    stack->array[0] = stack->array[1];
    stack->array[1] = swap;
}

void ra(t_stack *stack, int ac, int first)
{
    for (int i = 0; i < ac - 2; i++)
        stack->array[i] = stack->array[i + 1];
    stack->array[ac - 2] = first;
}