/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:23:09 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/02 13:23:31 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'a' && str[count] <= 'z'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
