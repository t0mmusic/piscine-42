/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:18:54 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/04 18:22:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(char *tab, int size)
{
	char	*array;
	int		countup;
	int		countdwn;
	
	array = tab;
	countup = 0;
	countdwn = size - 1;
	printf("%s\n", array);
	size--;
	while (countup < size)
	{
		tab[countup] = array[countdwn];
		countdwn--;
		countup++;
	}
	printf("%s\n", tab);
}

int	main(void)
{
	char array[] = "0123456789";
	int	length;

	length = 10;
	printf("%s\n", array);
	ft_rev_int_tab(array, length);
//	printf("%s\n", array);
	return (0);
}
