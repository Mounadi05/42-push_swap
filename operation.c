/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:28:28 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/12 21:11:53 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *head)
{
	int u;

	u = head->val;
	head->val = head->next->val;
	head->next->val = u;
	ft_putstr("sa\n");
}

void	sb(t_list *head)
{
	int u;

	u = head->val;
	head->val = head->next->val;
	head->next->val = u;
	ft_putstr("sb\n");
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	int u;

	u = stack_a->val;
	stack_a->val = stack_a->next->val;
	stack_a->next->val = u;
	u = stack_b->val;
	stack_b->val = stack_b->next->val;
	stack_b->next->val = u;
	ft_putstr("ss\n");
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
	ft_putstr("rra\n");
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
	ft_putstr("rrb\n");
}

