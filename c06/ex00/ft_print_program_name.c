/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:21:23 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 00:53:08 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	line;
	
	line = 0;
	while (argv[0][1] != '\0' && argc > line)
	{
		write(1, &argv[0][line], 1);
		line ++;
	}
	write(1, "\n", 1);
	return 0;
}
