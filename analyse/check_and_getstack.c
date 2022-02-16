/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_getstack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:19:30 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/16 17:18:19 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_memclean(t_stack **stack, char **array)
{
	int	i;

	i = 0;
	if (array != NULL)
	{
		while (array[i++])
			free(array[i]);
		free(array);
	}
	if (stack)
		ft_stackclear(stack);
	write(2, "Error\n", 6);
	exit(1);
}

static int	tablen(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

static void	do_split(t_stack **stack, char *arg)
{
	char	**array;
	int		i;
	int		j;

	array = ft_split(arg, ' ');
	if (!array || !array[0])
		ft_memclean(NULL, array);
	i = tablen(array);
	while (i--)
	{
		j = -1;
		while (array[i][++j])
			if (!ft_isdigit(array[i][j]))
				ft_memclean(stack, array);
	}
	i = tablen(array) - 1;
	while (i >= 0)
		ft_push(stack, ft_atoi(array[i--]));
}

t_stack	*check_and_getstack(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	while (argc > 0)
		do_split(&stack, argv[--argc]);
	return (stack);
}
