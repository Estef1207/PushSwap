/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:31:27 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/10 20:31:29 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_stack *a, t_stack *b)
{
	int value;

	if (b->size <= 0)
		return ;
	value = b->array[b->size - 1];
	b->size--;
	a->array[a->size] = value;
	a->size++;
	write(1, "pa\n", 3);
}

void pb(t_stack *a, t_stack *b)
{
	int value;

	if (a->size <= 0)
		return ;
	value = a->array[a->size - 1];
	a->size--;
	b->array[b->size] = value;
	b->size++;
	write(1, "pb\n", 3);
}
