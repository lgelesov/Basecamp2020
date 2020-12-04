/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 03:12:26 by lrocigno          #+#    #+#             */
/*   Updated: 2020/12/03 17:50:40 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;
	int ff;

	n = 1;
	if (nb < 0)
	{
		ff = 0;
	}
	else
	{
		ff = 1;
	}
	while (n <= nb)
	{
		ff *= n;
		n++;
	}
	return (ff);
}
