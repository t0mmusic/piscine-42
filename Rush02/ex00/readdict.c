/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readdict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:13:15 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/12 19:08:25 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_getnb(int fd)
{
	int		i;
	char	c;
	char	*str;

	read(fd, &c, 1);
	str = malloc(sizeof(char) * 128);
	if (str == 0)
		return (1);
	i = 0;
	while (c >= '0' && c <= '9')
	{
		str[i] = c;
		read(fd, &c, 1);
		i++;
	}
	return (ft_atoi(str));
}

char	*ft_getval(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == 0)
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

t_list	*assigndict(char *dictionary)
{
	char	c;
	char	*tmp;
	int		fd;
	int		i;
	t_list	*list;

	list = malloc(sizeof(t_list) * 40);
	fd = open(dictionary, O_RDONLY);
	i = 0;
	while (i < 41)
	{
		list[i].nb = ft_getnb(fd);
		while (c < 'a' || c > 'z')
			read(fd, &c, 1);
		tmp = ft_getval(fd, &c);
		list[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (list);
}
