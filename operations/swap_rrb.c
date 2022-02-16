/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:11:26 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 17:47:32 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_rrb(t_stack **stack, bool flag)
{
	t_stack	*head;
	t_stack	*beflast;
	t_stack	*last;

	if (ft_stacksize(*stack) >= 2)
	{
		last = ft_stacklast(stack);
		head = *stack;
		beflast = ft_stack_beforelast(stack);
		last->next = head;
		beflast->next = NULL;
		*stack = last;
		if (flag)
			write(1, "rrb\n", 4);
	}
}
