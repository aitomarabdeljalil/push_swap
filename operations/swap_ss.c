/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:07:14 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 18:12:06 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_ss(t_stack **stacka, t_stack **stackb, bool flag)
{
	swap_sa(stacka, false);
	swap_sb(stackb, false);
	if (flag)
		write(1, "ss\n", 3);
}
