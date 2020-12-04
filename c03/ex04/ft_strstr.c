/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:51:48 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/03 22:35:39 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int count2;

	count = 0;
	if (*to_find == '\0')
		return (str);
	while (str[count] != '\0')
	{
		count2 = 0;
		while (str[count + count2] == to_find[count2])
		{
			count2++;
			if (to_find[count2] == '\0')
				return (&str[count]);
		}
		count++;
	}
	return (0);
}
