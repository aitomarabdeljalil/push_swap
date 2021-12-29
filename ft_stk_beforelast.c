/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_beforelast.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:51:49 by aait-oma          #+#    #+#             */
/*   Updated: 2021/12/29 16:43:15 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stk_beforelast(t_stack *stk)
{
	t_stack *tmp;

	tmp = stk;
	if (tmp || tmp->next != NULL)
	{
		while (tmp->next)
		{
			if (tmp->next->next == NULL)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (tmp);
}
