/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:38:18 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/27 12:42:40 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (len != 0)
	{
		ptr[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
