/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:15:47 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/11/29 19:43:56 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_while(int nb)
{
	int a;
	int b;

	a = 1;
	b = nb / 10;
	while (b > 0)
	{
		b /= 10;
		a *= 10;
		if (b == 0)
		{
			while (a > 0)
			{
				ft_putchar(nb / a + '0');
				nb = nb % a;
				a /= 10;
			}
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if ((nb / 10) > 0)
	{
		ft_while(nb);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
