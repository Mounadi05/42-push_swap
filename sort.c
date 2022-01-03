/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:04:12 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/03 23:10:23 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack, int ac)
{
	t_list *head;

	head = *stack;
	if (ac <= 6)
	{
		while(!(check_stack(head)))
		{
			if ((head->val > ft_lstlast(head)->val))
			{
				ra(stack);
				if (check_stack(*stack));
					break;
				head = *stack;
			}
			else if ((head->val > ft_lstlast(head)->val) && (head->val < head->next->val))
			{
				rra(stack);
				head = *stack;
			}
			else if (head->val > head->next->val)
			{
				sa(head);
				head = *stack;
			}
		}
	}
}
