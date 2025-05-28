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
#include "libft.h"
#include "ft_printf.h"

void	ra(t_stack *a)
{
	t_node	*first;
	t_node	*last;

	if (a == NULL || a->size <= 1 || a->top == NULL || a->top->next == NULL)
		return ;
	first = a->top;
	a->top = a->top->next;
	last = a->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
	print_stack(a, "stack a");	
}

void	rb(t_stack *b)
{
	t_node	*first;
	t_node	*last;

	if (b == NULL || b->size <= 1 || b->top == NULL || b->top->next == NULL)
		return ;
	first = b->top;
	b->top = b->top->next;
	last = b->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
	print_stack(b, "stack b");
}

void	rr(t_stack *a, t_stack *b)
{
	int		rotated;

	rotated = 0;
	if (a != NULL && a->size > 1 && a->top != NULL && a->top->next != NULL)
	{
		if (rotate_stack(a))
			rotated = 1;
	}
	if (b != NULL && b->size > 1 && b->top != NULL && b->top->next != NULL)
	{
		if (rotate_stack(b))
			rotated = 1;
	}
	if (rotated)
		write(1, "rr\n", 3);
	print_stack(a, "stack a");	
	print_stack(b, "stack b");
}

int	rotate_stack(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (stack == NULL || stack->top == NULL || stack->top->next == NULL)
		return (0);
	first = stack->top;
	stack->top = stack->top->next;
	last = stack->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	return (1);
}
