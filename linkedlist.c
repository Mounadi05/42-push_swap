/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:39:05 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:40:27 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicate(t_list *head)
{
	t_list	*tmp;
	t_list	*d;

	tmp = head;
	while (tmp)
	{
		d = tmp->next;
		while (d)
		{
			if (d->val == tmp->val)
				ft_error();
			d = d->next;
		}
		tmp = tmp->next;
	}
}

int	check_stack(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_list	*ft_lstnew(int val)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->val = val;
	head->next = NULL;
	return (head);
}

t_list	*ft_lstnew_b(int val, int in)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->val = val;
	head->in = in;
	head->next = NULL;
	return (head);
}
