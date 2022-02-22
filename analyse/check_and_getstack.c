/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_getstack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:19:30 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/22 19:45:36 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"
#include <stdbool.h>

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

bool	ft_isnumber(char *str)
{
	int	i;

	i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (false);
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (true);
	return (false);
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
	int nbr;


	array = ft_split(arg, ' ');
	if (!array || !array[0])
		ft_memclean(NULL, array);
	i = tablen(array);
	while (i--)
	{
		if (!ft_isnumber(array[i]))
			ft_memclean(NULL, array);
		errno = 0;
		nbr = ft_atoi(array[i]);
		if (errno != 0 || get_index(stack, nbr) != -1)
			ft_memclean(stack, array);
		ft_push(stack, nbr);
	}
}

t_stack	*check_and_getstack(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	while (argc > 0)
		do_split(&stack, argv[--argc]);
	return (stack);
}
