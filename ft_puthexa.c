/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:41:41 by ochangli          #+#    #+#             */
/*   Updated: 2024/01/07 21:23:41 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long nb, int *num, char c)
{
	char	x;
	char	*str;

	str = NULL;
	if (c == 'x' || c == 'p')
		str = "0123456789abcdef";
	else if (c == 'X')
		str = "0123456789ABCDEF";
	if (nb / 16 != 0)
		ft_puthexa(nb / 16, num, c);
	x = str[nb % 16];
	ft_putchar(x, num);
}
