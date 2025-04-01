/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:23:40 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/24 18:23:45 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	t_node	*first;
	t_node	*last;

	if (a->size <= 1 || a->top == NULL || a->top->next == NULL)
		return ;
	last = a->top;
	while (last->next->next != NULL)
		last = last->next;
	first = last->next;
	last->next = NULL;
	first->next = a->top;
	a->top = first;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_node	*first;
	t_node	*last;

	if (b->size <= 1 || b->top == NULL || b->top->next == NULL)
		return ;
	last = b->top;
	while (last->next->next != NULL)
		last = last->next;
	first = last->next;
	last->next = NULL;
	first->next = b->top;
	b->top = first;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	int		rotated;
	t_node	*first;
	t_node	*last;

	rotated = 0;
	if (a->size > 1)
	{
		last = a->top;
		while (last->next->next != NULL)
			last = last->next;
		first = last->next;
		last->next = NULL;
		first->next = a->top;
		a->top = first;
		rotated = 1;
	}
	if (b->size > 1)
	{
		last = b->top;
		rotated = 1;
		while (last->next->next != NULL)
			last = last->next;
		first = last->next;
		last->next = NULL;
		first->next = b->top;
		b->top = first;
		rotated = 1;
	}
	if (rotated)
		write(1, "rrr\n", 4);
}
