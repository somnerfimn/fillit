/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandrish <vandrish@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 14:24:54 by vandrish          #+#    #+#             */
/*   Updated: 2019/05/15 19:07:28 by vandrish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

static char	**ft_hash_to_abc(char **tetris, int i, int j, char c)
{
	while (tetris[++j])
	{
		i = -1;
		while (tetris[j][++i] != '\0')
			(tetris[j][i] == '#') ? tetris[j][i] = c : 0;
		c++;
	}
	return (tetris);
}

static int	ft_tetr_check(char *tetr, int tetramins, int ii)
{
	t_checker ch;

	ch.counter = 0;
	ch.i = -1;
	ch.bsn = 0;
	ch.dot = 0;
	while (tetr[++ii])
		if (tetr[ii] != '\n' && tetr[ii] != '#' && tetr[ii] != '.')
			return (0);
	if ((int)ft_strlen(tetr) != (tetramins * 20 + tetramins - 1))
		return (0);
	while (tetr[++ch.i])
	{
		ch.counter += NBH1 + NBH2 + NBH3 + NBH4;
		ch.dot += tetr[ch.i] == '.';
		ch.bsn += tetr[ch.i] == '\n';
		if (tetr[ch.i] == '\n' && tetr[ch.i - 1] == '\n')
			if (!(NORM_BSN0 || NORM_BSN1 || NORM_BSN2 || NORM_BSN3 ||
		NORM_BSN4 || NORM_BSN5 || NORM_BSN6 || NORM_BSN7 || NORM_BSN8))
				return (0);
	}
	if ((tetramins * ch.dot % 12 != 0 || tetramins * (ch.bsn + 1) % 5 != 0) ||
	(ch.counter / 6 < tetramins || ch.counter / 8 > tetramins))
		return (0);
	return (1);
}

static int	ft_c_tetr(char *buf, int i, int bsn)
{
	while (buf[++i])
		bsn += (buf[i] == '\n');
	(((bsn + 1) / 5) > 27) ? ft_error(1) : 0;
	return ((bsn + 1) / 5);
}

static char	**ft_sheet(char *array, int count, int i, int j)
{
	char **matrix;

	if (!(matrix = (char**)malloc(sizeof(char*) * count + 1)))
		return (NULL);
	matrix[count] = NULL;
	while (++i < count)
	{
		if (!(matrix[i] = ft_strnew(16)))
			return (NULL);
		matrix[i][16] = '\0';
	}
	count = 0;
	i = -1;
	while (array[++i] != '\0')
	{
		(array[i] != '\n') ? matrix[j][count++] = array[i] : 0;
		if (((i + 1) % 21) == 0)
		{
			j++;
			count = 0;
		}
	}
	free(array);
	return (matrix);
}

int			main(int argc, char **argv)
{
	int		fd;
	int		tetramins;
	int		reads;
	char	*buf;
	char	**tetris;

	(argc != 2) ? ft_error(0) : 0;
	((fd = open(argv[1], O_RDONLY)) == -1) ? ft_error(1) : 0;
	buf = ft_strnew(BUFF_SIZE);
	reads = read(fd, buf, BUFF_SIZE + 1);
	(reads == -1) ? ft_error(1) : 0;
	buf[reads] = '\0';
	tetramins = ft_c_tetr(buf, -1, 0);
	(ft_tetr_check(buf, tetramins, -1) == 0) ? ft_error(1) : 0;
	tetris = ft_sheet(buf, tetramins, -1, 0);
	fillit(ft_hash_to_abc(tetris, -1, -1, ABC), tetramins, 0);
	close(fd);
	return (0);
}
