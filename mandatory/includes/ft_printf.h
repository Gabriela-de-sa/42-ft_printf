/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:05:43 by gde-sa            #+#    #+#             */
/*   Updated: 2023/09/26 18:27:57 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

# define BASE_HEXA_LOWER "0123456789abcdef"
# define BASE_HEXA_UPPER "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
void	ft_after_percentage(va_list args, char format, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr_base_ten(int n, int *count);
void	ft_convert_hexa(unsigned int n, char format, int *count);
void	ft_putnbr_unsigned(unsigned int n, int *count);
void	ft_putnbr_pointer(size_t *ptr, int *count);

#endif