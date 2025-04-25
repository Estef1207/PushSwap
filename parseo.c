/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:33:28 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/04/19 11:33:31 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_limits(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num < INT_MIN || num > INT_MAX)
		return (0);
	return (1);
}

int	check_duplicates(t_stack *stack)
{
	t_node	*current;
	t_node	*compare;

	current = stack->top;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			if (current->value == compare->value)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

int	parse_arg(t_stack *stack, int argc, char **argv)
{
	int	i;
	int	num;

	i = argc - 1;
	while (i > 0)
	{
		if (!valid_number(argv[i]) || !check_limits(argv[i]))
			return (0);
		num = ft_atol(argv[i]);
		push(stack, (int)num);
		i--;
	}
	if (check_duplicates(stack))
		return (0);
	return (1);
}
