/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:26:09 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/02 13:26:42 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	str = ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (!((str[count - 1] >= 'A' && str[count - 1] <= 'Z') ||
			(str[count - 1] >= 'a' && str[count - 1] <= 'z') ||
			(str[count - 1] >= '0' && str[count - 1] <= '9')))
		{
			if (str[count] >= 'a' && str[count] <= 'z')
			{
				str[count] -= 32;
			}
			else if (str[count] >= 'A' && str[count] <= 'Z')
			{
				str[count] += 32;
			}
		}
		count++;
	}
	return (str);
}
