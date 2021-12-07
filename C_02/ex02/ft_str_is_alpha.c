/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 09:45:47 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] < 65 || str[up] > 122)
			return (0);
		up++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr0[] = "11111";
	char	arr1[] = "abcdeZ";
	char	arr2[] = "";
	char	arr3[] = "a12b3c";
	int		ret;

	ret = ft_str_is_alpha(arr0);
	printf("%d\n", ret);
	ret = ft_str_is_alpha(arr1);
	printf("%d\n", ret);
	ret = ft_str_is_alpha(arr2);
	printf("%d\n", ret);
	ret = ft_str_is_alpha(arr3);
	printf("%d\n", ret);
	return (0);
}*/
