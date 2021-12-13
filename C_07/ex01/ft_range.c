/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:27:15 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/13 09:48:09 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	index;

	index = 0;
	str = (int *) malloc((max - min) * sizeof(int));
	if (min >= max || str == NULL)
		return (0);
	while (min < max)
		str[index++] = min++;
	str[index] = '\0';
	return (str);
}
/*
int	main(void)
{
	int	*test;
	int	i;

	test = ft_range(8, 1);
	i = 0;
	printf("%lu\n", sizeof (1 - 8));
//	while (test[i])
//	{
//		printf("%d", test[i++]);
//	}
	return (0);
}*/
