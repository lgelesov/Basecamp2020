/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:35:29 by adiego-d          #+#    #+#             */
/*   Updated: 2020/12/02 03:40:44 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int d_size;
	int count;
	int count2;

	d_size = size - 1;
	count = 0;
	count2 = 0;
	while (count2 < d_size)
	{
		while (count < d_size)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp;
			}
			count++;
		}
		count2++;
		count = 0;
	}
}
