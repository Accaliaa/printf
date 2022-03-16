/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:24:38 by zdasser           #+#    #+#             */
/*   Updated: 2022/02/03 18:36:52 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	arg_handle(const char *format, int i, va_list ap, int *global)
{
	if (format[i] == 'c')
		ft_putchar(va_arg(ap, int), global);
	else if (format[i] == 's')
		ft_putstr(va_arg(ap, char *), global);
	else if (format[i] == 'p')
		ft_putptr(va_arg(ap, unsigned long), 1, global);
	if (format[i] == 'd' || format[i] == 'i')
		ft_putnbr(va_arg(ap, int), global);
	else if (format[i] == 'u')
		ft_uputnbr(va_arg(ap, unsigned int), global);
	else if (format[i] == 'x' || format[i] == 'X')
		ft_puthex(va_arg(ap, unsigned int), format[i], global);
	else if (format[i] == '%')
		ft_putchar('%', global);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;
	int		total;

	i = 0;
	total = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			arg_handle(format, i + 1, ap, &total);
			i += 2;
		}
		else
		{
			ft_putchar(format[i], &total);
			i++;
		}
	}
	va_end(ap);
	return (total);
}
