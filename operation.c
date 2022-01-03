/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:28:28 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/03 17:25:53 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *head)
{
	int u;

	u = head->val;
	head->val = head->next->val;
	head->next->val = u;
	ft_color("sa\n","green");
}

void	sb(t_list *head)
{
	int u;

	u = head->val;
	head->val = head->next->val;
	head->next->val = u;
	ft_color("sb\n","green");
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_color("ss\n","green");
}

void	rra(t_list **stack)
{
	t_list *head;
	t_list *tmp;
	head = *stack;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	tmp->next = *stack;
	head->next = NULL;
	*stack = tmp;
	ft_color("rra\n","green");
}

void	rrb(t_list **stack)
{
	t_list *head;
	t_list *tmp;
	head = *stack;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	tmp->next = *stack;
	head->next = NULL;
	*stack = tmp;
	ft_color("rrb\n","green");
}

