/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:20:28 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/02 17:05:44 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_nbrprt(int nb)
{
	int	i[9];
	int	j;

	j = 0;
	while (nb > 9)
	{
		i[j] = nb % 10;
		j++;
		if (nb > 9)
			nb = nb / 10;
	}
	nb = nb + '0';
	write(1, &nb, 1);
	while (j > 0)
	{
		j--;
		i[j] = i[j] + '0';
		write(1, &i[j], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	ft_nbrprt(nb);
}
/*
int	main(void)
{
	int	j;

	j = -2;
	ft_putnbr(j);
	return (0);
}*/
