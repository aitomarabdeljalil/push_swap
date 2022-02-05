/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:36:06 by marvin            #+#    #+#             */
/*   Updated: 2022/01/19 11:36:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_stacklast(t_stack **stack)
{
    t_stack *stk;

    if (ft_isemty(stack))
	{
        stk = *stack;
		while (stk->next)
			stk = stk->next;
	}
	return (stk);
}