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

	if (a == NULL || a->top == NULL || a->top->next == NULL)
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

	if (b == NULL || b->top == NULL || b->top->next == NULL)
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
	int	rotated;

	rotated = 0;
	if (a != NULL && a->top != NULL && a->top->next != NULL)
	{
		if (reverse_stack(a))
			rotated = 1;
	}
	if (b != NULL && b->top != NULL && b->top->next != NULL)
	{
		if (reverse_stack(b))
			rotated = 1;
	}
	if (rotated)
		write(1, "rrr\n", 4);
}

int	reverse_stack(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (stack == NULL || stack->top == NULL || stack->top->next == NULL)
		return (0);
	last = stack->top;
	while (last->next->next != NULL)
		last = last->next;
	first = last->next;
	last->next = NULL;
	first->next = stack->top;
	stack->top = first;
	return (1);
}
