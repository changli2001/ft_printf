/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:36:11 by ochangli          #+#    #+#             */
/*   Updated: 2024/01/09 12:55:43 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putnbr(long x, int *num);
void	ft_putchar(int c, int *num);
void	ft_putstr(const char *s, int *num, char c);
void	ft_put_unsigned(unsigned int nbr, int *num);
void	ft_puthexa(unsigned long nb, int *num, char c);

#endif