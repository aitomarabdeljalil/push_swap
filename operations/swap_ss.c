/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:07:14 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 14:18:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	swap_sa(t_stack **stack)
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
		return (1);
	}
	else
		return (0);
}

static int	swap_sb(t_stack **stack)
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
		return (1);
	}
	else
		return (0);
}

void	swap_ss(t_stack **stacka, t_stack **stackb)
{
	int	sa;
	int	sb;

	sa = swap_sa(stacka);
	sb = swap_sb(stackb);
	if (sa == 1 && sb == 1)
		write(1, "ss\n", 3);
	else
		write(1, "Error\n", 6);
}
