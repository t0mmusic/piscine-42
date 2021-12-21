/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:13:41 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/04 17:47:45 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	*limarray(int *lim, int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	while (i < n)
	{
		lim[i] = 10 - j;
		i++;
		j--;	
	}
	lim[i] = '\0';
	return (lim);
}

int	*nbarray(int *nb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		nb[i] = i;
		i++;
	}
	nb[i] = '\0';
	return (nb);
}

void	printnb(int *nb, int n, int this, int that)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(nb[i] + '0');
		i++;
	}
	if (this != that)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	nb[n];
	int	lim[n];

	nbarray(nb, n);
	limarray(lim, n);
	printnb(nb, n, nb[0], lim[0]);
	i = 0;
	while (nb[0] != lim[0])
	{
		if (nb[i + 1] != lim[i + 1] && nb[i + 1])
			i++;
		else
		{
			nb[i] = nb[i] + 1;
			while (nb[i + 1])
			{
				nb[i + 1] = nb[i] + 1;
				i++;
			}
			printnb(nb, n, nb[0], lim[0]);
			i = 0;
		}

	}
}

int	main(void)
{
	ft_print_combn(10);
	return (0);
}
