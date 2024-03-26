/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:41:05 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/12/06 10:41:06 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct t_stack
{
	int				num;
	int				id;
	struct t_stack	*next;
}					t_stack;

//		MANDATORY

void	push_swap(char **argv);
int		ft
