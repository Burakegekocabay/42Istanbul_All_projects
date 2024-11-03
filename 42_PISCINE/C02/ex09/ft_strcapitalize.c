/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:51:12 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/27 16:35:43 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z' ))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] != '\0')
		ft_strlowcase(str);
	if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
			&& !(str[i] >= '0' && str[i] <= '9'))
			if ((str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= 'a' && str[j] <= 'z'))
				str[j] = str[j] - 32;
		i++;
	}
	return (str);
}
