/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:00:07 by jbrown            #+#    #+#             */
/*   Updated: 2021/11/29 12:16:40 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 6;
	j = 3;
	k = i + 48;
	l = j + 48;
	write(1, &k, 1);
	write(1, &l, 1);
	ft_ultimate_div_mod(&i, &j);
	k = i + 48;
	l = j + 48;
	write(1, &k, 1);
	write(1, &l, 1);
}
