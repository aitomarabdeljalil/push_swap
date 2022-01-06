/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:38:17 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/06 17:24:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stknew(int	nbr)
{
	t_stack	*p;

	p = malloc(sizeof(t_stack));
	if (p)
	{
		p->nbr = nbr;
		p->next = NULL;
	}
	return (p);
}
