/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <mrivera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:05:39 by mrivera-          #+#    #+#             */
/*   Updated: 2019/07/05 12:55:58 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int		fd;
	int		fd_2;
	char	*line;
	int		status;

	fd = open(argv[1], O_RDONLY);
	while ((status = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	fd_2 = open(argv[2], O_RDONLY);
	while ((status = get_next_line(fd_2, &line)) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd_2);
	return (argc);
}
