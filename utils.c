/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:11:28 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:42:08 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			write(1, str++, 1);
}

void	is_not_num(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	if (str[i] == '-' && !str[++i])
		a = -1;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			a = -1;
		i++;
	}
	if (a == -1)
		ft_error();
}

int	ft_atoi(char *str)
{
	int				i;
	unsigned int	res;
	int				ng;

	i = 0;
	res = 0;
	ng = 1;
	if (str[0] == '\0')
		ft_error();
	if (str[i] == '-' && ++i)
		ng = -ng;
	is_not_num(str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
		if ((res > MAX_POS && ng == 1) || res > MAX_NEG)
		{
			if (ng == 1)
				ft_error();
			else
				ft_error();
		}
	}
	return (res * ng);
}
