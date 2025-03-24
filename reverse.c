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
	t_node	*tmp;

	tmp = a;
	while (a != NULL || tmp->next != NULL)
	{
		tmp = tmp->next;
		a->value = tmp->value;
	}



}
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

