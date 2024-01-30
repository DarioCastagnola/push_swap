/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:20 by dcastagn          #+#    #+#             */
/*   Updated: 2024/01/30 16:30:21 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_b(t_stack *stack)
{
	int	i;

	i = 0;
	stack->size_b = 0;
	stack->stack_b = (int *) malloc (stack->size_a * sizeof(int));
	while (i < stack->size_a)
	{
		stack->stack_b[i] = 0;
		i++;
	}
}

int	ft_smallest(t_stack *stack)
{
	int	smallest;
	int	i;

	i = 0;
	smallest = 2147483647;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < smallest)
		{
			smallest = stack->stack_a[i];
		}
		i++;
	}
	return (smallest);
}

int	ft_biggest(t_stack *stack)
{
	int	biggest;
	int	i;

	i = 0;
	biggest = 0;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] > biggest)
		{
			biggest = stack->stack_a[i];
		}
		i++;
	}
	return (biggest);
}

int	ft_is_ordered(t_stack *stack)
{
	int	i;

	i = 1;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < stack->stack_a[i - 1])
			return (0);
		i++;
	}
	free(stack->stack_a);
	return (1);
}
