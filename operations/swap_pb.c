/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:54:35 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 14:43:36 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_pb(t_stack **stackfrom, t_stack **stackto)
{
	ft_push(stackto, ft_pop(stackfrom));
	write(1, "pb\n", 3);
}
