/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:41:34 by ochangli          #+#    #+#             */
/*   Updated: 2024/01/09 18:42:33 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *num, char c)
{
	if (c == 'p')
	{
		while (*s)
		{
			ft_putchar(*s, num);
			s++;
		}
	}
	else if (!s)
		ft_putstr("(null)", num, c);
	else
	{
		while (*s)
		{
			ft_putchar(*s, num);
			s++;
		}
	}
}
#include <stdio.h>