#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *str;
    int index;

    index = 0;
    str = (int *) malloc((max - min) * 4);
    if (min >= max || str == '\0')
    {
        str = '\0';
        return (str);
    }
    while (min < max)
    {
        str[index++] = min++;
    }
    str[index] = '\0';
    return (str);
}

int main(void)
{
    int *test;
    int i;

    test = ft_range(3, 7);
    i = 0;
    while (test[i])
    {
        printf("%d", test[i++]);
    }
    return (0);
}