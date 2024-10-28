/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:18:58 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/26 16:02:52 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start(char const *s1, char const *set)
{
	int	a;
	int	b;

	a = 0;
	while (s1[a] != '\0')
	{
		b = 0;
		while (s1[a] != set[b] && set[b] != '\0')
			b++;
		if (set[b] != '\0')
			a++;
		else
			break ;
	}
	return (a);
}

static int	end(char const *s1, char const *set, int start)
{
	int	a;
	int	b;

	a = ft_strlen(s1) - 1;
	while (a != 0 && a > start)
	{
		b = 0;
		while (s1[a] != set[b] && set[b] != '\0')
			b++;
		if (set[b] != '\0')
			a--;
		else
			break ;
	}
	if (a >= start)
		return (a);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		a;
	int		b;
	int		i;

	i = 0;
	a = start(s1, set);
	b = end(s1, set, a);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	if (b == 0)
		ptr = (char *)malloc(a + 1);
	if (b > 0)
		ptr = (char *)malloc(b - a + 1 + 1);
	if (ptr == NULL)
		return (NULL);
	while (a <= b)
		ptr[i++] = s1[a++];
	ptr[i] = '\0';
	return (ptr);
}
