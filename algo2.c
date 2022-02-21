/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:11:33 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:59 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_sort(t_list **stack, t_list **stack_b)
{
	int		a;

	a = 0;
	while (!(check_stack(*stack)) || a != 0)
	{	
		if (((*stack)->val > ft_lstlast(*stack)->val)
			&& ((*stack)->next->val > ft_lstlast(*stack)->val))
			rra(stack);
		else if (((*stack)->val > ft_lstlast(*stack)->val))
			ra(stack);
		else if ((*stack)->val > (*stack)->next->val)
			sa(*stack);
		else if (check_stack(*stack) && a != 0)
		{
			pa(stack, stack_b);
			a--;
		}
		else
		{
			pb(stack, stack_b);
			a++;
		}
	}
}

void	easy_sort(t_list **stack)
{
	while (!(check_stack(*stack)))
	{
		if ((*stack)->val > ft_lstlast(*stack)->val)
			ra(stack);
		else if ((*stack)->val > (*stack)->next->val)
			sa(*stack);
		else if ((*stack)->val < ft_lstlast(*stack)->val)
			rra(stack);
	}
}

void	ft_norm(t_list **stack, t_list **stack_b, int *n)
{
	pb(stack, stack_b);
	rb(stack_b);
	(*n)++;
}

void	ft_var(t_var *var, int ac, t_list **stack)
{
	var->max = 0;
	var->b = 16;
	var->a = 0;
	var->n = 1;
	var->y = 20;
	ft_index(stack, ac);
}
