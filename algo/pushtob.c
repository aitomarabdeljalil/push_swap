/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:40:38 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/04 15:40:38 by aait-oma         ###   ########.fr       */
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
				while(index--)
					swap_r(stackfrom);
			else if (index > size / 2)
				while(index++ < size)
					swap_rrs(stackfrom);
			swap_pb(stackfrom, stackto);
		}
		node = node->next;
	}
}