/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:37:54 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/12 18:58:58 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	bool			markup;
	struct s_stack	*next;
}	t_stack;

int		ft_isemty(t_stack **stack);
void	ft_push(t_stack **stack, int value);
t_stack	*ft_pop(t_stack **stack);
t_stack	*ft_stacklast(t_stack **stack);
t_stack	*ft_stack_beforelast(t_stack **stack);
t_stack	*ft_stacknew(int nbr);
int		ft_stacksize(t_stack *stack);
void	ft_stackclear(t_stack **stack);
void	swap_ra(t_stack **stack);
void	swap_rb(t_stack **stack);
void	swap_rr(t_stack **stacka, t_stack **stackb);
void	swap_rra(t_stack **stack);
void	swap_rrb(t_stack **stack);
void	swap_rrr(t_stack **stacka, t_stack **stackb);
void	swap_sa(t_stack **stack);
void	swap_sb(t_stack **stack);
void	swap_ss(t_stack **stacka, t_stack **stackb);
void	swap_pa(t_stack **stackfrom, t_stack **stackto);
void	swap_pb(t_stack **stackfrom, t_stack **stackto);
void	ft_display(t_stack *stack, char c);
int		best_markup(t_stack **stack);
int		get_index(t_stack **stack, int val);
void	alignstack(t_stack **stacka);
void	do_multiple_swap_rr(t_stack **b, t_stack **a, t_stack *node, int val);
void	do_multiple_swap_rrr(t_stack **b, t_stack **a, t_stack *node, int val);
void	do_multiple_swap_ra(t_stack **a, t_stack *node);
void	do_multiple_swap_rb(t_stack **b, int val);
void	do_multiple_swap_rra(t_stack **a, t_stack *node);
void	do_multiple_swap_rrb(t_stack **b, int val);
void	pushtob(t_stack **stackfrom, t_stack **stackto);
void	pushtoa(t_stack **stackfrom, t_stack **stackto);
#endif
