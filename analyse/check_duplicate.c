/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:41:15 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/20 16:04:26 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	check_duplicate(t_stack **stack, int val)
{
	t_stack	*node;
	int		count;


	count = 0;
	node = *stack;
	while (node)
	{
		if (node->nbr == val)
			i++;
		node = nodde->next;
	}
	if (count == 1)
		return (false);
	return (true);
}
