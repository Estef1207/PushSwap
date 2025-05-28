/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:31:27 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/10 20:31:29 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (b->size <= 0 || b->top == NULL)
		return ;
	temp = b->top;
	b->top = b->top->next;
	temp->next = a->top;
	a->top = temp;
	//temp->next = a->top;
	b->size--;
	a->size++;
	write(1, "pa\n", 3);
	print_stack(a, "stack a");	
	print_stack(b, "stack b");
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (a->size <= 0 || a->top == NULL)
		return ;
	temp = a->top;
	a->top = a->top->next;
	temp->next = b->top;
	b->top = temp;
//	temp->next = b->top;
	a->size--;
	b->size++;
	write(1, "pb\n", 3);
	print_stack(a, "stack a");	
	print_stack(b, "stack b");
}
