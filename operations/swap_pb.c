/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:54:35 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 17:29:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_pb(t_stack **stackfrom, t_stack **stackto, bool flag)
{
	t_stack	*topop;

	topop = ft_pop(stackfrom);
	ft_push(stackto, topop->nbr);
	if (flag)
		write(1, "pb\n", 3);
}
