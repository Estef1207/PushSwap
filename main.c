/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:31:01 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/10 20:31:06 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h" // Asegúrate de tener los prototipos aquí

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);

	stack_a = initialize_stack();
	stack_b = initialize_stack();
	if (!stack_a || !stack_b)
		error_exit(stack_a, stack_b);

	if (!parse_arg(stack_a, argc, argv))
		error_exit(stack_a, stack_b);
	
	if (is_sorted(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return 0; // Ya ordenado, termina
    }
  // Aquí va la lógica para ordenar (org_three, org_five, etc)
	if (stack_a->size == 2)
		sort_two(stack_a);
	else if (stack_a->size == 3)
		sort_three(stack_a);
	else if ((stack_a->size > 3) && (stack_a->size <= 5))
		sort_five(stack_a, stack_b);
	else
	{
		write(2, "Only 2 to 5 numbers supported in this test\n", 43);
		error_exit(stack_a, stack_b);
	}
	print_stack(stack_a, "stack a");
	free_stack(stack_a);
	free_stack(stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
