/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_stick.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:26:06 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 14:26:07 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*tetri_stick0(char *field)
{
	if (ft_strcmp(field, "#...\n#...\n#...\n#...\n") == 0)
		return ("#\n#\n#\n#");
	if (ft_strcmp(field, ".#..\n.#..\n.#..\n.#..\n") == 0)
		return ("#\n#\n#\n#");
	if (ft_strcmp(field, "..#.\n..#.\n..#.\n..#.\n") == 0)
		return ("#\n#\n#\n#");
	if (ft_strcmp(field, "...#\n...#\n...#\n...#\n") == 0)
		return ("#\n#\n#\n#");
	return ("#");
}

static char	*tetri_stick90(char *field)
{
	if (ft_strcmp(field, "####\n....\n....\n....\n") == 0)
		return ("####");
	if (ft_strcmp(field, "....\n####\n....\n....\n") == 0)
		return ("####");
	if (ft_strcmp(field, "....\n....\n####\n....\n") == 0)
		return ("####");
	if (ft_strcmp(field, "....\n....\n....\n####\n") == 0)
		return ("####");
	return ("#");
}

char		*tetri_stick(char *field)
{
	if (ft_strcmp(tetri_stick0(field), "#\n#\n#\n#") == 0)
		return ("#\n#\n#\n#");
	if (ft_strcmp(tetri_stick90(field), "####") == 0)
		return ("####");
	return (NULL);
}
