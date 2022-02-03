/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:05:38 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/03 18:16:32 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac , char **av)
{
	int i = 1;
	int len;
	t_list *head;
	t_list *head1;
	t_list *stack_b;
	len = ac - 1;
	if (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[1]));
		while (++i <= len)
		{
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(av[i])));
			check_duplicate(head,av[i]);
		}
		if (check_stack(head))
			exit(0);
		else
			sort(&head, len, &stack_b);
	}
	else
		exit(0);
	/*while (head)
	{
		printf("%d\n",head->val);
		head = head->next;
	}*/
}
