/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 09:56:29 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] < 97 || str[up] > 122)
			return (0);
		up++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr0[] = "Az";
	char	arr1[] = "abcdez";
	char	arr2[] = "";
	char	arr3[] = "1ab2";
	int		ret;

	ret = ft_str_is_lowercase(arr0);
	printf("%d\n", ret);
	ret = ft_str_is_lowercase(arr1);
	printf("%d\n", ret);
	ret = ft_str_is_lowercase(arr2);
	printf("%d\n", ret);
	ret = ft_str_is_lowercase(arr3);
	printf("%d\n", ret);
	return (0);
}*/
