#include "../include/push_swap.h"

int main(int ac, char **av)
{
    t_stack stack;
    
    
    // printf("%d", ac);
    if (ac > 2)
    {
        if (is_all_digit(av) != 1)
        {
            ft_putchar("Error!\n");
        }
        else
        {
            if (isDublicate(av) == 0)
            {
                ft_putchar("Error!\n");
            }
            else
            {
                makeArray(ac, av, &stack);
                stack.first = stack.array[0];
                stack.last = stack.array[ac - 2];
                int i = 0;
        
                // ra(&stack, ac, stack.first);
                rra(&stack, ac, stack.last);
                i = 0;
                while (i != ac - 1)
                {
                    printf("%d\n", stack.array[i]);
                    i++;
                }
            

                //    int *arr = makeArray(ac, av);
                //    int i = 0;
                //    while (i != ac-1)
                //    {
                //        printf("%d\n", arr[i]);
                //        i++;
                //    }
                //    sa(&arr);
                //     while (i != ac-1)
                //    {
                //        printf("%d\n", arr[i]);
                //        i++;
                //    }
            }
        }
    }
    else
    {
        ft_putchar("Error!\n");
    }
}