/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:23:07 by gabriela          #+#    #+#             */
/*   Updated: 2023/10/11 16:50:33 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_after_percentage(va_list args, char format, int *count)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format == 'p')
		ft_putnbr_pointer(va_arg(args, void *), count);
	else if (format == 'd')
		ft_putnbr_base_ten(va_arg(args, int), count);
	else if (format == 'i')
		ft_putnbr_base_ten(va_arg(args, int), count);
	else if (format == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), count);
	else if (format == 'x' || format == 'X')
		ft_convert_hexa(va_arg(args, int), format, count);
	else if (format == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_after_percentage(args, format[i], &count);
		}
		else
			ft_putchar((char)format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
