/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounadi <mounadi1337@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:05:54 by amounadi          #+#    #+#             */
/*   Updated: 2022/01/03 18:02:02 by amounadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define MAX_POS 2147483647
#define MAX_NEG 2147483648

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	int		val;
	struct s_list	*next;
}			t_list;
void	sa(t_list *head);
void	sb(t_list *head);
void	ss(t_list *stack_a, t_list *stack_b);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a , t_list **stack_b);
void	sort(t_list **stack, int ac);
int	check_stack(t_list *head);
void	ft_color(char *str, char *color);
int	ft_atoi(char *str);
t_list	*ft_lstnew(int val);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int	check_duplicate(t_list *head, char *num);

#endif
