/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_left_horse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:13:16 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 16:13:18 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*tetri_left_horse0(char *field)
{
	if (ft_strcmp(field, "##..\n.#..\n.#..\n....\n") == 0)
		return ("##\n.#\n.#");
	if (ft_strcmp(field, ".##.\n..#.\n..#.\n....\n") == 0)
		return ("##\n.#\n.#");
	if (ft_strcmp(field, "..##\n...#\n...#\n....\n") == 0)
		return ("##\n.#\n.#");
	if (ft_strcmp(field, "....\n##..\n.#..\n.#..\n") == 0)
		return ("##\n.#\n.#");
	if (ft_strcmp(field, "....\n.##.\n..#.\n..#.\n") == 0)
		return ("##\n.#\n.#");
	if (ft_strcmp(field, "....\n..##\n...#\n...#\n") == 0)
		return ("##\n.#\n.#");
	return ("NULL");
}

static char	*tetri_left_horse90(char *field)
{
	if (ft_strcmp(field, "..#.\n###.\n....\n....\n") == 0)
		return ("..#\n###");
	if (ft_strcmp(field, "...#\n.###\n....\n....\n") == 0)
		return ("..#\n###");
	if (ft_strcmp(field, "....\n..#.\n###.\n....\n") == 0)
		return ("..#\n###");
	if (ft_strcmp(field, "....\n...#\n.###\n....\n") == 0)
		return ("..#\n###");
	if (ft_strcmp(field, "....\n....\n..#.\n###.\n") == 0)
		return ("..#\n###");
	if (ft_strcmp(field, "....\n....\n...#\n.###\n") == 0)
		return ("..#\n###");
	return ("NULL");
}

static char	*tetri_left_horse180(char *field)
{
	if (ft_strcmp(field, "#...\n#...\n##..\n....\n") == 0)
		return ("#.\n#.\n##");
	if (ft_strcmp(field, ".#..\n.#..\n.##.\n....\n") == 0)
		return ("#.\n#.\n##");
	if (ft_strcmp(field, "..#.\n..#.\n..##\n....\n") == 0)
		return ("#.\n#.\n##");
	if (ft_strcmp(field, "....\n#...\n#...\n##..\n") == 0)
		return ("#.\n#.\n##");
	if (ft_strcmp(field, "....\n.#..\n.#..\n.##.\n") == 0)
		return ("#.\n#.\n##");
	if (ft_strcmp(field, "....\n..#.\n..#.\n..##\n") == 0)
		return ("#.\n#.\n##");
	return ("NULL");
}

static char	*tetri_left_horse270(char *field)
{
	if (ft_strcmp(field, "###.\n#...\n....\n....\n") == 0)
		return ("###\n#..");
	if (ft_strcmp(field, ".###\n.#..\n....\n....\n") == 0)
		return ("###\n#..");
	if (ft_strcmp(field, "....\n###.\n#...\n....\n") == 0)
		return ("###\n#..");
	if (ft_strcmp(field, "....\n.###\n.#..\n....\n") == 0)
		return ("###\n#..");
	if (ft_strcmp(field, "....\n....\n###.\n#...\n") == 0)
		return ("###\n#..");
	if (ft_strcmp(field, "....\n....\n.###\n.#..\n") == 0)
		return ("###\n#..");
	return ("NULL");
}

char		*tetri_left_horse(char *field)
{
	if (ft_strcmp(tetri_left_horse0(field), "##\n.#\n.#") == 0)
		return ("##\n.#\n.#");
	if (ft_strcmp(tetri_left_horse90(field), "..#\n###") == 0)
		return ("..#\n###");
	if (ft_strcmp(tetri_left_horse180(field), "#.\n#.\n##") == 0)
		return ("#.\n#.\n##");
	if (ft_strcmp(tetri_left_horse270(field), "###\n#..") == 0)
		return ("###\n#..");
	return (NULL);
}
