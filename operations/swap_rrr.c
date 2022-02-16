/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:26:28 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 18:12:19 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_rrr(t_stack **stacka, t_stack **stackb, bool flag)
{
	swap_rra(stacka, false);
	swap_rrb(stackb, false);
	if (flag)
		write(1, "rrr\n", 4);
}
