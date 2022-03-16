/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:26:16 by zdasser           #+#    #+#             */
/*   Updated: 2021/12/08 03:29:25 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_puthex(unsigned int nb,	const char c, int *global)
{
	char	*base;

	if (c == 'X')
		base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	if (nb < 16)
	{
		*global += write(1, &base[nb], 1);
		return ;
	}
	if (nb >= 16)
	{
		ft_puthex(nb / 16, c, global);
		ft_puthex(nb % 16, c, global);
	}
}
