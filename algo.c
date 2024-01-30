/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:33:15 by dcastagn          #+#    #+#             */
/*   Updated: 2024/01/30 16:28:41 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_binlen(int n)
{
	int	i;

	i = 0;
	while (++i && n)
		n /= 2;
	return (i);
}

void	ft_big_push(t_stack *stack)
{
	int	i;
	int	k;
	int	c;

	//printf("%i\n", stack->size_b);
	k = -1;
	c = ft_binlen(stack->size_a);
	while (++k < c - 1)
	{
		i = stack->size_a;
		while (--i >= 0)
		{
			if ((stack->stack_a[0] >> k) % 2 == 1)
				ra(stack, 1);
			else
				pb(stack, 1);
		}
		while (stack->size_b > 0)
			pa(stack, 1);
	}
}

void	push_all_b(t_stack *stack)
{
	if (stack->size_a == 3)
		ft_sort_three(stack);
	else if (stack->size_a == 2)
		ft_sort_two(stack);
	else if (stack->size_a == 5)
		ft_sort_five(stack);
	else
		ft_big_push(stack);
}

void	ft_freedom(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack->num);
}
