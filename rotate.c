/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:32:33 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/10 20:32:35 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *a)
{
	int	tmp;
	int	i;

	if (a->size <= 1)
	return ;
	tmp = a->array[a->size - 1];
	a->value[a->size] = a->value[a->size];
	i = a->size - 1;
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = tmp;	
	write(1, "ra\n", 3);
}

void rb(t_stack *b)
{
	int	tmp;
	int	i;

	if (b->size <= 1)
	return ;
	tmp = b->array[b->size - 1];
	b->value[b->size] = b->value[b->size];
	i = b->size - 1;
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[0] = tmp;	
	write(1, "rb\n", 3);
}

void rr(t_stack *a, t_stack *b)
{
	int tmp_a;
	int	tmp_b;
	int	i;

	if(a->size <= 1 || b->size <= 1)
		return ;
	tmp_a = a->array[a->size - 1];
	a->value[a->size] = a->value[a->size];
	i = a->size - 1;
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = tmp_a;
	tmp_b = b->array[b->size - 1];
	b->value[b->size] = b->value[b->size];
	i = b->size - 1;
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[0] = tmp_b;	
	write(1, "rr\n", 3);
}
