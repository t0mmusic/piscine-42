/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:56:33 by jbrown            #+#    #+#             */
/*   Updated: 2021/11/29 13:18:12 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Hi, everybody";
	int		length;
	
	length = ft_strlen(str);
	printf("%d\n", length);
	return (0);
}
