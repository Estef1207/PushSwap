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

#include "push_swap.h"

int main(void)
{
    t_stack *stack;
    
    // Probar con 2 números
    printf("\n--- Test con 2 números (2,1) ---\n");
    stack = create_stack();
    push(stack, 1);  // Los números se insertan en orden inverso en la pila
    push(stack, 2);
    print_stack(stack);
    org_tt(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 1
    printf("\n--- Test con 3 números (3,1,2) ---\n");
    stack = create_stack();
    push(stack, 2);
    push(stack, 1);
    push(stack, 3);
    print_stack(stack);
    org_tt(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 2
    printf("\n--- Test con 3 números (2,3,1) ---\n");
    stack = create_stack();
    push(stack, 1);
    push(stack, 3);
    push(stack, 2);
    print_stack(stack);
    org_tt(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 3
    printf("\n--- Test con 3 números (3,2,1) ---\n");
    stack = create_stack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    print_stack(stack);
    org_tt(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 4
    printf("\n--- Test con 3 números (1,3,2) ---\n");
    stack = create_stack();
    push(stack, 2);
    push(stack, 3);
    push(stack, 1);
    print_stack(stack);
    org_tt(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 5
    printf("\n--- Test con 3 números (2,1,3) ---\n");
    stack = create_stack();
    push(stack, 3);
    push(stack, 1);
    push(stack, 2);
    print_stack(stack);
    org_tt(stack);
    print_stack(stack);
    free_stack(stack);
    
    return (0);
}
