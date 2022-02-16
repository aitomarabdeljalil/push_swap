/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:09:37 by marvin            #+#    #+#             */
/*   Updated: 2022/02/15 17:10:59 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **stack, int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (node == NULL)
		write(1, "Error", 5);
	else
	{
		node->nbr = value;
		node->markup = false;
		if (stack != NULL)
			node->next = *stack;
		else
			node->next = NULL;
		*stack = node;
	}
}
