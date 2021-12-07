/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:56:33 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/02 13:16:13 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
/*
int	main(void)
{
	char	*str;
	int		i;

	str = "hello world";
	i = ft_strlen(str);
	printf("The string %s contains %d characters.", str, i);
	return (0);
}*/
