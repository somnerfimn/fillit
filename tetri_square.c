/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:54:20 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 13:54:21 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*tetri_square0(char *field)
{
	if (ft_strcmp(field, "##..\n##..\n....\n....\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, ".##.\n.##.\n....\n....\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "..##\n..##\n....\n....\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "....\n##..\n##..\n....\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "....\n.##.\n.##.\n....\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "....\n..##\n..##\n....\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "....\n....\n##..\n##..\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "....\n....\n.##.\n.##.\n") == 0)
		return ("##\n##");
	if (ft_strcmp(field, "....\n....\n..##\n..##\n") == 0)
		return ("##\n##");
	return ("#");
}

char	*tetri_square(char *field)
{
	if (ft_strcmp(tetri_square0(field), "##\n##") == 0)
		return ("##\n##");
	return (NULL);
}