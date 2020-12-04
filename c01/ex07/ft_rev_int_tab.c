/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiego-d <adiego-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 07:14:06 by adiego-d          #+#    #+#             */
/*   Updated: 2020/11/29 14:49:09 by adiego-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int d_size;
	int count;

	d_size = size - 1;
	count = 0;
	while (count < d_size)
	{
		while (d_size > count)
		{
			temp = tab[d_size];
			tab[d_size] = tab[d_size - 1];
			tab[d_size - 1] = temp;
			d_size--;
		}
		d_size = size - 1;
		count++;
	}
}
