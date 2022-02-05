/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:48:37 by marvin            #+#    #+#             */
/*   Updated: 2022/01/19 18:48:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

//i can use ft_printf() just i need to check pdf
void	ft_display(t_stack *stack, char c)
{
	while (stack)
	{
		printf("%d\n",stack->nbr);
		stack = stack->next;
	}
	printf("-------------\n");
	printf("|     %c     |\n", c);
	printf("-------------\n");
}