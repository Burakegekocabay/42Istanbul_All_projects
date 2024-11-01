/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:35:00 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/24 12:59:58 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	size = size - 1;
	start = 0;
	while (size > start)
	{
		temp = tab[start];
		tab[start] = tab[size];
		tab[size] = temp;
		size--;
		start++;
	}
}
