/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:19:11 by marvin            #+#    #+#             */
/*   Updated: 2022/01/12 17:19:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_ra(t_stack **stack)
{
	t_stack	*head;
	t_stack	*second;
	t_stack	*last;

	if (ft_stacksize(*stack) >= 2)
	{
		head = *stack;
		second = head->next;
		last = ft_stacklast(*stack);
		last->next = head;
		head->next = NULL;
		*stack = second;
		write(1, "ra\n", 3);
	}
	else
		write(1, "Error\n", 6);
}