/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 23:42:06 by isel-jao          #+#    #+#             */
/*   Updated: 2020/10/26 11:10:11 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int			ft_numlenu(unsigned int nb)
{
	int i;

	if (nb == 0 && g_syntax.point && !g_syntax.precesion)
		return (0);
	if (nb == 0)
		return (1);
	i = 0;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	ft_putunsigned(unsigned int nb)
{
	int len;
	int i;
	int a;

	if (!g_numf.value && g_syntax.point && !g_syntax.precesion)
		return ;
	i = 0;
	a = 1;
	len = ft_numlenu(nb);
	while (++i < len)
		a *= 10;
	while (a)
	{
		ft_putchar((nb / a) + 48);
		nb %= a;
		a /= 10;
	}
}

void		ft_putu(void)
{
	int i;
	int nb;

	nb = (unsigned)g_numf.value;
	i = 0;
	while (i++ < g_numf.bs)
		ft_putchar(' ');
	i = 0;
	while (i++ < g_numf.zeros)
		ft_putchar('0');
	ft_putunsigned(nb);
	i = 0;
	while (i++ < g_numf.as)
		ft_putchar(' ');
}
