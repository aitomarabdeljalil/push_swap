/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/12 20:02:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <errno.h>

static void	ft_memclean(t_stack **stack, char **array)
{
	int	i;

	i = 0;
	if (array != NULL)
	{
		while (array[i++])
			free(array[i]);
		free(array);
	}
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

static t_stack	**do_split(t_stack **stack, char *arg)
{
	char	**array;
	int		i;
	int		j;

	array = ft_split(arg, ' ');
	if (!array || !array[0])
		ft_memclean(NULL ,array);
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

bool	do_action(char *str, t_stack **stacka, t_stack **stackb)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		swap_sa(stacka);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		swap_sa(stackb);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		swap_ss(stacka, stackb);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		swap_ra(stacka);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		swap_rb(stackb);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		swap_rr(stacka, stackb);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		swap_rra(stacka);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		swap_rrb(stackb);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		swap_rrr(stacka, stackb);
	else
		return (false);
	return (true);
}

void	read_op(t_stack **stacka, t_stack **stackb)
{
	char	*line;
	bool	success;

	line = get_next_line(0);
	while (line)
	{
		success = do_action(line, stacka, stackb);
		free(line);
		if (!success)
			ft_memclean(stacka, NULL);
		line = get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	if (argc < 2)
		return (0);
	b = NULL;
	a = check_and_getstack(argc, argv);
}
