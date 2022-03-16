/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:26:03 by zdasser           #+#    #+#             */
/*   Updated: 2021/12/08 22:33:42 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_puthex(unsigned int nbr,	const char c, int *global);
void	ft_uputnbr(unsigned long nb, int *global);
void	ft_putnbr(int nb, int *global);
void	ft_putstr(char *s, int *global);
int		ft_printf(const char *format, ...);
void	ft_putptr(unsigned long nb, int start, int *global);
void	ft_putchar(char c, int *global);

#endif
