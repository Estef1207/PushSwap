/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:20:44 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/03 19:20:46 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sa(t_stack *a)
{
	int	temp;

	if (a->size < 2)
		return ;
	temp = a->top->value;
	a->top->value = a->top->next->value;
	a->top->next->value = temp;

	
}


