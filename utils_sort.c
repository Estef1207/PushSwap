

int	find_median(t_stack s, int size)
{
	int	mediana;
	int	saldo;

	if (size < 2 || !s)
		return ;
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


int	get_median(t_stack stack, int mediana)
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
		if (temp < temp->next)
			small_num = temp;
			temp = 2147483646;
			temp++;




		temp++;
		count++;
	}
}*/


int	is_sorted(t_stack stack)
{
	while (stack && stack->next)
	{
		if (stack->value < stack->next->value)
			return (0);
		stack = stack->next;
	}
		return (1);
}

 
