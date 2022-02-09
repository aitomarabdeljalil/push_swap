/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:06:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/08 13:26:31 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_multiple_swap_rr(t_stack **b, t_stack **a, t_stack *node, int val)
{
	while (*a != node && (*b)->nbr != val)
		swap_rr(a, b);
}

void	do_multiple_swap_rrr(t_stack **b, t_stack **a, t_stack *node, int val)
{
	while (*a != node && (*b)->nbr != val)
		swap_rrr(a, b);
}

void	do_multiple_swap_ra(t_stack **a, t_stack *node)
{
	while (*a != node)
		swap_ra(a);
}

void	do_multiple_swap_rb(t_stack **b, int val)
{
	while ((*b)->nbr != val)
		swap_rb(b);
}

void	do_multiple_swap_rra(t_stack **a, t_stack *node)
{
	while (*a != node)
		swap_rra(a);
}

void	do_multiple_swap_rrb(t_stack **b, int val)
{
	while ((*b)->nbr != val)
		swap_rrb(b);
}
