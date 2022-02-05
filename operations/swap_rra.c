/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:35:53 by marvin            #+#    #+#             */
/*   Updated: 2022/01/17 20:35:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_rra(t_stack **stack)
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
        write(1, "rra\n", 4);
    }
	else
        write(1, "Error\n", 6);
}