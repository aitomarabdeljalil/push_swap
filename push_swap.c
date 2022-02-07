/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:29 by marvin            #+#    #+#             */
/*   Updated: 2022/02/07 19:02:40 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap_sa_mark(t_stack **stack)
{
	t_stack	*head;
	t_stack	*second;

	if (ft_stacksize(*stack) >= 2)
	{
		head = *stack;
		second = head->next;
		head->next = second->next;
		second->next = head;
		*stack = second;
		return (1);
	}
	else
		return (0);
}

int	main(int ac, char **av)
{
	t_stack	**a;
	t_stack	**b;
	int		i;
	int		markup_val;
	int		markup_vals;

	*a = NULL;
	*b = NULL;
	i = ac - 1;
	while (i > 0)
		ft_push(a, ft_atoi(av[i--]));
	markup_val = bast_markup(a);
	swap_sa_mark(a);
	markup_vals = bast_markup(a);
	if (markup_val >= markup_vals)
		swap_sa_mark(a);
	else
		write(1, "sa\n", 3);
	pushtob(a, b);
	pushtoa(b, a);
	alignstack(a);
}
