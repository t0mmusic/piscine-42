/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:52:13 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/13 18:01:40 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	totalstrlen(int size, char **strs, char *sep)
{
	int	r;
	int	i;

	i = 0;
	r = 1;
	while (strs[i])
	{
		r += ft_strlen(strs[i]);
		i++;
	}
	r += ft_strlen(sep) * (size - 1);
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*r;

	r = (char *) malloc(totalstrlen(size, strs, sep) * sizeof(char));
	if (r == NULL)
		return (r);
	i = 0;
	while (i < size)
	{
		ft_strcat(r, strs[i]);
		if (i != size - 1)
		{
			ft_strcat(r, sep);
		}
		i++;
	}
	return (r);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc, argv, " / "));
	return (0);
}*/
