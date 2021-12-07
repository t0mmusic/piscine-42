/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 09:49:13 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] < 48 || str[up] > 57)
			return (0);
		up++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr0[] = "09";
	char	arr1[] = "abcdeZ";
	char	arr2[] = "a1";
	char	arr3[] = "";
	int		ret;

	ret = ft_str_is_numeric(arr0);
	printf("%d\n", ret);
	ret = ft_str_is_numeric(arr1);
	printf("%d\n", ret);
	ret = ft_str_is_numeric(arr2);
	printf("%d\n", ret);
	ret = ft_str_is_numeric(arr3);
	printf("%d\n", ret);
	return (0);
}*/
