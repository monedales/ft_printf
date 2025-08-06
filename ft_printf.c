/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:40:47 by maria-ol          #+#    #+#             */
/*   Updated: 2025/08/06 14:38:39 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

//"cspdiuxX"
static int	check_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (1);
	else if (specifier == 'p')
		return (1);
	else if (specifier == 'x')
		return (1);
	else if (specifier == 'X')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	printed_chars;
	va_list	args;
	int		index;

	va_start(args, format);
	index = 0;
	printed_chars = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1])
		{
			printed_chars += check_specifier(format[index + 1], args);
			index++;
		}
		else
		{
			write(1, &format[index], 1);
			printed_chars++;
		}
		index++;
	}
	va_end(args);
	return (printed_chars);
}

int	main(void)
{
	char	*str = "deu bom!";
	char	c = '$';
	int	i = 42;
	int	int_min = -2147483648;
	unsigned int	u = 4294967295;

	printf("<--------->\n");
	printf("\nORIGIN_Total retornado em c: %d\n", printf("%c", c));
	ft_printf("\nFAKE_Total retornado em c: %d\n", ft_printf("%c", c));
	printf("<--------->\n");
	printf("\nORIGIN_Total retornado na str %d\n", printf("%s", str));
	ft_printf("\nFAKE_Total retornado na str %d\n", ft_printf("%s", str));
	printf("<--------->\n");
	printf("\nORIGIN_Total retornado em i: %d\n", printf("%i", i));
	ft_printf("\nFAKE_Total retornado em i: %d\n", ft_printf("%i", i));
	printf("<--------->\n");
	printf("\nORIGIN_Total retornado em int min: %d\n", printf("%d", int_min));
	ft_printf("\nFAKE_Total retornado em int min: %d\n",
		ft_printf("%d", int_min));
	printf("<--------->\n");
	return (0);
}