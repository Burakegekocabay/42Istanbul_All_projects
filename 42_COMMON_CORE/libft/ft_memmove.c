/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:10:53 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/27 13:33:24 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	size_t			i;

	n_dest = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	i = 0;
	if (n_src < n_dest)
	{
		i = len;
		while (i > 0)
		{
			n_dest[i - 1] = n_src[i - 1];
			i--;
		}
	}
	else if (n_src > n_dest)
		return (ft_memcpy(n_dest, n_src, len));
	return (dst);
}
