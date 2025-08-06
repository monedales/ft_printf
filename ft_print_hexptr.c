/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:13:25 by maria-ol          #+#    #+#             */
/*   Updated: 2025/08/06 20:14:16 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_hexptr(unsigned long n, char specifier)
{
	unsigned long	quo;
	unsigned long	digit;
	size_t			len;
	char			chr;

	len = 0;
	quo = n / 16;
	if (n >= 16)
		len = len + ft_print_hexptr(quo, specifier);
	digit = n - (quo * 16);
	if (digit < 10)
		chr = 48 + digit;
	else if (digit >= 10 && specifier == 'x')
		chr = 'a' + (digit - 10);
	else
		chr = 'A' + (digit - 10);
	len = len + write(1, &chr, 1);
	return (len);
}
