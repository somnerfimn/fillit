/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandrish <vandrish@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 11:46:59 by vandrish          #+#    #+#             */
/*   Updated: 2019/05/15 18:21:49 by vandrish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fillit.h"

static int	run_the_map(char **square, char *str, int i, int j)
{
	int	start;
	int	size;
	int	k;

	size = c_char(*square, -1, '\0');
	start = c_char(str, -1, '.');
	k = start - 1;
	while (str[++k] != '\0')
		if (str[k] != '.')
			if ((G_J >= size) || (G_I >= size) ||
			(square[G_J][G_I] != '.'))
				return (1);
	return (0);
}

static char	**clear_back(char **square, char *str, int i, int j)
{
	char	chr;

	chr = str[c_char(str, -1, '.')];
	while (square[++j])
	{
		i = -1;
		while (square[j][++i])
			(square[j][i] == chr) ? square[j][i] = '.' : 0;
	}
	return (square);
}

int			ft_solver(char **tetris, char **map, int i, int k)
{
	t_point	ptr;
	int		ch;

	ch = c_char(*map, -1, '\0');
	if (!tetris[i])
		return (1);
	ptr.y = -1;
	ptr.str = tetris[i];
	while (++ptr.y < ch)
	{
		ptr.x = -1;
		while (++ptr.x < ch)
			if (run_the_map(map, ptr.str, ptr.x, ptr.y) == 0)
			{
				ptr.dots = c_char(ptr.str, -1, '.');
				k = ptr.dots - 1;
				while (ptr.str[++k])
					(ptr.str[k] != '.') ? map[G_JJ][G_II] = ptr.str[k] : 0;
				if (ft_solver(tetris, map, i + 1, 0) != 1)
					clear_back(map, ptr.str, -1, -1);
				else
					return (1);
			}
	}
	return (0);
}
