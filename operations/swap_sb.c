/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:06:19 by marvin            #+#    #+#             */
/*   Updated: 2022/01/11 22:06:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_sb(t_stack **stack)
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
        write(1, "sb\n", 3);
    }
	else
        write(1, "Error\n", 6);
}