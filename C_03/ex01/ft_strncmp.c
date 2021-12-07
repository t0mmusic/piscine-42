/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:04:02 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/03 10:22:32 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	unsigned int	i;
	char			str1[] = "hel";
	char			str2[] = "hello world    ";

	i = 3;
	i = ft_strncmp(str1, str2, i);
	printf("%d\n", i);
	i = 4;
	i = ft_strncmp(str1, str2, i);
	printf("%d\n", i);
	i = 255;
	i = ft_strncmp(str1, str2, i);
	printf("%d\n", i);
	return (0);
}*/
