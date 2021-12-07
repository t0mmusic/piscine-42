/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:18:17 by jbrown            #+#    #+#             */
/*   Updated: 2021/11/29 15:56:53 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_putstr.c"

void	ft_putstr(char *str);

int	main(void)
{
	char string[] = "hello";
	char *string0;

	string0 = string;
	ft_putstr(string0);
	write(1, "a", 1);
	return (0);
}
