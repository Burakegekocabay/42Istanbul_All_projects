/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:58:48 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/26 15:11:38 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
	s = (void *)p;
}
