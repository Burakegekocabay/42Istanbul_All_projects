/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:06:22 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/20 10:30:03 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0';
	while (arr[0] <= '9')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '9' && arr[0] < arr[1])
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9' && arr[1] < arr[2])
			{
				write(1, &arr[0], 1);
				write(1, &arr[1], 1);
				write(1, &arr[2], 1);
				if (arr[0] != '7')
					write(1, ", ", 2);
				arr[2] = arr[2] + 1;
			}
			arr[1] = arr[1] + 1;
		}
		arr[0] = arr[0] + 1;
	}
	arr[1] = arr[1] + 1;
}
