/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:16:34 by lrocigno          #+#    #+#             */
/*   Updated: 2020/12/04 10:15:17 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	power;

	power = 0;
	if (nb > 0)
	{
		while (power * power < nb)
		{
			power++;
		}
		if (power * power == nb)
		{
			return (power);
		}
	}
	return (0);
}
