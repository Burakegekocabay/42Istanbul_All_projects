/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:39:27 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/31 14:19:51 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	writer(int x)
{
	char	arr[2];

	if (x < 10)
	{
		ft_putchar('0');
		ft_putchar(x + '0');
		return ;
	}
	arr[0] = (x / 10) + '0';
	arr[1] = (x % 10) + '0';
	ft_putchar(arr[0]);
	ft_putchar(arr[1]);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			writer(a);
			write(1, " ", 1);
			writer(b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
