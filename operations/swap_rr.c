/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:12:56 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 18:12:49 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_rr(t_stack **stacka, t_stack **stackb, bool flag)
{
	swap_ra(stacka, false);
	swap_rb(stackb, false);
	if (flag)
		write(1, "rr\n", 3);
}
