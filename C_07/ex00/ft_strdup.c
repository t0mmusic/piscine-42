/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:02:52 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/09 17:24:48 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof (src));
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "hello world";

	printf("%s\n", str);
	printf("%lu\n", sizeof (str));
	printf("%s", ft_strdup(str));
	return (0);
}*/
