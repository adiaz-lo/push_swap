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
		if ()
		else
			ft_error(1);
	}
}
