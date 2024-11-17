/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:26:38 by bkocabay          #+#    #+#             */
/*   Updated: 2024/11/16 13:04:37 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	control(char c, va_list va)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = get_char(va);
	if (c == 's')
		counter = get_string(va);
	if (c == 'd' || c == 'i')
		counter = get_int(va);
	if (c == 'u')
		counter = get_unsigned(va);
	if (c == 'x')
		counter = get_hex_lower(va);
	if (c == 'X')
		counter = get_hex_upper(va);
	if (c == '%')
		counter = write(1, "%%", 1);
	if (c == 'p')
		counter = get_pointer(va);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	va;
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	va_start(va, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			counter += control(format[++i], va);
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
		i++;
	}
	va_end(va);
	return (counter);
}
