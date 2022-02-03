/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:04:12 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/03 18:39:34 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	easy_sortI(t_list **stack, t_list **stack_b)
{
	t_list *head;
	int a = 0;

	head = *stack;
	*stack_b = NULL;
	while(!(check_stack(head)) || *stack_b)
	{
		if ((head->val > ft_lstlast(head)->val) && (head->next->val > ft_lstlast(head)->val))
			rra(stack);
		 if ((head->val > ft_lstlast(head)->val))
			ra(stack);
		else if (head->val > head->next->val)
			sa(head);
		else if(check_stack(head) && *stack_b)
			pa(stack , stack_b);
		else
			pb(stack ,stack_b);
		head = *stack;
	}
}
void	easy_sort(t_list **stack)
{
	while(!(check_stack(*stack)))
	{
		if ((*stack)->val > ft_lstlast(*stack)->val)
			ra(stack);
		else if ((*stack)->val > (*stack)->next->val)
			sa(*stack);
		else if ((*stack)->val < ft_lstlast(*stack)->val)
			rra(stack);
	}
}
int	*sort_stack(t_list *stack_a, int ac)
{
	int *tab;	
	int i = 0;
	int j = 0;
	int u = 0;
	t_list *stack = stack_a;
	tab = (int *)malloc(4 * ac);
	while(stack)
	{
		tab[i] = stack->val;
		stack = stack->next;
		i++;
	}
	while (j < ac)
	{
		i = 1;
		while(i < ac)
		{
			if (tab[i] < tab[i - 1])
			{	
				u = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = u;
			}
			i++;
		}
		j++;
	}
	return (tab);
}

int check_middle(t_list *stack, int a)
{
	while (stack)
	{
		if (stack->val < a)
			return (0);
		stack=stack->next;
	}
	return (1);

}
int find_way(t_list *stack_b,int a,int b,int c ,int d)
{
	t_list *head;
	int i = 0;
	int u = 0;

	head = stack_b;
	while(head)
	{
		if (head->val == a ||head->val == b || head->val == c||head->val == d)
			u = u + i;
		i++;
		head = head->next;
	}
	return(u/4);
}
void	sort_stack_b(t_list **stack,t_list **stack_b ,int a,int b,int c,int d,int ac)
{
	int i = 0;
		if (find_way(*stack_b,a,b,c,d) < ac/2)
		{	
			while (i < 4)
			{
				if ((*stack_b)->val == a || (*stack_b)->val == b || (*stack_b)->val == c ||(*stack_b)->val == d)
				{
					if ((*stack_b)->val == c || (*stack_b)->val == d)
					{
						if (ft_lstlast(*stack)->val == c && (*stack_b)->val == d)
						{
							pa(stack,stack_b);
							rra(stack);
							sa(*stack);
							ra(stack);
							ra(stack);
							
						}
						else
						{
							pa(stack,stack_b);
							ra(stack);
						}
					}
					else
						pa(stack,stack_b);
					i++;
				}
				else
					rb(stack_b);
			}
		}
		else
		{
			while (i < 4)
			{
				if ((*stack_b)->val == a || (*stack_b)->val == b || (*stack_b)->val == c|| (*stack_b)->val == d)
				{
					if ((*stack_b)->val == c || (*stack_b)->val == d)
					{
						if (ft_lstlast(*stack)->val == c && (*stack_b)->val == d)
						{
							pa(stack,stack_b);
							rra(stack);
							sa(*stack);
							ra(stack);
							ra(stack);
							
						}
						else
						{
							pa(stack,stack_b);
							ra(stack);
						}
					}
					else
						pa(stack,stack_b);
					i++;
				}
				else
					rrb(stack_b);
			}
		}
}

int len_stack(t_list *stack)
{
	t_list *head;
	head = stack;
	int i = 0;
	while(head)
	{
		i++;
		head= head->next;
	}
	return (i);
}
void	middle_sort(t_list **stack,t_list **stack_b , int ac)
{
	int *tab;

	tab = sort_stack(*stack , ac);
	t_list *head;
	head = *stack;
	*stack_b = NULL;
	int i = 0;
	while (i < ac/2)
	{
		if ((*stack)->val < tab[ac/2])
		{
			pb(stack ,stack_b);
			i++;
		}
		else if (i > 1  && ((*stack_b)->val < ft_lstlast(*stack)->val || (*stack_b)->val < (*stack_b)->next->val))
			rr(stack, stack_b);
		else
			ra(stack);
	}
	while (i < ac - 3)
	{
		if ((*stack)->val < tab[ac - 3])
		{
			pb(stack ,stack_b);
			i++;
		}
		else
			ra(stack);
	}
	easy_sort(stack);
	ac = ac - 4;
	while (*stack_b && (*stack_b)->next && (*stack_b)->next->next && (*stack_b)->next->next->next)
	{
		sort_stack_b(stack, stack_b,tab[ac],tab[ac - 1],tab[ac - 2],tab[ac - 3],ac );
		if ((*stack)->val > (*stack)->next->val)
			sa(*stack);
		rra(stack);
		rra(stack);
		ac -= 4;
	}
	while(*stack_b)
	{
		if ((*stack_b)->val == tab[ac])
		{
			pa(stack ,stack_b);
			ac--;
		}
		else
			rb(stack_b);
	}
}
void	sort(t_list **stack, int ac, t_list **stack_b)
{

	if (ac <= 3)
		easy_sort(stack);
	else if (ac > 3 && ac <= 5)
		easy_sortI(stack, stack_b);
	else
		middle_sort(stack, stack_b, ac);
}
