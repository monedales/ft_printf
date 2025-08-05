/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:40:47 by maria-ol          #+#    #+#             */
/*   Updated: 2025/08/05 16:07:50 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	size_t	len;

	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}

//"cspdiuxX"
static int	check_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'd')
		return (1);
	else if (specifier == 'i')
		return (1);
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
			// ft_putchar(format);
			write(1, &format[index], 1);
			printed_chars++;
		}
		index++;
	}
	va_end(args);
	return (printed_chars);
}


#include "ft_printf.h"

int	main(void)
{
	char *str = "deu bom";

	ft_printf("testando? %s\n", str);
	return (0);
}