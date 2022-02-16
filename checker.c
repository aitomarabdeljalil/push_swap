/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/16 18:14:28 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static bool	ft_issorted(t_stack **stacka, t_stack **stackb)
{
	t_stack	*node;

	node = *stacka;
	if (!ft_isemty(stacka) && ft_isemty(stackb))
	{
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

static bool	do_action(char *str, t_stack **stacka, t_stack **stackb)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		swap_sa(stacka, false);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		swap_sb(stackb, false);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		swap_ss(stacka, stackb, false);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		swap_ra(stacka, false);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		swap_rb(stackb, false);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		swap_rr(stacka, stackb, false);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		swap_rra(stacka, false);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		swap_rrb(stackb, false);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		swap_rrr(stacka, stackb, false);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		swap_pa(stackb, stacka, false);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		swap_pb(stacka, stackb, false);
	else
		return (false);
	return (true);
}

static void	read_op(t_stack **stacka, t_stack **stackb)
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
