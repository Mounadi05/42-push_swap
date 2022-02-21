/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:00:01 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:25 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack_a;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	tmp->next = *stack_a;
	head->next = NULL;
	*stack_a = tmp;
	ft_putstr("rrr\n");
	head = *stack_b;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	tmp->next = *stack_b;
	head->next = NULL;
	*stack_b = tmp;
}

void	ra(t_list **stack)
{
	t_list	*tmp;
	t_list	*p;

	tmp = *stack;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&p, tmp);
	*stack = p;
	ft_putstr("ra\n");
}

void	rb(t_list **stack)
{
	t_list	*tmp;
	t_list	*p;

	tmp = *stack;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&p, tmp);
	*stack = p;
	ft_putstr("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*p;

	tmp = *stack_a;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&p, tmp);
	*stack_a = p;
	ft_putstr("rr\n");
	tmp = *stack_b;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&p, tmp);
	*stack_b = p;
}
