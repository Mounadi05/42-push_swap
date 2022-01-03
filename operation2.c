/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:00:01 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/03 23:10:11 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_color("rrr\n","green");
}

void	ra(t_list **stack)
{
	t_list tmp;
       
	tmp = **stack;
	tmp.next = NULL;
	ft_lstadd_back(stack, &tmp);
	*stack = (*stack)->next;
	ft_color("ra\n","green");
}

void	rb(t_list **stack)
{
	t_list tmp;
       
	tmp = **stack;
	tmp.next = NULL;
	ft_lstadd_back(stack, &tmp);
	*stack = (*stack)->next;
	ft_color("rb\n","green");
}

void	rr(t_list **stack_a , t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_color("rr\n","green");
}
