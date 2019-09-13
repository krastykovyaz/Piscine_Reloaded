/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:36:39 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/09 23:30:19 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

#define BUFFER_SIZE 4096

int		main(int ac, char **av)
{
	int		fd;
	char	buffer[BUFFER_SIZE + 1];

	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("No file.\n");
		else
		{
			while (read(fd, buffer,\
					BUFFER_SIZE) != '\0')
				ft_putstr(buffer);
		}
	}
	return (0);
}
