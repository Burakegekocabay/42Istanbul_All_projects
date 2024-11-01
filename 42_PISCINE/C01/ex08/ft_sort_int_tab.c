/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkocabay <bkocabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:16:14 by bkocabay          #+#    #+#             */
/*   Updated: 2024/08/24 13:10:14 by bkocabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	next;
	int	temp;

	start = 0;
	while (start < size)
	{
		next = start + 1;
		while (next < size)
		{
			if (tab[start] > tab[next])
			{
				temp = tab[start];
				tab[start] = tab[next];
				tab[next] = temp;
			}
			next++;
		}
		start++;
	}
}
