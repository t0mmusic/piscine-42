/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:41:16 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/18 13:01:00 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = 3;
	j = 6;
	printf("First value: %d\nSecond value: %d\n", i, j);
	ft_swap(&i, &j);
	printf("First value: %d\nSecond value: %d\n", i, j);
}*/
