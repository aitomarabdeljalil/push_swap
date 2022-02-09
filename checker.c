/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/08 20:21:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static char	ft_memclean(t_stack **stack)
{
	ft_stackclear(stack);
}

static void	do_split(t_stack **stack, char *arg)
{
	char	**array;

	array = ft_split(arg, ' ');
	if (!array || !array[0])
		ft_memclear(array);
	while ()
	{

	}
}

static t_stack	**check_and_getstack(int argc, char **argv)
{
	t_stack	**stack;

	while ()
	{
		/* code */
	}

	return (stack);
}

int	main(int argc, char argv[][])
{
	t_stack	**a;
	t_stack	**b;

	if (argc < 2)
		return (0);
	*b = NULL;


}
