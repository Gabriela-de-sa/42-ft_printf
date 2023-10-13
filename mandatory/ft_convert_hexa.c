/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:23:54 by gabriela          #+#    #+#             */
/*   Updated: 2023/10/11 16:34:48 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_convert_hexa(unsigned int n, char format, int *count)
{
	char		number[25];
	char		*convert;
	int			index;

	if (format == 'x')
		convert = BASE_HEXA_LOWER;
	else if (format == 'X')
		convert = BASE_HEXA_UPPER;
	index = 0;
	if (n == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	while (n > 0)
	{
		number[index] = convert[n % 16];
		n = n / 16;
		index++;
	}
	while (index--)
		ft_putchar(number[index], count);
}
