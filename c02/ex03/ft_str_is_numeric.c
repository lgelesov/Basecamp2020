/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:23:36 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/02 13:24:24 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= '0' && str[count] <= '9'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
