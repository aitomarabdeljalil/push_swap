/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stksize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:18:40 by aait-oma          #+#    #+#             */
/*   Updated: 2021/12/27 17:18:51 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stksize(t_stack *stk)
{
	int		count;
	t_stack	*s;

	count = 0;
	s = stk;
	while (s)
	{
		s = s->next;
		count++;
	}
	return (count);
}
