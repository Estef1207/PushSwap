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
	if (!s || stack->size < 2)
		return (0);
	if 	(stack->size % 2 == 0)
		return (stack->size / 2);
	else
		return (stack->size / 2 + 1);
}

void	assign_indices(t_stack *stack)
{
    int		*array;
    t_node	*current;
    int		i;

    // 1. Crear array con todos los valores
    array = malloc(sizeof(int) * stack->size);
    if (!array)
        return;
    current = stack->top;
    i = 0;
    while (current)
    {
        array[i++] = current->value;
        current = current->next;
    }

    // 2. Ordenar el array
    sort_array(array, stack->size);

    // 3. Asignar índices basados en posición en el array
    current = stack->top;
    while (current)
    {
        i = 0;
        while (i < stack->size)
        {
            if (current->value == array[i])
            {
                current->indice = i;
                break;
            }
            i++;
        }
        current = current->next;
    }
    free(array);
}

void	sort_array(int *array, int size)
{
    int	i, j, temp;

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

