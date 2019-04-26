/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_right_duck.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:15:09 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 14:15:11 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*tetri_right_duck0(char *field)
{
	if (ft_strcmp(field, ".##.\n##..\n....\n....\n") == 0)
		return (".##\n##.");
	if (ft_strcmp(field, "..##\n.##.\n....\n....\n") == 0)
		return (".##\n##.");
	if (ft_strcmp(field, "....\n.##.\n##..\n....\n") == 0)
		return (".##\n##.");
	if (ft_strcmp(field, "....\n..##\n.##.\n....\n") == 0)
		return (".##\n##.");
	if (ft_strcmp(field, "....\n....\n.##.\n##..\n") == 0)
		return (".##\n##.");
	if (ft_strcmp(field, "....\n....\n..##\n.##.\n") == 0)
		return (".##\n##.");
	return ("NULL");
}

static char *tetri_right_duck90(char *field)
{
	if (ft_strcmp(field, "#...\n##..\n.#..\n....\n") == 0)
		return ("#.\n##\n.#");
	if (ft_strcmp(field, ".#..\n.##.\n..#.\n....\n") == 0)
		return ("#.\n##\n.#");
	if (ft_strcmp(field, "..#.\n..##\n...#\n....\n") == 0)
		return ("#.\n##\n.#");
	if (ft_strcmp(field, "....\n#...\n##..\n.#..\n") == 0)
		return ("#.\n##\n.#");
	if (ft_strcmp(field, "....\n.#..\n.##.\n..#.\n") == 0)
		return ("#.\n##\n.#");
	if (ft_strcmp(field, "....\n..#.\n..##\n...#\n") == 0)
		return ("#.\n##\n.#");
	return ("NULL");
}

char		*tetri_right_duck(char *field)
{
	if (ft_strcmp(tetri_right_duck0(field), ".##\n##.") == 0)
		return (".##\n##.");
	if (ft_strcmp(tetri_right_duck90(field), "#.\n##\n.#") == 0)
		return ("#.\n##\n.#");
	return (NULL);
}