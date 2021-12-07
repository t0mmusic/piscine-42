/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 12:29:46 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] < 32 || str[up] > 126)
			return (0);
		up++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr0[] = " AZ ~";
	char	arr1[] = "abZcdez";
	char	arr2[] = "";
	int		ret;

	ret = ft_str_is_printable(arr0);
	printf("%d\n", ret);
	ret = ft_str_is_printable(arr1);
	printf("%d\n", ret);
	ret = ft_str_is_printable(arr2);
	printf("%d\n", ret);
	return (0);
}*/
