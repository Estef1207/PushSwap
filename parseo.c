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
#include "libft.h"
#include "ft_printf.h"

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
