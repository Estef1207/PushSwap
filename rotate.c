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

void	ra(t_stack *a)
{
	t_node *first;
	t_node *last;

	if (a->size <= 1 || a->top == NULL)
		return ;
	first = a->top;
	a->top = a->top->next;
	last = a->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	t_node	*first;
	t_node	*last;

	if (b->size <= 1 || b->top == NULL)
		return ;
	first = b->top;
	b->top = b->top->next;
	last = b->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	int		rotated = 0;
	t_node	*first;
	t_node	*last;

	if (a->size > 1)
	{
		t_node *first = a->top;
		t_node *last = a->top;
		a->top = a->top->next;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
		first->next = NULL;
		rotated = 1;
	}
	if (b->size > 1)
	{
		t_node *first = b->top;
		t_node *last = b->top;
        b->top = b->top->next;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
		first->next = NULL;
		rotated = 1;
	}
	if (rotated)
		write(1, "rr\n", 3);
}
