/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:07:25 by gde-sa            #+#    #+#             */
/*   Updated: 2023/09/26 17:22:51 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	index;

	index = 0;
	if (!str)
		str = "(null)";
	while (str[index])
	{
		ft_putchar((char) str[index], count);
		index++;
	}
}
