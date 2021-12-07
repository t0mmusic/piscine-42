#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    i = 0;
    while (src[i])
        i++;
    dest = (char*) malloc(i);
    ft_strcpy(dest, src);
    return (dest);
}

int main(void)
{
    char    str[] = "too much bacon";

    printf("%s\n%u\n", str, str);
    printf("%s\n%u", ft_strdup(str), ft_strdup(str));
    return (0);
}