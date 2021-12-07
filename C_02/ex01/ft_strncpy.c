/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:53:41 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 15:49:53 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	up;

	up = 0;
	while ((up < n) && (src[up] != '\0'))
	{	
		dest[up] = src[up];
		up++;
	}
	while (up < n)
	{
		dest[up] = '\0';
		up++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int		i;
	char	arr1[] = "hello world";
	char	arr2[0];

	i = 0;
	ft_strncpy(arr2, arr1, i);
	printf("%s", arr2);
	return (0);
}*/
