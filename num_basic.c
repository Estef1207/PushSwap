/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_basic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:40:13 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/04/02 19:40:18 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	sort_two(t_stack *s)
{
	if (s->size < 2 || !s->top || !s->top->next)
		return ;
	if (s->top->value > s->top->next->value)
		sa(s);
}

void	sort_three(t_stack *s)
{
	if (s->size < 3 || !s->top || !s->top->next || !s->top->next->next)
		return ;
	else if (s->top->value < s->top->next->next->value && \
					s->top->next->value > s->top->next->next->value)
	{
		sa(s);
		ra(s);
	}
	else if (s->top->value > s->top->next->value && \
					s->top->next->next->value > s->top->value)
		sa(s);
	else if (s->top->next->value > s->top->value && \
					s->top->value > s->top->next->next->value)
		rra(s);
	else if (s->top->value > s->top->next->next->value && \
					s->top->next->value < s->top->next->next->value)
		ra(s);
	else if (s->top->value > s->top->next->next->value && \
					s->top->next->value > s->top->next->next->value)
	{
		sa(s);
		rra(s);
	}
}
void	sort_five(t_stack *a, t_stack *b)
{
	move_min_to_top(a);
	pb(a, b);
	sort_three(a);
	pa(b, a);
}
/*
void	sort_five(t_stack *a, t_stack *b)
{
	int	mov;

	mov = 0;
	if(a->size == 4)
		mov = 1;
	else if (a->size == 5)
		mov = 2;
	while (mov--)
	{
		move_min_to_top(a);
		pb(a, b);
	}
	sort_three(a);
	while (b->size > 0)
		pa(b, a);
}*/

int	get_min_position(t_stack *stack)
{
	t_node	*current;
	int		min;
	int		pos;
	int		index;
	
	current = stack->top;
	min = current->value;
	pos = 0;
	index = 0;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			pos = index;
		}
		current = current->next;
		index++;
	}
	return (pos);
}

void	move_min_to_top(t_stack *stack)
{
	int	pos;

	pos = get_min_position(stack);
	if (pos <= stack->size / 2)
	{
		while (pos-- > 0)
			ra(stack);
	}
	else
	{
		pos = stack->size - pos;
		while (pos-- > 0)
			rra(stack);
	}
}

/*
int	find_min_value(t_stack *stack)
{
	t_node	*current;
	int		min;

	if (!stack || !stack->top)
		return (0);
	current = stack->top;
	min = current->value;
	while (current)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}*/

