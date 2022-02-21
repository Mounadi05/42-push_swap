/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op3_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:23:27 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:10 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_c(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (!*stack_b)
		return ;
	if (!*stack_a)
		*stack_a = ft_lstnew_b((*stack_b)->val, (*stack_b)->in);
	else
		ft_lstadd_front(stack_a, ft_lstnew_b((*stack_b)->val, (*stack_b)->in));
	head = *stack_b;
	*stack_b = (*stack_b)->next;
	free(head);
	head = NULL;
}

void	pb_c(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (!*stack_a)
		return ;
	if (!*stack_b)
		*stack_b = ft_lstnew_b((*stack_a)->val, (*stack_a)->in);
	else
		ft_lstadd_front(stack_b, ft_lstnew_b((*stack_a)->val, (*stack_a)->in));
	head = *stack_a;
	*stack_a = (*stack_a)->next;
	free(head);
	head = NULL;
}
