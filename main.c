/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:53:26 by akalmyko          #+#    #+#             */
/*   Updated: 2016/11/19 23:29:22 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int			main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int 	fd2;
	int		result;
	int		iter;
	int		i;

	iter = 4;
	i = 0;
	if (argc < 2)
		printf("usage: ./a.out file1 file2\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		while (i++ < iter)
		{
			printf("\n- - - - - - - - - - - - - - -");
			result = get_next_line(fd, &line);
			printf("\n%d\n", result);
			printf("\"%s\"", line);
			line = NULL;

			printf("\n- - - - - - - - - - - - - - -");
			result = get_next_line(fd2, &line);
			printf("\n%d\n", result);
			printf("\"%s\"", line);
			line = NULL;
		}
		close(fd);
		close(fd2);
	}
	return (0);
}
