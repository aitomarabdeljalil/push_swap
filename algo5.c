/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:26:07 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/06 18:57:15 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_min(t_stack *stk)
{
	int min;

	min = stk->nbr;
	while (stk)
	{
		if (stk->nbr < min)
			min = stk->nbr;
		stk = stk->next;
	}
	return (min);
}

static int	ft_pos(t_stack *stk, int num)
{
	int pos;

	pos = 0;
	while (stk)
	{
		if (stk->nbr == num)
			return(pos);
		stk = stk->next;
		pos++;
	}
	return (pos);
}

void	sort_fivenbr(t_stack **stacka, t_stack **stackb)
{
	int		pos;
	int		min;

	while (ft_stksize(*stacka) > 3)
	{
		min = ft_min(*stacka);
		pos = ft_pos(*stacka, min);
		if (pos == 1)
			swap_s(stacka);
		if (pos > 1 && pos <= ft_stksize(*stacka) / 2)
			while(pos--)
				swap_r(stacka);
		else if (pos > ft_stksize(*stacka) / 2)
			while(pos++ < ft_stksize(*stacka))
				swap_rrs(stacka);
		swap_p(stacka, stackb);
	}
	sort_threenbr(stacka);
	swap_p(stackb, stacka);
	swap_p(stackb, stacka);
}
