/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:46:38 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/27 16:05:24 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'A') && (str[i] <= 'Z'))
				|| ((str[i] >= 'a') && (str[i] <= 'z'))))
			return (0);
		i++;
	}
	return (1);
}
