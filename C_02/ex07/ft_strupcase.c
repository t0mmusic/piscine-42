/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:43 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 10:06:53 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		up;

	up = 0;
	while (str[up] != '\0')
	{
		if ((str[up] > 96) && (str[up] < 123))
			str[up] = str[up] - 32;
		up++;
	}
	str[up] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	arr0[] = "7az31";
	char	arr1[] = "abZcdez";
	char	arr2[] = "AbcDe";

	ft_strupcase(arr0);
	printf("%s\n", arr0);
	ft_strupcase(arr1);
	printf("%s\n", arr1);
	ft_strupcase(arr2);
	printf("%s\n", arr2);
	return (0);
}*/
