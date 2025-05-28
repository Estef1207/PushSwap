/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:32:52 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/10 20:32:55 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	sa(t_stack *a)
{
	int	temp;

	if (a->size < 2)
		return ;
	temp = a->top->value;
	a->top->value = a->top->next->value;
	a->top->next->value = temp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	temp;

	if (b->size < 2)
		return ;
	temp = b->top->value;
	b->top->value = b->top->next->value;
	b->top->next->value = temp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	int	tmp_a;
	int	tmp_b;

	if (a->size >= 2)
	{
		tmp_a = a->top->value;
		a->top->value = a->top->next->value;
		a->top->next->value = tmp_a;
	}
	if (b->size >= 2)
	{
		tmp_b = b->top->value;
		b->top->value = b->top->next->value;
		b->top->next->value = tmp_b;
	}
	if (a->size >= 2 || b->size >= 2)
		write(1, "ss\n", 3);
}
