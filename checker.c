/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/10 19:51:48 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <errno.h>

static void	ft_memclean(t_stack **stack, char **array)
{
	int	i;

	i = 0;
	while (array[i++])
		free(array[i]);
	free(array);
	ft_stackclear(stack);
	write(2, "Error\n", 6);
	exite(1);
}

static int	tablen(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

static t_stack	**do_split(t_stack **stack, char *arg)
{
	char	**array;
	int		i;
	int		j;

	array = ft_split(arg, ' ');
	if (!array || !array[0])
		ft_memclear(array);
	i = tablen(array);
	while (i--)
	{
		j = 0;
		while (array[i])
			if (!ft_isdigit(array[i][j++]))
				ft_memclean(stack, array);
	}
	i = tablen(array) - 1;
	while (i >= 0)
		ft_push(stack, ft_atoi(array[i--]));
	return (stack);
}

static t_stack	**check_and_getstack(int argc, char **argv)
{
	t_stack	**stack;
	int		i;

	i = argc - 1;
	while (i > 0)
		stack = do_split(stack, argv[i--]);
	return (stack);
}

int	main(int argc, char argv[][])
{
	t_stack	**a;
	t_stack	**b;

	if (argc < 2)
		return (0);
	*b = NULL;
	a = check_and_getstack(argc, argv);
}
