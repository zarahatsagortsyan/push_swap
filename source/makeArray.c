#include "../include/push_swap.h"

// int *makeArray(int ac, char **av)
// {
    
//     int *newArray = (int *)malloc(sizeof(int) * (ac - 1));
//     int i = 0;
//     int j = 1;
//     while (av[j])
//     {
//         newArray[i] = ft_atoi(av[j]);
//         i++;
//         j++;
//     }
//     return newArray;
// }

void makeArray(int ac, char **av, t_stack *st)
{
    st->array = (int *)malloc(sizeof(int) * (ac - 1));
    int i = 0;
    int j = 1;
    while (av[j])
    {
        st->array[i] = ft_atoi(av[j]);
        i++;
        j++;
    }
}