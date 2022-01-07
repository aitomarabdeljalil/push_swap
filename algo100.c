/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:59:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/07 18:52:15 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insertion_sort(int *array, int size)
{
	int	i;
	int	x;

	if (size > 0)
	{
		insertion_sort(array, size - 1);
		x = array[size - 1];
		i = size - 2;
		while (i >= 0 && array[i] > x)
		{
			array[i + 1] = array [i];
			i = i - 1;
		}
		array[i + 1] = x;
	}
}

static int	*array_stk(t_stack **stacka)
{
	int	*array;
	int	i;
	t_stack *tmp;

	i = 0;
	array = malloc(ft_stksize(*stacka) * sizeof(int));
	if (!array)
		return ;
	tmp = *stacka;
	while (i < ft_stksize(*stacka))
	{
		array[i++] = tmp->nbr;
		tmp = tmp->next;
	}
	insertion_sort(array, ft_stksize(*stacka));
	return (array);
}

void	sort_hundrednbr(t_stack **stacka, t_stack **stackb)
{
	int	nbr_key;


}
