/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:22:44 by marvin            #+#    #+#             */
/*   Updated: 2022/02/14 18:06:00 by aait-oma         ###   ########.fr       */
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
	trueval = 0;
	count = ft_stacksize(*stack);
	markup_val = start->nbr;
	while (count--)
	{
		if (start->nbr >= markup_val)
		{
			markup_val = start->nbr;
			start->markup = true;
			trueval++;
		}
		if (start->next)
			start = start->next;
		else
			start = *stack;

	}
	return (trueval);
}

int	best_markup(t_stack **stack)
{
	t_stack	*node;
	t_stack	*markup_head;
	int		best;
	int		curent;

	markup_head = NULL;
	best = 0;
	node = *stack;
	while (node)
	{
		curent = markup(stack, node);
		if (curent > best || (curent == best && markup_head->nbr < node->nbr))
		{
			best = curent;
			markup_head = node;
		}
		node = node->next;
	}
	best = markup(stack, markup_head);
	return (best);
}
