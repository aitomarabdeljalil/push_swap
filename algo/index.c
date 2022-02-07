/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:24:13 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/07 19:41:13 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(t_stack **stack, int val)
{
	int		idx;
	t_stack	*lst;

	idx = 0;
	lst = *stack;
	while (lst)
	{
		if (lst->nbr == val)
			return (idx);
		idx++;
		lst = lst->next;
	}
	return (-1);
}
