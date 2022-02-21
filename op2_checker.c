/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:41:00 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:04 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_c(t_list **stack_a, t_list **stack_b)
{
	t_list		*head;
	t_list		*tmp;

	if (ft_lstsize(*stack_a) >= 2)
	{
		head = *stack_a;
		while (head->next->next)
			head = head->next;
		tmp = head->next;
		tmp->next = *stack_a;
		head->next = NULL;
		*stack_a = tmp;
	}
	if (ft_lstsize(*stack_b) >= 2)
	{
		head = *stack_b;
		while (head->next->next)
			head = head->next;
		tmp = head->next;
		tmp->next = *stack_b;
		head->next = NULL;
		*stack_b = tmp;
	}
}

void	ra_c(t_list **stack)
{
	t_list		*tmp;
	t_list		*p;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = *stack;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&p, tmp);
	*stack = p;
}

void	rb_c(t_list **stack)
{
	t_list		*tmp;
	t_list		*p;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = *stack;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&p, tmp);
	*stack = p;
}

void	rr_c(t_list **stack_a, t_list **stack_b)
{
	t_list		*tmp;
	t_list		*p;

	if (ft_lstsize(*stack_a) >= 2)
	{
		tmp = *stack_a;
		p = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(&p, tmp);
		*stack_a = p;
	}
	if (ft_lstsize(*stack_b) >= 2)
	{
		tmp = *stack_b;
		p = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(&p, tmp);
		*stack_b = p;
	}
}
