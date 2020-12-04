/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:26:03 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/02 13:44:27 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int d_count;

	count = 0;
	d_count = 0;
	while (src[count] != '\0')
	{
		if (size && (count < (size - 1)))
		{
			dest[count] = src[count];
			d_count++;
		}
		count++;
	}
	dest[d_count] = '\0';
	return (count);
}
