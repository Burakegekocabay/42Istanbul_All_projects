/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:49:19 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/27 16:16:47 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (n != 0))
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n != 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
