/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:18:54 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/18 12:56:33 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int array[] = {0,1,2,3,4,5,6,7,8,9};
	int	length;
	int	i;

	length = 10;
	i = 0;
	while (i < 10)
		printf("%d", array[i++]);
	printf("\n");
	ft_rev_int_tab(array, length);
	i = 0;
	while (i < 10)
		printf("%d", array[i++]);
	return (0);
}*/
