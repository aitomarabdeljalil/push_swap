/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:37:54 by aait-oma          #+#    #+#             */
/*   Updated: 2021/12/27 21:49:34 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>

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
t_stack	*ft_stknew(int	*nbr);

#endif
