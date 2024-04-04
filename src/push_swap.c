/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:50:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/12/06 10:50:55 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_choose_algorithm(t_stack **lst_a, t_stack **lst_b)
{
	if (stack_length(*lst_a) == 2)
		return (ft_sa(lst_a, "sa\n"), 0);
	else if (stack_length(*lst_a) == 3)
		sort_three_nums(lst_a);
	else if (stack_length(*lst_a) == 4)
		sort_four_nums(lst_a, lst_b);
	else if (stack_length(*lst_a) == 5)
		sort_five_nums(lst_a, lst_b);
	else
		ft_radix(lst_a, lst_b);
	return (0);
}

int		are_args_sign_nums_or_spaces(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while ((argv[i][j]) && (ft_isdigit(argv[i][j])
				|| (argv[i][j] == ' ')
				|| (argv[i][j] == '-' && ft_isdigit(argv[i][j + 1])
				&& !ft_isdigit(argv[i][j - 1]))
				|| (argv[i][j] == '+' && ft_isdigit(argv[i][j + 1])
				&& !ft_isdigit(argv[i][j - 1]))))
			j++;
		if (argv[i][j] && !ft_isdigit(argv[i][j]))
			return (1);
		i++;
	}
	return (0);
}

t_stack	*conv_args_to_int_and_add(int argc, char **argv)
{
	t_stack 	aux_lst;
	char		**split_result;
	int			i;
	int			j;
	long long	num;
	
	aux_lst = NULL;
	i = 1;
	while (i < argc)
	{
		
		i++;
	}

	return (aux_lst);
}

int		is_number_repeated(t_stack *start)
{
	t_stack *stck_i;
	t_stack *stck_j;
	int		i;

	stck_i = start;
	while (i != NULL)
	{
		
	}
	return (0);
}

void	main(int argc, char **argv)
{
	t_stack	*lst_a;
	t_stack	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	if(argc > 1 && argv[1])
	{
		if (check_sign_numbers_spaces_args(argc, argv) != 0)
			ft_error(1);
		else
		{
			lst_a = convert_args_to_int_add_stack(argc, argv);
			if (lst_a = NULL)
				ft_error(1);
		}
		if (are_nums_ordered(lst_a) != 0)
			return (free_stack(&lst_a), 0);
		if (check_repeated_numbers(lst_a) == 0 && check_numbers_in_order(lst_a) == 0)
			ft_choose_algorithm(&lst_a, &lst_b);
		else
			ft_error(1);
	}
	ft_stk_free(&lst_a);
	ft_stk_free(&lst_b);
}
