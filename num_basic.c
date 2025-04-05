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

void	org_tt(t_stack *s)
{
	if (s->size < 2 || !s->top || !s->top->next)
		return ;
	if (s->top->value > s->top->next->value)
		sa(s);
	if (s->size < 3 || !s->top || !s->top->next || !s->top->next->next)
		return ;
	if (s->top->value > s->top->next->value && \
				s->top->value > s->top->next->next->value)
		ra(s);
	if (s->top->value > s->top->next->value)
		sa(s);
	if (s->top->value > s->top->next->next->value)
		rra(s);
	if (s->top->next->value > s->top->next->next->value)
	{
		rra(s);
		sa(s);
	}
}
