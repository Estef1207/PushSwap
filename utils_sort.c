/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:50:52 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/04/19 11:50:55 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	find_median(t_stack s, int size)
{
	int	mediana;
	int	saldo;

	if (size < 2 || !s)
		return (0);
	if (size)
	{
		mediana = size / 2;
		saldo = size % 2;
	}
	if (saldo == 0)
		return (mediana);
	else
		return (mediana + 1);
}
/*
int	get_median(t_stack stack, int median)
{
	t_stack	temp;
	int		small_num;
	int		count;

	if (!stack || stack->top == NULL)
		return ;
	temp = stack;
	count = 0;
	while (count < median)
	{
		while (temp)
			if (temp < temp++)
				small_num_tmp = tmp;



{
			small_num = temp;
			temp = 2147483646;
			temp++;
		}



		temp++;
		count++;
	}
}*/
