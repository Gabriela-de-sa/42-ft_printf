/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:57:27 by gabriela          #+#    #+#             */
/*   Updated: 2023/09/26 16:56:51 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *count)
{
	unsigned int	number;

	number = n;
	if (number > 9)
		ft_putnbr_unsigned(number / 10, count);
	ft_putchar(number % 10 + (char )48, count);
}
