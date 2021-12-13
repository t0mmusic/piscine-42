/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:04:35 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/13 18:00:15 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	r;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = max - min;
	*range = (int *) malloc(sizeof(r) * r);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (r);
}
/*
int	main(void)
{
	int	i;
	int	**str;

	i = 0;
	printf("%d numbers:\n", ft_ultimate_range(str, 15, 20));
	while (str[0][i])
		printf("%d\n", (*str)[i++]);
	return (0);
}*/
