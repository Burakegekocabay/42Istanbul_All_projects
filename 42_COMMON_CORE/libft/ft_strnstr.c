/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:50:43 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/26 13:17:53 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	h_len;
	size_t	i;
	size_t	n_i;

	n_len = ft_strlen(needle);
	h_len = ft_strlen(haystack);
	if (n_len == 0)
		return ((char *)haystack);
	if (n_len > len || n_len > h_len)
		return (NULL);
	i = 0;
	while (i <= len - n_len)
	{
		n_i = 0;
		while (haystack[i + n_i] == needle[n_i] && n_i < n_len)
			n_i++;
		if (n_i == n_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
