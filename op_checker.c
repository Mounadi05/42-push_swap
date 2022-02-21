/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:40:45 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:42:29 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_c(t_list *head)
{
	int	u;

	if (!head || !head->next)
		return ;
	u = head->val;
	head->val = head->next->val;
	head->next->val = u;
	u = head->in;
	head->in = head->next->in;
	head->next->in = u;
}

void	sb_c(t_list *head)
{
	int	u;

	if (!head || !head->next)
		return ;
	u = head->val;
	head->val = head->next->val;
	head->next->val = u;
	u = head->in;
	head->in = head->next->in;
	head->next->in = u;
}

void	ss_c(t_list *stack_a, t_list *stack_b)
{
	int	u;

	if (stack_a && stack_a->next)
	{
		u = stack_a->val;
		stack_a->val = stack_a->next->val;
		stack_a->next->val = u;
	}
	if (stack_b && stack_b->next)
	{
		u = stack_b->val;
		stack_b->val = stack_b->next->val;
		stack_b->next->val = u;
	}
}

void	rra_c(t_list **stack)
{
	t_list		*head;
	t_list		*tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	head = *stack;
	while (head->next->next)
	head = head->next;
	tmp = head->next;
	tmp->next = *stack;
	head->next = NULL;
	*stack = tmp;
}

void	rrb_c(t_list **stack)
{
	t_list		*head;
	t_list		*tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	head = *stack;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	tmp->next = *stack;
	head->next = NULL;
	*stack = tmp;
}
