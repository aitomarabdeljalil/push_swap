/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:00:16 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 18:03:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_sa(t_stack **stack, bool flag)
{
	t_stack	*head;
	t_stack	*second;

	if (ft_stacksize(*stack) >= 2)
	{
		head = *stack;
		second = head->next;
		head->next = second->next;
		second->next = head;
		*stack = second;
		if (flag)
			write(1, "sa\n", 3);
	}
}
