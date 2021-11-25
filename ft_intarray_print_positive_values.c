/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_print_positive_values.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:35:25 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 14:19:24 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] >= 0)
		{
			ft_print_numbers(tab.data[i]);
			ft_putchar(' ');
		}
		i++;
	}
}
