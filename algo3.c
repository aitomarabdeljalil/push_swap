/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:09:24 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/04 13:25:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_threenbr(t_stack **stack)
{
	t_stack	*first;
	t_stack	*sec;
	t_stack	*last;

	first = *stack;
	sec = first->next;
	last = sec->next;
	if (first->nbr > sec->nbr && first->nbr < last->nbr)
		swap_s(stack);
	else if (first->nbr > sec->nbr && sec->nbr > last->nbr)
	{
		swap_s(stack);
		swap_rrs(stack);
	}
	else if (first->nbr > last->nbr && sec->nbr < last->nbr)
		swap_r(stack);
	else if (first->nbr < last->nbr && sec->nbr > last->nbr)
	{
		swap_s(stack);
		swap_r(stack);
	}
	else
		swap_rrs(stack);
}
