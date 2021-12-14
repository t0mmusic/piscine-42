/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 09:17:29 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/12 18:47:02 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	errorcheck(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error", 6);
			exit (1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*list;
	int		first;

	first = 1;
	if (argc != 2 && argc != 3)
		return (0);
	if (argc == 3)
	{
		errorcheck(argv[2]);
		list = assigndict(argv[1]);
		ft_print(ft_atoi(argv[2]), list, &first);
	}
	if (argc == 2)
	{
		errorcheck(argv[1]);
		list = assigndict("numbers.dict");
		ft_print(ft_atoi(argv[1]), list, &first);
	}
	return (0);
}
