/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:05:38 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/03 19:31:12 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main (int ac , char **av)
{
	int i = 1;

	t_list *head;
	t_list *tmp;
	if (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[1]));
		while (++i < ac)
		{
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(av[i])));
			check_duplicate(head,av[i]);
		}
		if (check_stack(head))
			ft_color("\tstack is sorted\n", "green");
		else
			sort(&head, ac);
	}
	else
		ft_color("\tWRONG ARGUMENT 🙈\n","purple");
	//ra (&head);
	while (head)
	{
		printf("%d\n",head->val);
		head = head->next;
	}
}
