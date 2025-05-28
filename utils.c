/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:32:44 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/04/05 18:32:47 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	push(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}

int	pop(t_stack *stack)
{
	t_node	*temp;
	int		value;

	if (!stack || !stack->top)
		return (0);
	temp = stack->top;
	value = temp->value;
	stack->top = temp->next;
	free(temp);
	stack->size--;
	return (value);
}
/*
void	print_stack(t_stack *stack)
{
	t_node	*current;

	printf("Stack (size: %d): ", stack->size);
	current = stack->top;
	while (current)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}*/
void print_stack(t_stack *stack, const char *name)
{
    printf("%s (size=%d): ", name, stack->size);
    t_node *tmp = stack->top;
    while (tmp)
    {
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

void	error_exit(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a)
		free_stack(stack_a);
	if (stack_b)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}


int	is_sorted(t_stack *stack)
{
	t_node	*s;

	if (!stack || !stack->top)
		return (1);
	s = stack->top;
	while (s && s->next)
	{
		if (s->value > s->next->value)
			return (0);
		s = s->next;
	}
	return (1);
}
