/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:18:17 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/01 10:35:49 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	write(1, str, length);
}
/*
int	main(void)
{
	char	*arr;

	arr = "hello world";
	ft_putstr(arr);
	return (0);
}*/
