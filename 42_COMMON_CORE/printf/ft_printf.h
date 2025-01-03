/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakegekocabay <burakegekocabay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:47:51 by bkocabay          #+#    #+#             */
/*   Updated: 2024/12/22 20:46:50 by burakegekoc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		get_char(va_list va);
int		get_string(va_list va);
int		get_int(va_list va);
int		get_unsigned(va_list va);
int		get_hex_lower(va_list va);
int		get_hex_upper(va_list va);
int		get_pointer(va_list va);

#endif