/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:35:22 by ochangli          #+#    #+#             */
/*   Updated: 2024/01/09 21:16:07 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check(const char *s, int *sum, va_list list)
{
	if (*s == 'c')
		ft_putchar(va_arg(list, int), sum);
	if (*s == '%')
		ft_putchar('%', sum);
	if (*s == 's')
		ft_putstr(va_arg(list, char *), sum, *s);
	if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(list, int), sum);
	if (*s == 'u')
		ft_put_unsigned(va_arg(list, unsigned int), sum);
	if (*s == 'x' || *s == 'X')
		ft_puthexa(va_arg(list, unsigned int), sum, *s);
	if (*s == 'p')
	{
		ft_putstr("0x", sum, *s);
		ft_puthexa(va_arg(list, unsigned long), sum, *s);
	}
}

int	ft_printf(const char *s, ...)
{
	int		sum;
	va_list	list;

	sum = 0;
	va_start (list, s);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*s)
	{
		if (*s == '%' && !*(s + 1))
			return (sum);
		if (*s == '%')
		{
			s++;
			check(s, &sum, list);
		}
		else
			ft_putchar(*s, &sum);
		s++;
	}
	va_end(list);
	return (sum);
}
#include <stdio.h>
int main(){

	
	printf("fshvfk%z");


}