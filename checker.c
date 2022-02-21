/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:50:53 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:39:35 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

char	*read_line(char *str, char c)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i])
		i++;
	res = malloc(i + 2);
	i = -1;
	while (str[++i])
		res[i] = str[i];
	res[i++] = c;
	res[i] = '\0';
	free(str);
	str = NULL;
	return (res);
}

void	checker2(t_list **stack, t_list **stack_b, char *str)
{
	if (!ft_strcmp(str, "rra\n"))
		rra_c(stack);
	else if (!ft_strcmp(str, "sa\n"))
		sa_c(*stack);
	else if (!ft_strcmp(str, "sb\n"))
		sb_c(*stack_b);
	else if (!ft_strcmp(str, "ra\n"))
		ra_c(stack);
	else if (!ft_strcmp(str, "pb\n"))
		pb_c(stack, stack_b);
	else if (!ft_strcmp(str, "rb\n"))
		rb_c(stack_b);
	else if (!ft_strcmp(str, "rr\n"))
		rr_c(stack, stack_b);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb_c(stack_b);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr_c(stack, stack_b);
	else if (!ft_strcmp(str, "pa\n"))
		pa_c(stack, stack_b);
	else if (!ft_strcmp(str, "ss\n"))
		ss_c(*stack, *stack_b);
	else
		ft_error();
	free(str);
}

void	checker(t_list **stack, t_list **stack_b)
{
	int			a;
	char		*str;
	char		c;

	a = 1;
	while (a)
	{
		str = malloc(1);
		str[0] = '\0';
		c = '\0';
		while (c != '\n' && a)
		{
			a = read(0, &c, 1);
			str = read_line(str, c);
		}
		if (!a)
			break ;
		checker2(stack, stack_b, str);
	}
	if (check_stack(*stack) && !*stack_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	int			i;
	int			len;
	t_list		*head;
	t_list		*stack_b;

	i = 1;
	len = ac - 1;
	stack_b = NULL;
	if (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[1]));
		while (++i <= len)
		{
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(av[i])));
			check_duplicate(head);
		}
		checker(&head, &stack_b);
	}
	else
		exit (0);
}
