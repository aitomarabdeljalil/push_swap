/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:26:28 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 14:38:25 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	swap_rra(t_stack **stack)
{
	t_stack	*head;
	t_stack	*beflast;
	t_stack	*last;

	if (ft_stacksize(*stack) > 2)
	{
		last = ft_stacklast(*stack);
		head = *stack;
		beflast = ft_stack_beforelast(stack);
		last->next = head;
		beflast->next = NULL;
		*stack = last;
		return (1);
	}
	else
		return (0);
}

static int	swap_rrb(t_stack **stack)
{
	t_stack	*head;
	t_stack	*beflast;
	t_stack	*last;

	if (ft_stacksize(*stack) > 2)
	{
		last = ft_stacklast(*stack);
		head = *stack;
		beflast = ft_stack_beforelast(stack);
		last->next = head;
		beflast->next = NULL;
		*stack = last;
		return (1);
	}
	else
		return (0);
}

void	swap_rrr(t_stack **stacka, t_stack **stackb)
{
	int	rra;
	int	rrb;

	rra = swap_rra(stacka);
	rrb = swap_rrb(stackb);
	if (rra == 1 && rrb == 1)
		write(1, "rrr\n", 4);
	else
		write(1, "Error\n", 6);
}
