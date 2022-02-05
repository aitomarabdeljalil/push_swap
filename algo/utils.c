/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:06:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/05 17:06:27 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    do_multiple_swap_rr(t_stack **stackfrom, t_stack **stackto, t_stack *node, int val)
{
    while (*stackto != node && (*stackfrom)->nbr != val)
        swap_rr(stackto, stackfrom);
}

void    do_multiple_swap_rrr(t_stack **stackfrom, t_stack **stackto, t_stack *node, int val)
{
    while (*stackto != node && (*stackfrom)->nbr != val)
        swap_rrr(stackto, stackfrom);
}

void    do_multiple_swap_r(t_stack **stackfrom, t_stack **stackto, t_stack *node, char c)
{
    if (c == 'a')
		while (*stackto != node)
			swap_ra(stackto);
	if (c == 'b')
		while ((*stackfrom)->nbr != val)
			swap_rb(stackfrom);
}

void    do_multiple_swap_rrs(t_stack **stackfrom, t_stack **stackto, t_stack *node, char c)
{
    if (c == 'a')
		while (*stackto != node)
			swap_rra(stackto);
	if (c == 'b')
		while ((*stackfrom)->nbr != val)
			swap_rrb(stackfrom);
}