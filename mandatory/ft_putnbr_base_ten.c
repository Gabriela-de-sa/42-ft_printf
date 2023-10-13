/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ten.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:08:40 by gde-sa            #+#    #+#             */
/*   Updated: 2023/09/26 17:23:21 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putnbr_base_ten(int n, int *count)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		ft_putchar((char )45, count);
		number = n * -1;
	}
	if (number > 9)
		ft_putnbr_base_ten(number / 10, count);
	ft_putchar(number % 10 + (char )48, count);
}
