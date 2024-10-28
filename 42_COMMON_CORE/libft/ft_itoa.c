/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:34:25 by bkocabay          #+#    #+#             */
/*   Updated: 2024/10/26 16:18:46 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa_len(int nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		counter++;
	while (nb != 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

static void	int_revchrarray(int n, char *a)
{
	int		counter;

	if (n < 0)
		n = -n;
	a[0] = ((n % 10) + '0');
	counter = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		a[counter++] = n % 10 + '0';
	}
	a[counter] = '\0';
}

char	*ft_itoa(int n)
{
	char	a[15];
	char	*ptr;
	int		counter;
	int		first;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = (char *)malloc(itoa_len(n) + 1);
	if (ptr == NULL)
		return (NULL);
	first = 0;
	if (n < 0)
	{
		ptr[0] = '-';
		first = 1;
		n = -n;
	}
	int_revchrarray(n, a);
	counter = itoa_len(n) - 1;
	while (counter != -1)
		ptr[first++] = a[counter--];
	ptr[first] = '\0';
	return (ptr);
}
