/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 10:11:19 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		up;

	up = 0;
	while (str[up] != '\0')
	{
		if ((str[up] > 64) && (str[up] < 91))
			str[up] = str[up] + 32;
		up++;
	}
	str[up] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	arr0[] = "1az234";
	char	arr1[] = "abZcdez";
	char	arr2[] = "AbcDe";

	ft_strlowcase(arr0);
	printf("%s\n", arr0);
	ft_strlowcase(arr1);
	printf("%s\n", arr1);
	ft_strlowcase(arr2);
	printf("%s\n", arr2);
	return (0);
}*/
