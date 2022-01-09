/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:59:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/01/07 18:52:15 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_pos(t_stack *stk, int num)
{
	int pos;

	pos = 0;
	while (stk)
	{
		if (stk->nbr == num)
			return(pos);
		stk = stk->next;
		pos++;
	}
	return (pos);
}

static void	insertion_sort(int *array, int size)
{
	int	i;
	int	x;

	if (size > 0)
	{
		insertion_sort(array, size - 1);
		x = array[size - 1];
		i = size - 2;
		while (i >= 0 && array[i] > x)
		{
			array[i + 1] = array [i];
			i = i - 1;
		}
		array[i + 1] = x;
	}
}

static int	*array_stk(t_stack **stacka)
{
	int	*array;
	int	i;
	t_stack *tmp;

	i = 0;
	array = malloc(ft_stksize(*stacka) * sizeof(int));
	if (!array)
		return ;
	tmp = *stacka;
	while (i < ft_stksize(*stacka))
	{
		array[i++] = tmp->nbr;
		tmp = tmp->next;
	}
	insertion_sort(array, ft_stksize(*stacka));
	return (array);
}

static int find_keynbr(int *array, int size,int part)
{
	return (array(size / part));
}

void	sort_hundrednbr(t_stack **stacka, t_stack **stackb, int chenck)
{
	int	i;
	int	nbr_key;
	int *stk_array;
	t_stack	*tmp;
	int pos;

	i = chenck;
	stk_array = array_stk(stacka);
	tmp = *stacka;
	while (i > 1)
	{
		nbr_key = find_keynbr(stk_array, ft_stksize(*stacka), i);
		while (tmp)
		{
			if (tmp->nbr < nbr_key)
			{
				pos = ft_pos(*stacka, tmp->nbr);
				if (pos == 1)
					swap_s(stacka);
				if (pos > 1 && pos <= ft_stksize(*stacka) / 2)
					while(pos--)
						swap_r(stacka);
				else if (pos > ft_stksize(*stacka) / 2)
					while(pos++ < ft_stksize(*stacka))
						swap_rrs(stacka);
				swap_p(stacka, stackb);
			}
			tmp->next;
		}
		tmp = *stackb;
		while (tmp)
		{
			
			tmp->next;
		}
		i--;
	}
}