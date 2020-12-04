/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:11:44 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/03 03:12:32 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 126))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

