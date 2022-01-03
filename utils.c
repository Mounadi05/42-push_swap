/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:11:28 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/02 18:27:14 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
			i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	if (str)
		while(*str)
			write(1,str++,1);
}

void	ft_color(char *str, char *color)
{
	if (!ft_strcmp(color , "red"))
		ft_putstr("\033[1;31m");
	else if (!ft_strcmp(color , "green"))
		ft_putstr("\033[1;32m");
	else if (!ft_strcmp(color , "yellow"))
		ft_putstr("\033[1;33m");
	else if (!ft_strcmp(color , "bleu"))
		ft_putstr("\033[1;34m");
	else if (!ft_strcmp(color , "purple"))
		ft_putstr("\033[1;35m");
	else if (!ft_strcmp(color , "white"))
		ft_putstr("\033[1;37m");
	ft_putstr(str);
	ft_putstr("\033[0;0m");
}

void	is_not_num(char *str)
{
	int a;
	int i;

	a = 1;
	i = 0;
	if (str[i] == '-' && !str[++i])
		a = -1;
	while(str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			a = -1;
		i++;
	}
	if (a == -1)
	{
		ft_color(str,"white");
		ft_color(" is not number\n","yellow");
		exit(0);
	}
}

int	ft_atoi(char *str)
{
	int		i;
	unsigned int	res;
	int		ng;

	i = 0;
	res = 0;
	ng = 1;
	if (str[i] == '-' && ++i)
		ng = -ng;
	is_not_num(str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
		if ((res > MAX_POS && ng == 1) || res > MAX_NEG)
		{
			if (ng == 1)
				ft_color("\n\tInvalid Number Positive 🙊\n", "purple");
			else
				ft_color("\n\tInvalid Number Negative 🙊\n", "purple");
			exit(0);
		}
	}
	return (res * ng);
}
