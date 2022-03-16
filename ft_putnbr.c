/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:26:23 by zdasser           #+#    #+#             */
/*   Updated: 2021/12/08 21:57:20 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr(int nb, int *global)
{
	if (nb == -2147483648)
	{
		*global += write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb = nb * (-1);
		*global += write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr((nb / 10), global);
	ft_putchar(nb % 10 + '0', global);
}
