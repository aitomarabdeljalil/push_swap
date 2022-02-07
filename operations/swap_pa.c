/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:52:21 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 14:43:46 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_pa(t_stack **stackfrom, t_stack **stackto)
{
	ft_push(stackto, ft_pop(stackfrom));
	write(1, "pb\n", 3);
}
