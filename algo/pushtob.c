/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:40:38 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/07 19:36:59 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushtob(t_stack **stackfrom, t_stack **stackto)
{
	t_stack	*node;
	int		index;
	int		size;

	node = *stackfrom;
	while (node)
	{
		size = ft_stacksize(*stackfrom);
		if (node->markup == false)
		{
			index = get_index(stackfrom, node->nbr);
			if (index == 1)
				swap_sa(stackfrom);
			if (index > 1 && index <= size / 2)
				while (index--)
					swap_ra(stackfrom);
			else if (index > size / 2)
				while (index++ < size)
					swap_rra(stackfrom);
			swap_pb(stackfrom, stackto);
		}
		node = node->next;
	}
}
