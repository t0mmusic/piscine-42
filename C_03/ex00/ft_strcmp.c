/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:26:00 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/02 18:31:37 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str0[] = "12345";
	char	str1[] = "12347";
	char	str2[] = "123456";
	char 	str3[] = "12345";
	int		ret;

	ret = ft_strcmp(str0, str1);
	printf("%d\n", ret);
	ret = ft_strcmp(str0, str2);
	printf("%d\n", ret);
	ret = ft_strcmp(str0, str3);
	printf("%d\n", ret);
}*/
