/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:13:41 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/04 17:47:45 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int str[n - 1];

	i = 0;
	while (i < n)
	{
		str[i] = i + '0';
		ft_putchar(str[i]);
		i++;
	}
	str[i] = '\0';
	j = 0;
	while (str[j] )
	{

	}
}

int	main(void)
{
	int i;

	i = 8;
	ft_print_combn(i);
	return (0);
}
