/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:34:50 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/06 11:25:30 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	j;
	
	j = nb;
	while (j > 1)
	{
		nb = nb * (j - 1);
		j--;
	}
	return (nb);
}

int	main(void)
{
	int	i;

	i = 5;
	i = ft_iterative_factorial(i);
	printf("%d", i);
	return (0);
}
