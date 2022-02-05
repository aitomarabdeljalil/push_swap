/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:55:23 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/04 16:55:23 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*get_item(t_stack **stack, int val)
{
	t_stack	*node;
	t_stack	*res;

	node = *stack;
	res = NULL;
	while (node)
	{
		if(node->nbr > val && (!res || node->nbr < res->nbr))
			res = node;
		node = node->next
	}
	return (res);
}

int	ft_max(int	fisrt, int sec)
{
	if (first >= sec)
		return (fisrt);
	return (sec);
}

int		cal_moves(t_stack **stackfrom, t_stack **stackto, int val)
{
	int	indexa;
	int	indexb;
	int	size_a;
	int	size_b;
	t_stack	*node;

	size_b = ft_stacksize(*stackfrom);
	size_a = ft_stacksize(*stackfrom);
	indexb = get_index(stackfrom, val);
	node = get_item(stackto, val);
	indexa = get_index(stackto, node->nbr);
	if (indexa <= size_a / 2 && indexb <= size_b / 2)
		return (ft_max(indexa, indexb));
	else if (indexa > size_a / 2 && indexb > size_b / 2)
		return (ft_max(size_a - indexa, size_b - indexb));
	else if (indexa <= size_a / 2 && indexb > size_b / 2)
		return (indexa + size_b - indexb);
	else
		return (indexb + size_a - indexa);
}

void	do_moves(t_stack **stackfrom, t_stack **stackto, int val)
{
	int	indexa;
	int	indexb;
	int	size_a;
	int	size_b;
	t_stack	*node;

	size_b = ft_stacksize(*stackfrom);
	size_a = ft_stacksize(*stackfrom);
	indexb = get_index(stackfrom, val);
	node = get_item(stackto, val);
	indexa = get_index(stackto, node->nbr);
	if (indexa <= size_a / 2 && indexb <= size_b / 2)
		do_multiple_swap_rr(stackfrom, stackto, node, val);
	if (indexa > size_a / 2 && indexb > size_b / 2)
		do_multiple_swap_rrr(stackfrom, stackto, node, val);
	if (indexa <= size_a / 2)
		do_multiple_swap_r(stackfrom, stackto, node, 'a');
	if (indexb <= size_b / 2)
		do_multiple_swap_r(stackfrom, stackto, node, 'b');
	if (indexa > size_a / 2)
		do_multiple_swap_rrs(stackfrom, stackto, node, 'a');
	if (indexb > size_b / 2)
		do_multiple_swap_rrs(stackfrom, stackto, node, 'b');
}

void	pushtoa(t_stack **stackfrom, t_stack **stackto)
{
	t_stack	*node;
	t_stack *tokeep;
	int		best;
	int 	curent;

	while (ft_isemty(stackfrom))
	{
		tokeep = *stackfrom;
		best = cal_moves(stackfrom, stackto, tokeep->nbr);
		node = tokeep->next;
		while (node)
		{
			curent = cal_moves(stackfrom, stackto, node->nbr);
			if (curent < best)
			{
				best = curent;
				tokeep = node;
			}
			node = node->next;
		}
		do_moves(stackfrom, stackto, tokeep->nbr);
	}
}