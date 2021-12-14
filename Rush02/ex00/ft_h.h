/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:24:44 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/12 19:09:26 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_list
{
	unsigned long int	nb;
	char				*val;
}	t_list;

int		ft_atoi(char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
void	ft_print(int n, t_list *tab, int *first);
int		getdec(int nb);
int		getmult(int nb);
int		ft_getnb(int fd);
char	*ft_getval(int nb, char *c);
t_list	*assigndict(char *dictionary);

#endif
