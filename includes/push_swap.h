/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:31:45 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/03/10 20:31:49 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				indice;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

/* Inicialización de pilas */
t_stack	*initialize_stack(void);

/* Operaciones de Push_swap */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
int		rotate_stack(t_stack *stack);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
int		reverse_stack(t_stack *stack);

/* Utilidades */
void	free_stack(t_stack *stack);
void	print_stack(t_stack *stack);
void	push(t_stack *stack, int value);
int		is_sorted(t_stack *stack);
void	error_exit(t_stack *stack_a, t_stack *stack_b);

/* Parseo de argumentos */
int		valid_number(char *str);
int		check_limits(char *str);
int		check_duplicates(t_stack *stack);
int		parse_arg(t_stack *stack, int argc, char **argv);

/* Operaciones de orden */
void	org_two(t_stack *s);
void	org_three(t_stack *s);

/* Funciones auxiliares antes de incluir la libreria completa */
long	ft_atol(const char *str);
int		ft_isdigit(int c);

#endif
