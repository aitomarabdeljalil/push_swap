/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_beforelast.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:46:10 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 10:51:03 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_beforelast(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
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
