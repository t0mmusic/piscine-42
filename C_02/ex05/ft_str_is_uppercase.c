/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 09:59:55 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] < 65 || str[up] > 90)
			return (0);
		up++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr0[] = "AZ";
	char	arr1[] = "abZcdez";
	char	arr2[] = "";
	char	arr3[] = "A1B2C3";
	int		ret;

	ret = ft_str_is_uppercase(arr0);
	printf("%d\n", ret);
	ret = ft_str_is_uppercase(arr1);
	printf("%d\n", ret);
	ret = ft_str_is_uppercase(arr2);
	printf("%d\n", ret);
	ret = ft_str_is_uppercase(arr3);
	printf("%d\n", ret);

	return (0);
}*/
