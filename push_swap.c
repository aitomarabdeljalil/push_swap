/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:29 by marvin            #+#    #+#             */
/*   Updated: 2022/02/23 17:30:52 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static void	check_sa(t_stack **a, int val, int val_s)
{
	if (val >= val_s)
	{
		swap_sa(a, false);
		best_markup(a);
	}
	else
		write(1, "sa\n", 3);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		markup_val;
	int		markup_vals;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	a = check_and_getstack(--ac, ++av);
	markup_val = best_markup(&a);
	swap_sa(&a, false);
	markup_vals = best_markup(&a);
	check_sa(&a, markup_val, markup_vals);
	pushtob(&a, &b);
	pushtoa(&b, &a);
	alignstack(&a);
	ft_stackclear(&a);
	ft_stackclear(&b);
	return (0);
}
