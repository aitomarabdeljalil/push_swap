/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:12:56 by marvin            #+#    #+#             */
/*   Updated: 2022/01/12 18:12:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	swap_ra(t_stack **stack)
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
        return (1);
	}
	else
		return (0);
}

static int	swap_rb(t_stack **stack)
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
        return (1);
	}
	else
		return (0);
}

void	swap_rr(t_stack **stacka, t_stack **stackb)
{
    int ra;
    int rb;

	ra = swap_ra(stacka);
	rb = swap_rb(stackb);
    if (ra == 1 && rb == 1)
        write(1, "rr\n", 3);
    else
        write(1, "Error\n", 6);
}
