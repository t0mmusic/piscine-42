/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:25:06 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/06 10:51:47 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	int_conversion(char *str)
{
	int	output;

	output = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		output += *str - '0';
		output = output * 10;
		str++;
	}
	return (output / 10);
}

int	ft_atoi(char *str)
{
	int	output;
	int	i;
	int	positive;

	positive = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r' && str[i])
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+' && str[i])
	{
		if (str[i] == '-')
			positive++;
		i++;
	}
	output = int_conversion(str + i);
	if (positive % 2 == 1)
		output = -output;
	return (output);
}
/*
int	main(void)
{
	char	str[] = "  --+--+-109747abk";

	printf("%d", ft_atoi(str));
	return (0);
}*/
