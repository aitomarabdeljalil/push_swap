/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:26:01 by marvin            #+#    #+#             */
/*   Updated: 2022/01/19 20:26:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int nbr)
{
	t_stack	*p;

	p = malloc(sizeof(t_stack));
	if (p)
	{
		p->nbr = nbr;
		p->markup = false;
		p->next = NULL;
	}
    else
        write(1, "Error\n", 6);
	return (p);
}
