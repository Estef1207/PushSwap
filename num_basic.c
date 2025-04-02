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

void	org_three(t_stack *s)
{

	if (s->top > s->top->next && s->top > s->top->next)
		ra(s);
	if (s->top > s->top->next && s->top->next < s->top->next->next)
		sa(s);
	if (s->top < s->top->next && s->top > s->top->next->next)
		rra(s);
	if (s->top < s->top->next && s->top < s->top->next->next)
	{
		rra(s);
		sa(s);
	}
}
