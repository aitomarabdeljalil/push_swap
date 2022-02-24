/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   align.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:17:20 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/24 09:01:32 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*ft_min(t_stack **stack)
{
	int		min;
	t_stack	*node;
	t_stack	*keep;

	node = *stack;
	keep = *stack;
	min = keep->nbr;
	while (node)
	{
		if (node->nbr < min)
		{
			keep = node;
			min = node->nbr;
		}
		node = node->next;
	}
	return (keep);
}

void	alignstack(t_stack **stacka)
{
	int		index;
	t_stack	*min;
	int		size;

	size = ft_stacksize(*stacka);
	min = ft_min(stacka);
	index = get_index(stacka, min->nbr);
	if (index <= size / 2)
		while (index--)
			swap_ra(stacka, true);
	else if (index > size / 2)
		while (index++ < size)
			swap_rra(stacka, true);
}
