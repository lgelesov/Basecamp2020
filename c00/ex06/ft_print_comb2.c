/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:59:13 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/11/30 15:48:03 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_a = '0';
char	g_b = '0';
char	g_c = '0';
char	g_d = '0';

void	ft_print_comb2(void)
{
	while (g_a <= '9')
	{
		while (g_b <= '9')
		{
			while (g_c <= '9')
			{
				while (g_d <= '9')
				{
					if (g_a <= g_c && g_b < g_d)
					{
						printar();
					}
					g_d++;
				}
				g_d = '0';
				g_c++;
			}
			g_c = '0';
			g_b++;
		}
		g_b = '0';
		g_a++;
	}
}

void	printar(void)
{
	char string[5];

	string[0] = g_a;
	string[1] = g_b;
	string[2] = ' ';
	string[3] = g_c;
	string[4] = g_d;
	write(1, string, 5);
	if (!(g_a == '9' && g_b == '8' && g_c == '9' && g_d == '9'))
		write(1, ", ", 2);
}
