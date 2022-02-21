/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:04:12 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:51 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_while(t_list **s, t_list **s_b, int ac)
{
	while (ft_lstsize(*s) > 8)
	{
		if ((*s)->in < ac - 8)
			pb(s, s_b);
		else
			ra(s);
	}
	five_sort(s, s_b);
	sort_stack_b(s, s_b, 0, ac - 9);
}

void	middle_sort(t_list **s, t_list **s_b, int ac, t_var var)
{
	ft_var(&var, ac, s);
	while (var.a < ac - 48)
	{
		while (var.a < var.b && var.a < ac - 48)
		{
			if ((*s)->in >= var.max && (*s)->in < var.max + 16 && ++var.a)
				pb(s, s_b);
			else if ((*s)->in >= ac - var.y - 20 && (*s)->in < ac - var.y)
				ft_norm(s, s_b, &var.n);
			else
				ra(s);
			if (var.n == 20 && var.y >= 20)
				var.y -= 12;
		}
		var.b += 16;
		var.max += 16;
	}
	ft_while (s, s_b, ac);
}

void	high_sort(t_list **s, t_list **s_b, int ac, t_var var)
{
	ft_var(&var, ac, s);
	var.y = 160;
	var.b = 40;
	while (var.a < ac - 200)
	{
		while (var.a < var.b && var.a < ac - 200)
		{
			if ((*s)->in >= var.max && (*s)->in < var.max + 40 && ++var.a)
				pb(s, s_b);
			else if ((*s)->in >= ac - var.y - 40 && (*s)->in < ac - var.y)
				ft_norm(s, s_b, &var.n);
			else
				ra(s);
			if ((var.n == 40 && var.y >= 120) || (var.n == 80 && var.y >= 80)
				|| (var.n == 120 && var.y >= 40))
			var.y -= 40;
		}
		var.b += 40;
		var.max += 40;
	}
	while (*s)
		pb(s, s_b);
	sort_stack_b(s, s_b, 0, ac - 1);
}

void	sort(t_list **stack, int ac, t_list **stack_b, t_var var)
{
	if (ac <= 3)
		easy_sort(stack);
	else if (ac > 3 && ac <= 5)
		five_sort(stack, stack_b);
	else if (ac <= 100)
		middle_sort(stack, stack_b, ac, var);
	else
		high_sort(stack, stack_b, ac, var);
}
