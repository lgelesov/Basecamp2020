/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:36:46 by ltrivinh          #+#    #+#             */
/*   Updated: 2020/12/04 22:38:45 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc
{
	int count;

	count = 0;
	while (argv[0][count] != '\0')
	{
		write(1, &argv[0][count], 1);
		count++;
	}
	write(1, "\n", 1);
	(void)argc;
}
