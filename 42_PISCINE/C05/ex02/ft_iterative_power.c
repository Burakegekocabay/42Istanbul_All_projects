/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:48:33 by bkocabay          #+#    #+#             */
/*   Updated: 2024/09/01 11:35:26 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
