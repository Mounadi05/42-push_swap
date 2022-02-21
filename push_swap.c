/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:05:38 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:37 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		len;
	t_list	*head;
	t_list	*stack_b;
	t_var	var;

	stack_b = NULL;
	i = 1;
	len = ac - 1;
	var.a = 0;
	if (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[1]));
		while (++i <= len)
		{
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(av[i])));
			check_duplicate(head);
		}
		if (check_stack(head))
			exit(0);
		else
			sort(&head, len, &stack_b, var);
	}
	else
		exit(0);
}
