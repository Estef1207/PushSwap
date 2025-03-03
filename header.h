#include <stdio.h>
#include <stdlib.h>

// Define estructuras para las pilas
typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

typedef struct s_stack {
    t_node *top;
    int size;
} t_stack;

// Funciones básicas para manejo de pilas
void initialize_stack(t_stack *stack);
void push(t_stack *stack, int value);
int pop(t_stack *stack);
int peek(t_stack *stack);

// Operaciones de Push_swap
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);
