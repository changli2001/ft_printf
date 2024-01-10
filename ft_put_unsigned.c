/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:41:49 by ochangli          #+#    #+#             */
/*   Updated: 2024/01/07 18:20:31 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int nbr, int *num)
{
	if (nbr > 9)
		ft_put_unsigned(nbr / 10, num);
	ft_putchar((nbr % 10) + '0', num);
}
