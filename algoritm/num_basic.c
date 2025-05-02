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

void	org_two(t_stack *s)
{
	if (s->size < 2 || !s->top || !s->top->next)
		return ;
	if (s->top->value > s->top->next->value)
		sa(s);
}

void	org_three(t_stack *s)
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

void	org_four(t_stack *a, t_stack *b)
{
	if (a->size < 4 || !a->top || !a->top->next || !a->top->next->next)
		return ;
	if (a->size == 4)
	{
		if (a->top->value == find_min_value(a))
			pb(a, b);
		else if (a->top->next->value == find_min_value(a))
		{
			ra(a);
			pb(a, b);
		}
		else if (a->top->next->next->value == find_min_value(a))
		{
			ra(a);
			ra(a);
			pb(a, b);
		}
		else if (a->top->next->next->next->value == find_min_value(a))
		{
			rra(a);
			pb(a, b);
		}
		org_three(a);
		pa(b, a);
	}
}

void	org_five(t_stack *a, t_stack *b)
{
	if (a->size == 5)
	{
		if (a->top->value == find_min_value(a))
			pb(a, b);
		else if (a->top->next->value == find_min_value(a))
		{
			ra(a);
			pb(a, b);
		}
		else if (a->top->next->next->value == find_min_value(a))
		{
			ra(a);
			ra(a);
			pb(a, b);
		}
		else if (a->top->next->next->next->value == find_min_value(a))
		{
			rra(a);
			pb(a, b);
		}
		else if (a->top->next->next->next->next->value == find_min_value(a))
		{
			rra(a);
			rra(a);
			pb(a, b);
		}
		org_four(a, b);
		pa(b, a);
	}
}

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
}

