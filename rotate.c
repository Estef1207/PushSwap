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

void	ra(t_stack *a)
{
	t_node *first;
	t_node *last;

	if (a->size <= 1 || a->top == NULL)
		return ;
    // Guardamos el nodo superior (primero)
	first = a->top;
    // Actualizamos el top de la pila al segundo elemento
	a->top = a->top->next;
    // Encontramos el último nodo de la pila
	last = a->top;
	while (last->next != NULL)
		last = last->next;
    // El antiguo primer nodo ahora se convierte en el último
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	t_node	*first;
	t_node	*last;

	if (b->size <= 1 || b->top == NULL)
		return ;
	first = b->top;
	b->top = b->top->next;
	last = b->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	int	tmp;
	int i;
	int	rotated;

	rotated = 0;
	if (a->size > 1)
	{
		tmp = a->array[a->size - 1]; i = a->size - 1;
		while (i > 0) { a->array[i] = a->array[i - 1]; i--; }
		a->array[0] = tmp; rotated = 1;
	}
	if (b->size > 1)
	{
		tmp = b->array[b->size - 1]; i = b->size - 1;
		while (i > 0) { b->array[i] = b->array[i - 1]; i--; }
		b->array[0] = tmp; rotated = 1;
	}
	if (rotated) write(1, "rr\n", 3);
}
