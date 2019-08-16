/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandrish <vandrish@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 11:29:16 by vandrish          #+#    #+#             */
/*   Updated: 2019/05/15 18:12:59 by vandrish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int			c_char(char *str, int i, char c)
{
	if (c == '.')
		while (str[++i] == c)
			;
	else
		while (str[++i] != c)
			;
	return (i);
}

int			ft_error(int err)
{
	if (err == 0)
	{
		ft_putendl("usage: ./fillit input_file");
		exit(0);
	}
	else if (err == 1)
	{
		ft_putendl("error");
		exit(1);
	}
	return (1);
}

static char	**ft_mall_map(int size, int i, int j)
{
	char	**map;

	i = -1;
	if (!(map = (char **)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	map[size] = NULL;
	while (++i < size)
	{
		if (!(map[i] = ft_strnew(size)))
			return (NULL);
		map[i][size] = '\0';
	}
	i = -1;
	while (map[++i])
	{
		j = -1;
		while (++j < size)
			map[i][j] = '.';
	}
	return (map);
}

void		fillit(char **matrix, int nb, int iii)
{
	char	**map;
	int		i;
	int		ii;

	i = 2;
	while (i * i < nb * 4)
		i++;
	map = ft_mall_map(i, -1, -1);
	i = 0;
	while (ft_solver(matrix, map, 0, 0) == 0)
	{
		iii = -1;
		ii = c_char(*map, -1, '\0');
		while (++iii < ii)
			free(map[iii]);
		free(map);
		map = ft_mall_map(++i, -1, -1);
	}
	i = -1;
	while (map[++i])
		ft_putendl(map[i]);
	i = -1;
	while (map[++i])
		free(map[i]);
	free(map);
}
