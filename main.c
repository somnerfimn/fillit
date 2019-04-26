/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:35:37 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 13:35:43 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*reader(char **argv)
{
	int		retur;
	int		fd;
	char	*file_str;
	char	buf[1000];

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
	retur = read(fd, buf, 999);
	if (retur < 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
	file_str = strndup((char *)buf, retur);
	close(fd);
	return (file_str);
}

int		main(int argc, char **argv)
{
	char	*file_str;
	char	**result;

	if (argc != 2)
	{
		ft_putstr("please, write only one argument\n");
		exit(1);
	}
	file_str = reader(argv);
	result = all_tetri(file_str);
}
