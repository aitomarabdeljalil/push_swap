/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:52:21 by marvin            #+#    #+#             */
/*   Updated: 2022/01/19 16:52:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_pa(t_stack **stackfrom, t_stack **stackto)
{
	ft_push(stackto, ft_pop(stackfrom));
    write(1, "pb\n", 3);
}