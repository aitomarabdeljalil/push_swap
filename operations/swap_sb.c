/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:06:19 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 18:03:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_sb(t_stack **stack, bool flag)
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
			write(1, "sb\n", 3);
	}
}
