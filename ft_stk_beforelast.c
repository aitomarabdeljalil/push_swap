/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_beforelast.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:51:49 by aait-oma          #+#    #+#             */
/*   Updated: 2021/12/28 19:37:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stk_beforelast(t_stack *stk)
{
	t_stack *tmp;

	tmp = stk;
	if (tmp || tmp->next != NULL)
	{
		while (stk->next)
		{
			if ()
			{
				
			}

			stk = stk->next;
		}
	}
	return (stk);
}
