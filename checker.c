/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/16 09:00:18 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <errno.h>
#include <stdio.h>

static bool	ft_issorted(t_stack **stacka, t_stack **stackb)
{
	if (!ft_isemty(stacka) && ft_isemty(stackb))
	{
		t_stack *node;

		node = *stacka;
		while (node)
		{
			if (node->next)
				if (node->nbr > (node->next)->nbr)
					return (false);
			node = node->next;
		}
		return (true);
	}
	return (false);
}

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

void do_split(t_stack **stack, char *arg)
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
		j = -1;
		while (array[i][++j])
			if (!ft_isdigit(array[i][j]))
				ft_memclean(stack, array);
	}
	i = tablen(array) - 1;
	while (i >= 0)
		ft_push(stack, ft_atoi(array[i--]));
}

static t_stack	*check_and_getstack(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	while (argc > 0)
		do_split(&stack, argv[--argc]);
	return (stack);
}

bool	do_action(char *str, t_stack **stacka, t_stack **stackb)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		swap_sa(stacka);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		swap_sb(stackb);
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
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		swap_pa(stackb, stacka);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		swap_pb(stacka, stackb);
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
	t_stack	*a;
	t_stack	*b;
	bool	sorted;

	if (argc < 2)
		return (0);
	b = NULL;
	a = check_and_getstack(--argc, ++argv);
	read_op(&a, &b);
	sorted = ft_issorted(&a, &b);
	if (sorted)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
