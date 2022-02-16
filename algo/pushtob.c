/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:40:38 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/16 19:02:53 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushtob(t_stack **stackfrom, t_stack **stackto)
{
	t_stack	*node;

	node = *stackfrom;
	while (node)
	{
		node = *stackfrom;
		while (node && node->markup)
			node = node->next;
		if (!node)
			break ;
		if (get_index(stackfrom, node->nbr) <= ft_stacksize(*stackfrom) / 2)
			while ((*stackfrom)->markup)
				swap_ra(stackfrom, true);
		else
			while ((*stackfrom)->markup)
				swap_rra(stackfrom, true);
		swap_pb(stackfrom, stackto, true);
	}
}
