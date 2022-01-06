/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:37:54 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/06 18:08:59 by aait-oma         ###   ########.fr       */
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
	struct s_stack	*next;
}	t_stack;

int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_stksize(t_stack *stk);
void	ft_push(t_stack **stk, t_stack *new);
t_stack	*ft_pop(t_stack **stack);
t_stack	*ft_stklast(t_stack *stk);
t_stack	*ft_stknew(int	nbr);
t_stack	*ft_stk_beforelast(t_stack *stk);
void	swap_s(t_stack **stack);
void	swap_ss(t_stack **stacka, t_stack **stackb);
void	swap_r(t_stack **stack);
void	swap_rr(t_stack **stacka, t_stack **stackb);
void	swap_rrs(t_stack **stack);
void	swap_rrr(t_stack **stacka, t_stack **stackb);
void	swap_p(t_stack **stackfrom, t_stack **stackto);
void	sort_threenbr(t_stack **stack);
void	sort_fivenbr(t_stack **stacka, t_stack **stackb);

#endif
