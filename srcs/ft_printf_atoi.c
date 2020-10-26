/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 23:53:16 by isel-jao          #+#    #+#             */
/*   Updated: 2020/10/26 11:24:31 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_printf_atoi(char *s)
{
	long unsigned	ret;

	ret = 0;
	if (!s)
		return (0);
	while (*s >= '0' && *s <= '9')
	{
		ret = ret * 10 + *s - 48;
		s++;
	}
	return (ret);
}
