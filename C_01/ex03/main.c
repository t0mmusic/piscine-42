/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:50:22 by jbrown            #+#    #+#             */
/*   Updated: 2021/11/29 10:39:20 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	i;
	int	j;
	int k;
	int	l;

	i = 6;
	j = 3;
	k = i + 48;
	l = j + 48;
	write(1, &k, 1);
	write(1, &l, 1);
	write(1, "\n", 1);
	ft_div_mod(i, j, &k, &l);
	k = k + 48;
	l = l + 48;
	write(1, &k, 1);
	write(1, &l, 1);
}
