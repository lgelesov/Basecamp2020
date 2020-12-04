/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:48:25 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/03 22:24:25 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	if (n != 0)
	{
		while (s1[count] == s2[count] && s1[count] != '\0' &&
			s2[count] != '\0' && (count < (n - 1)))
		{
			count++;
		}
		return (s1[count] - s2[count]);
	}
	else
	{
		return (0);
	}
}
