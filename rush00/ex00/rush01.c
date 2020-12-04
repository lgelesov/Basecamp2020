/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 22:03:38 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/11/23 01:40:21 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char ch);

void	rush01(int x, int y)
{
	int c;
	int l;

	c = 1;
	l = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && l > 1 && c > 1))
				ft_putchar('/');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('\\');
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if ((x == 1) || (c == x && x > 1))
				ft_putchar('\n');
			c++;
		}
		l++;
		c = 1;
	}
}
