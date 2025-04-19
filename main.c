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
/*
#include "push_swap.h"

int main(void)
{
    t_stack *stack;
    
    // Probar con 2 números
    printf("\n--- Test con 2 números (2,1) ---\n");
    stack = initialize_stack();
    push(stack, 1);  // Los números se insertan en orden inverso en la pila
    push(stack, 2);
    print_stack(stack);
    org_two(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 1
    printf("\n--- Test con 3 números (3,1,2) ---\n");
    stack = initialize_stack();
    push(stack, 2);
    push(stack, 1);
    push(stack, 3);
    print_stack(stack);
    org_three(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 2
    printf("\n--- Test con 3 números (2,3,1) ---\n");
    stack = initialize_stack();
    push(stack, 1);
    push(stack, 3);
    push(stack, 2);
    print_stack(stack);
    org_three(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 3
    printf("\n--- Test con 3 números (3,2,1) ---\n");
    stack = initialize_stack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    print_stack(stack);
    org_three(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 4
    printf("\n--- Test con 3 números (1,3,2) ---\n");
    stack = initialize_stack();
    push(stack, 2);
    push(stack, 3);
    push(stack, 1);
    print_stack(stack);
    org_three(stack);
    print_stack(stack);
    free_stack(stack);
    
    // Probar con 3 números - Caso 5
    printf("\n--- Test con 3 números (2,1,3) ---\n");
    stack = initialize_stack();
    push(stack, 3);
    push(stack, 1);
    push(stack, 2);
    print_stack(stack);
    org_three(stack);
    print_stack(stack);
    free_stack(stack);
    
    return (0);
}*/
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

// Función para ordenar más de 3 números
void    sort_big(t_stack *a, t_stack *b)
{
    int     min;
    int     max;
    int     median;
    int     pushed;
    t_node  *current;

    // Si la pila ya está ordenada, no hacemos nada
    if (is_sorted(a))
        return;
    
    // Primera fase: dividir la pila A usando la mediana
    pushed = 0;
    // Determinamos el tamaño de la porción a mover a B (aproximadamente la mitad)
    median = a->size / 2;
    
    // Movemos los números menores que la mediana a la pila B
    while (pushed < median && a->size > 3)
    {
        // Encuentra el número más pequeño en A
        min = INT_MAX;
        current = a->top;
        while (current)
        {
            if (current->value < min)
                min = current->value;
            current = current->next;
        }
        
        // Mueve el número más pequeño al tope y luego empújalo a B
        while (a->top->value != min)
        {
            // Decide si es más eficiente usar ra o rra
            int distance = 0;
            current = a->top;
            while (current && current->value != min)
            {
                distance++;
                current = current->next;
            }
            
            if (distance <= a->size / 2)
                ra(a);
            else
                rra(a);
        }
        pb(a, b);
        pushed++;
    }
    
    // Si quedan 2 o 3 elementos en A, los ordenamos con algoritmos específicos
    if (a->size == 2)
        org_two(a);
    else if (a->size == 3)
        org_three(a);
    
    // Segunda fase: devolver los elementos de B a A en orden
    while (b->size > 0)
    {
        // Encuentra el máximo en B
        max = INT_MIN;
        current = b->top;
        while (current)
        {
            if (current->value > max)
                max = current->value;
            current = current->next;
        }
        
        // Mueve el máximo al tope de B
        while (b->top->value != max)
        {
            // Decide si es más eficiente usar rb o rrb
            int distance = 0;
            current = b->top;
            while (current && current->value != max)
            {
                distance++;
                current = current->next;
            }
            
            if (distance <= b->size / 2)
                rb(b);
            else
                rrb(b);
        }
        // Devuelve el máximo a A
        pa(a, b);
    }
    
    // Ajustamos la pila A para que el mínimo quede arriba
    min = INT_MAX;
    current = a->top;
    while (current)
    {
        if (current->value < min)
            min = current->value;
        current = current->next;
    }
    
    // Rotamos hasta que el mínimo esté arriba
    while (a->top->value != min)
    {
        int distance = 0;
        current = a->top;
        while (current && current->value != min)
        {
            distance++;
            current = current->next;
        }
        
        if (distance <= a->size / 2)
            ra(a);
        else
            rra(a);
    }
}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    
    // Si no hay argumentos, salimos
    if (argc == 1)
        return (0);
    
    // Inicializamos las pilas
    stack_a = initialize_stack();
    stack_b = initialize_stack();
    if (!stack_a || !stack_b)
    {
        if (stack_a)
            free_stack(stack_a);
        if (stack_b)
            free_stack(stack_b);
        write(2, "Error\n", 6);
        return (1);
    }
    
    // Parseamos los argumentos
    if (!parse_arg(stack_a, argc, argv))
    {
        error_exit(stack_a, stack_b);
        return (1);
    }
    
    // Comprobamos si la pila ya está ordenada
    if (is_sorted(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return (0);
    }
    
    // Ordenamos según el número de elementos
    if (stack_a->size == 2)
        org_two(stack_a);
    else if (stack_a->size == 3)
        org_three(stack_a);
    else
        sort_big(stack_a, stack_b);
    
    // Liberamos la memoria
    free_stack(stack_a);
    free_stack(stack_b);
    
    return (0);
}
