#include "push_swap.h"

int arrLength(char *array)
{
    int i = 0;
    while (array[i] != '\0')
        i++;
    return (i);
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int isNumber(char *array)
{
    int i = 0;
    while (i < arrLength(array))
    {
        if (!ft_isdigit(array[i]))
            return 0;
        i++;
    }
    return (1);
}

int checkAccurances(char *c, char *array)
{
    int i;
    i = 0;

    while(array[i++])
    {
        if (array[i] == c)
        {
           return 1;
        }
    }
    return 0;
}

int main(int ac, char **argv)
{
    char arr[50] = "1 2 3 54 1 01";

    char arra[50] = "1 15 13 16 15 2 4 651 254 155 684 123 6541 12 354";
    // printf("%d",checkAccurances('1'));
    // printf("%d", arrLength(arr));
    printf("%d", isNumber(arr));
    printf("%d", ft_isdigit('h'));
}