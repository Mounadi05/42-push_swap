/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:05:54 by amounadi          #+#    #+#             */
/*   Updated: 2022/02/21 18:41:45 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_POS 2147483647
# define MAX_NEG 2147483648

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				val;
	int				in;
	struct s_list	*next;
}			t_list;

typedef struct t_point
{
	int	max;
	int	a;
	int	b;
	int	n;
	int	y;
}			t_var;

void	sa(t_list *head);
void	sb(t_list *head);
void	ss(t_list *stack_a, t_list *stack_b);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	sa_c(t_list *head);
void	sb_c(t_list *head);
void	ss_c(t_list *stack_a, t_list *stack_b);
void	rra_c(t_list **stack);
void	rrb_c(t_list **stack);
void	rrr_c(t_list **stack_a, t_list **stack_b);
void	ra_c(t_list **stack);
void	rb_c(t_list **stack);
void	rr_c(t_list **stack_a, t_list **stack_b);
void	sort(t_list **stack, int ac, t_list **stack_b, t_var var);
int		check_stack(t_list *head);
void	ft_error(void);
int		ft_atoi(char *str);
t_list	*ft_lstnew(int val);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	check_duplicate(t_list *head);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_b, t_list **stack_a);
void	pa_c(t_list **stack_b, t_list **stack_a);
void	pb_c(t_list **stack_b, t_list **stack_a);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_putstr(char *str);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew_b(int val, int in);
int		find_way(t_list *stack_b, int b);
void	ft_index(t_list **stack, int ac);
void	sort_stack_b(t_list **stack, t_list **stack_b, int min, int max);
int		*sort_stack(t_list *stack_a, int ac);
void	easy_sort(t_list **stack);
void	five_sort(t_list **stack, t_list **stack_b);
void	ft_norm(t_list **stack, t_list **stack_b, int *n);
void	ft_var(t_var *var, int ac, t_list **stack);

#endif
