/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_words.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakegekocabay <burakegekocabay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:41:37 by bkocabay          #+#    #+#             */
/*   Updated: 2024/12/22 20:49:57 by burakegekoc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr(char *p)
{
	int	i;

	i = 0;
	while (p[i] != '\0')
		write(1, &p[i++], 1);
	return (i);
}

int	get_char(va_list va)
{
	char	c;

	c = va_arg(va, int);
	write(1, &c, 1);
	return (1);
}

int	get_string(va_list va)
{
	char	*str;

	str = va_arg(va, char *);
	if (str == NULL)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}
