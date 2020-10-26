/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:47:50 by isel-jao          #+#    #+#             */
/*   Updated: 2020/10/26 11:06:43 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_ret++;
}

void	ft_putc(void)
{
	int i;

	i = 0;
	while (i++ < g_cf.zeros)
		ft_putchar('0');
	while (i++ <= g_cf.bs)
		ft_putchar(' ');
	ft_putchar(g_cf.value);
	while (i++ <= g_cf.as + 1)
		ft_putchar(' ');
}
