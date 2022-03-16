/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdasser <zdasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:27:19 by zdasser           #+#    #+#             */
/*   Updated: 2021/12/08 03:28:29 by zdasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putstr(char *s, int *global)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			*global += write(1, &s[i], 1);
			i++;
		}
	}
	else
		*global += write(1, "(null)", 6);
}
