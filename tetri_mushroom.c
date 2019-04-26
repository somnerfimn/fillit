/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_mushroom.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:32:38 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 14:32:39 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*tetri_mushroom0(char *field)
{
	if (ft_strcmp(field, "###.\n.#..\n....\n....\n") == 0)
		return ("###\n.#.");
	if (ft_strcmp(field, ".###\n..#.\n....\n....\n") == 0)
		return ("###\n.#.");
	if (ft_strcmp(field, "....\n###.\n.#..\n....\n") == 0)
		return ("###\n.#.");
	if (ft_strcmp(field, "....\n.###\n..#.\n....\n") == 0)
		return ("###\n.#.");
	if (ft_strcmp(field, "....\n....\n###.\n.#..\n") == 0)
		return ("###\n.#.");
	if (ft_strcmp(field, "....\n....\n.###\n..#.\n") == 0)
		return ("###\n.#.");
	return ("NULL");
}

static char	*tetri_mushroom90(char *field)
{
	if (ft_strcmp(field, ".#..\n##..\n.#..\n....\n") == 0)
		return (".#\n##\n.#");
	if (ft_strcmp(field, "..#.\n.##.\n..#.\n....\n") == 0)
		return (".#\n##\n.#");
	if (ft_strcmp(field, "...#\n..##\n...#\n....\n") == 0)
		return (".#\n##\n.#");
	if (ft_strcmp(field, "....\n.#..\n##..\n.#..\n") == 0)
		return (".#\n##\n.#");
	if (ft_strcmp(field, "....\n..#.\n.##.\n..#.\n") == 0)
		return (".#\n##\n.#");
	if (ft_strcmp(field, "....\n...#\n..##\n...#\n") == 0)
		return (".#\n##\n.#");
	return ("NULL");
}

static char	*tetri_mushroom180(char *field)
{
	if (ft_strcmp(field, ".#..\n###.\n....\n....\n") == 0)
		return (".#.\n###");
	if (ft_strcmp(field, "..#.\n.###\n....\n....\n") == 0)
		return (".#.\n###");
	if (ft_strcmp(field, "....\n.#..\n###.\n....\n") == 0)
		return (".#.\n###");
	if (ft_strcmp(field, "....\n..#.\n.###\n....\n") == 0)
		return (".#.\n###");
	if (ft_strcmp(field, "....\n....\n.#..\n###.\n") == 0)
		return (".#.\n###");
	if (ft_strcmp(field, "....\n....\n..#.\n.###\n") == 0)
		return (".#.\n###");
	return ("NULL");
}

static char	*tetri_mushroom270(char *field)
{
	if (ft_strcmp(field, "#...\n##..\n#...\n....\n") == 0)
		return ("#.\n##\n#.");
	if (ft_strcmp(field, ".#..\n.##.\n.#..\n....\n") == 0)
		return ("#.\n##\n#.");
	if (ft_strcmp(field, "..#.\n..##\n..#.\n....\n") == 0)
		return ("#.\n##\n#.");
	if (ft_strcmp(field, "....\n#...\n##..\n#...\n") == 0)
		return ("#.\n##\n#.");
	if (ft_strcmp(field, "....\n.#..\n.##.\n.#..\n") == 0)
		return ("#.\n##\n#.");
	if (ft_strcmp(field, "....\n..#.\n..##\n..#.\n") == 0)
		return ("#.\n##\n#.");
	return ("NULL");
}

char		*tetri_mushroom(char *field)
{
	if (ft_strcmp(tetri_mushroom0(field), "###\n.#.") == 0)
		return ("###\n.#.");
	if (ft_strcmp(tetri_mushroom90(field), ".#\n##\n.#") == 0)
		return (".#\n##\n.#");
	if (ft_strcmp(tetri_mushroom180(field), ".#.\n###") == 0)
		return (".#.\n###");
	if (ft_strcmp(tetri_mushroom270(field), "#.\n##\n#.") == 0)
		return ("#.\n##\n#.");
	return (NULL);
}
