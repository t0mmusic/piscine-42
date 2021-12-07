#include <stdio.h>


int	ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (n < 2147483647 / 2 && n <= nb / 2)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
    while (nb < 2147483647 && ft_is_prime(nb) != 1)
        nb++;
    return (nb);
}

int main(void)
{
    printf("%d\n", ft_find_next_prime(500));
    return (0);
}