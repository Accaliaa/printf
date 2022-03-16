/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:27:12 by zdasser           #+#    #+#             */
/*   Updated: 2021/12/08 03:27:16 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_uputnbr(unsigned long nb, int *global)
{
	if (nb >= 10)
	{
		ft_uputnbr(nb / 10, global);
	}
	ft_putchar((nb % 10 + '0'), global);
}
