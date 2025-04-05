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
    t_stack a;
    
    // Inicializar la pila
    initialize_stack(&a);
    
    // Añadir algunos elementos para prueba
    push(&a, 3); // El tope será 3
    push(&a, 1); // El tope será 1, debajo estará 3
    
    printf("Antes de sa:\n");
    print_stack(&a, 'A');
    
    // Ejecutar sa
    sa(&a);
    
    printf("Después de sa:\n");
    print_stack(&a, 'A');
    
    // Liberar memoria
    free_stack(&a);
    
    return (0);
}
