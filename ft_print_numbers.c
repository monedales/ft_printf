/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:42:06 by maria-ol          #+#    #+#             */
/*   Updated: 2025/08/06 17:03:27 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static int	ft_lendigits(int n)
{
	size_t	count;
	int		is_negative;
	long	num;

	num = n;
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count + is_negative);
}

static int	ft_lendigits_unsigned(unsigned int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	num;

	num = n;
	ft_putnbr_fd(num, 1);
	return (ft_lendigits(n));
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	div;
	int	digit;

	div = n / 10;
	digit = (n % 10) + 48;
	if (div > 0)
		ft_putnbr_unsigned(div);
	ft_putchar_fd(digit, 1);
	return (ft_lendigits_unsigned(n));
}
