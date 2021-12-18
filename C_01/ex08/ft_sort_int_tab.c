/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:05:21 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/18 12:59:43 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = temp;
			count = -1;
		}
		count++;
	}
}
/*
int	main(void)
{
	int str[] = {1,7,6,288,9,4,3,0,2,1,8};

	for (int i = 0; i < 11; i++)
		printf("%d ,", str[i]);
	printf("\n");
	ft_sort_int_tab(str, 11);
	for (int i = 0; i < 11; i++)		
		printf("%d ,", str[i]);
	return (0);
}*/
