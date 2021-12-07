/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:27:40 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/06 16:20:16 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (n < 46341 && n <= nb / 2)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(4));
	return (0);
}
