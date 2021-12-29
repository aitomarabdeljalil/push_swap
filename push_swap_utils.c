/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:20:07 by aait-oma          #+#    #+#             */
/*   Updated: 2021/12/29 19:01:45 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_s(t_stack **stack)
{
	t_stack	*head;
	t_stack	*second;

	head = *stack;
	second = head->next;
	head->next = second->next;
	second->next = head;
	*stack = second;
}

void	swap_ss(t_stack **stacka, t_stack **stackb)
{
	swap_s(stacka);
	swap_s(stackb);
}

void	swap_r(t_stack **stack)
{
	t_stack	*head;
	t_stack	*second;
	t_stack	*last;

	head = *stack;
	second = head->next;
	last = ft_stklast(*stack);
	last->next = head;
	head->next = NULL;
	*stack = second;
}

void	swap_rr(t_stack **stacka, t_stack **stackb)
{
	swap_r(stacka);
	swap_r(stackb);
}

void	swap_rrs(t_stack **stack)
{
	t_stack	*head;
	t_stack	*beflast;
	t_stack	*last;

	last = ft_stklast(*stack);
	head = *stack;
	beflast = ft_stk_beforelast(*stack);

	last->next = head;
	beflast->next = NULL;
	*stack = last;
}

void	swap_rrr(t_stack **stacka, t_stack **stackb)
{
	swap_rrs(stacka);
	swap_rrs(stackb);
}

// void	swap_p(t_stack **)
// {
// 	ft_pop()
// }
