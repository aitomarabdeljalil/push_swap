/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:58:30 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/16 18:59:20 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_multiple_swap_rr(t_stack **b, t_stack **a, t_stack *node, int val)
{
	while (*a != node && (*b)->nbr != val)
		swap_rr(a, b, true);
}

void	do_multiple_swap_ra(t_stack **a, t_stack *node)
{
	while (*a != node)
		swap_ra(a, true);
}

void	do_multiple_swap_rb(t_stack **b, int val)
{
	while ((*b)->nbr != val)
		swap_rb(b, true);
}
