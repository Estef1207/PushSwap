/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:50:52 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/04/19 11:50:55 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	find_median(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return (0);
	if 	(stack->size % 2 == 0)
		return (stack->size / 2);
	else
		return (stack->size / 2 + 1);
}

void	assign_indexes(t_stack *stack)
{
	t_node	*current;
	t_node	*compare;
	int		indice;

	current = stack->top;
	while (current)
	{
		indice = 0;
		compare = stack->top;
		while (compare)
		{
			if (compare->value < current->value)
				indice++;
			compare = compare->next;
		}
		current->indice = indice;
		current = current->next;
	}
}
/*
void	sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
*/
