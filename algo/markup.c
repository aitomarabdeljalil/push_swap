/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:22:44 by marvin            #+#    #+#             */
/*   Updated: 2022/02/12 19:05:21 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	markup_clear(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	if (head)
	{
		while (head)
		{
			head->markup = false;
			head = head->next;
		}
	}
}

int	markup(t_stack **stack, t_stack *start)
{
	int	trueval;
	int	count;
	int	markup_val;

	markup_clear(stack);
	trueval = 1;
	count = ft_stacksize(*stack) - 1;
	start->markup = true;
	markup_val = start->nbr;
	while (count--)
	{
		start = start->next;
		if (!start)
			start = *stack;
		if (markup_val < start->nbr)
		{
			start->markup = true;
			trueval++;
			markup_val = start->nbr;
		}
	}
	return (trueval);
}

int	best_markup(t_stack **stack)
{
	t_stack	*node;
	t_stack	*markup_head;
	int		best;
	int		curent;

	markup_head = *stack;
	best = markup(stack, markup_head);
	node = markup_head->next;
	while (node)
	{
		curent = markup(stack, node);
		if (curent > best || (curent == best && markup_head->nbr > node->nbr))
		{
			best = curent;
			markup_head = node;
		}
		node = node->next;
	}
	best = markup(stack, markup_head);
	return (best);
}
