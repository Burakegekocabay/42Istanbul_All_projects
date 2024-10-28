/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:02:25 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/27 13:50:45 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char	*get_word(char const *s, char c, int *x)
{
	char	*word;
	int		start;
	int		i;

	start = x[0];
	while (s[x[0]] != c && s[x[0]] != '\0')
		x[0]++;
	word = (char *)malloc((x[0] - start) + 1 + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < x[0] - start)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		x[2];

	x[0] = 0;
	x[1] = 0;
	if (s == NULL)
		return (NULL);
	ptr = (char **)malloc((counter(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (s[x[0]] != '\0')
	{
		if (s[x[0]] == c)
			x[0]++;
		else
		{
			ptr[x[1]] = get_word(s, c, x);
			x[1]++;
		}
	}
	ptr[x[1]] = NULL;
	return (ptr);
}
