/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:56:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/02 17:53:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	i = ac;
	while (i > 1)
		ft_push(&a, ft_atoi(av[i--]));
	while (a)
	{
		printf("%d\n",a->nbr);
		a = a->next;
	}
}
