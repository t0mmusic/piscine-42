/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:40:14 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/08 10:08:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	tmp;

	tmp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = tmp * nb;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	i;

	i = 6;
	printf("%d\n", ft_iterative_power(i, 2));
	return (0);
}*/
