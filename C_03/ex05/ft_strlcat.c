/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:46:03 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/18 12:10:59 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while ((i + 1) < size && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
/*
int	main(int argc, char **argv)
{
//	char			str[100];
	char			str1[100];
	unsigned int	i;
	unsigned int	j;

	i = 13;
	j = 13;
//	ft_strlcat(str, argv[1], i);
//	i  = ft_strlcat(str, argv[2], i);
//	printf("%s\n", str);
//	printf("%d\n", i);
	strlcat(str1, argv[1], j);
	j = strlcat(str1, argv[2], j);
	printf("%s\n", str1);
	printf("%d\n", j);
	return (0);
}*/
