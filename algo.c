/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 07:49:08 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:55 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list **stack, int ac)
{
	int			*tab;
	int			i;
	t_list		*head;

	tab = sort_stack(*stack, ac);
	head = *stack;
	while (head)
	{
		i = 0;
		while (i < ac)
		{
			if (head->val == tab[i])
			{
				head->in = i;
				break ;
			}
			i++;
		}
		head = head->next;
	}
	free(tab);
	tab = NULL;
}

int	find_way(t_list *stack_b, int b)
{
	t_list	*head;
	int		i;
	int		u;

	i = 0;
	u = 0;
	head = stack_b;
	while (head)
	{
		if (head->in == b)
			u = u + i;
		i++;
		head = head->next;
	}
	return (u);
}

void	ft_swap(int *a, int *b)
{
	int	u;

	u = *a;
	*a = *b;
	*b = u;
}

int	*sort_stack(t_list *stack_a, int ac)
{
	int		*tab;
	int		i;
	int		j;
	t_list	*stack;

	j = -1;
	i = 0;
	stack = stack_a;
	tab = (int *)malloc(4 * ac);
	while (stack)
	{
		tab[i] = stack->val;
		stack = stack->next;
		i++;
	}
	while (++j < ac)
	{
		i = 0;
		while (++i < ac)
			if (tab[i] < tab[i - 1])
				ft_swap(&tab[i], &tab[i - 1]);
	}
	return (tab);
}

void	sort_stack_b(t_list **stack, t_list **stack_b, int min, int max)
{
	int	i;
	int	val;

	while (max > min || max == 0)
	{
		i = 0;
		val = (find_way(*stack_b, max) < (ft_lstsize(*stack_b) / 2));
		while (val && i < 1)
		{
			if ((*stack_b)->in == max && ++i)
				pa(stack, stack_b);
			else
				rb(stack_b);
		}
		while (!val && i < 1)
		{
			if ((*stack_b)->in == max && ++i)
				pa(stack, stack_b);
			else
				rrb(stack_b);
		}
		max--;
	}
}
