/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:06:48 by bkocabay          #+#    #+#             */
/*   Updated: 2024/09/02 10:31:10 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_int(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		return (nb);
	}
	else
		return (nb);
}

void	ft_putnbr(int nb)
{
	int		counter;
	char	a[15];

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	nb = check_int(nb);
	a[0] = nb % 10 + '0';
	counter = 1;
	while (nb / 10 != 0)
	{
		nb /= 10;
		a[counter] = nb % 10 + '0';
		counter++;
	}
	counter--;
	while (counter != -1)
	{
		write(1, &a[counter], 1);
		counter--;
	}
}
