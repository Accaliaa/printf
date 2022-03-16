/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:26:31 by zdasser           #+#    #+#             */
/*   Updated: 2021/12/08 22:04:27 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putptr(unsigned long nb, int start, int *global)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (nb == 0 && start == 1)
	{
		ft_putstr("0x0", global);
		return ;
	}
	if (start == 1)
		*global += write(1, "0x", 2);
	if (nb < 16)
	{
		*global += write (1, &base[nb], 1);
		return ;
	}
	if (nb >= 16)
	{
		ft_putptr(nb / 16, 0, global);
		ft_putptr(nb % 16, 0, global);
	}
}
