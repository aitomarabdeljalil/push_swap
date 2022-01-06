/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:56:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/06 18:08:18 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *a)
{
	while (a)
	{
		printf("%d\n",a->nbr);
		a = a->next;
	}
	printf("-------------\n");
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	i = ac - 1;
	while (i > 0)
		ft_push(&a, ft_stknew(ft_atoi(av[i--])));
	//print_stack(a);
	//printf("-------------\n");
	// swap_s(&a);
	// print_stack(a);
	// printf("-------------\n");
	// swap_r(&a);
	// print_stack(a);
	// printf("-------------\n");
	// swap_rrs(&a);
	// print_stack(a);
	// printf("-------------\n");

	// ft_push(&b, ft_stknew(10));
	// ft_push(&b, ft_stknew(11));

	print_stack(a);
	sort_fivenbr(&a, &b);
	print_stack(a);
}
