/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 17:08:08 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/26 17:08:10 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*search_tetri(char *field)
{
	if (tetri_stick(field))
		return (tetri_stick(field));
	if (tetri_square(field))
		return (tetri_square(field));
	if (tetri_mushroom(field))
		return (tetri_mushroom(field));
	if (tetri_left_duck(field))
		return (tetri_left_duck(field));
	if (tetri_right_duck(field))
		return (tetri_right_duck(field));
	if (tetri_right_horse(field))
		return (tetri_right_horse(field));
	if (tetri_left_horse(field))
		return (tetri_left_horse(field));
	exit(1);
	return (NULL);
}

char	**all_tetri(char *result)
{
	char	*field;
	char	**macro;
	int		count;
	int		x;

	count = 0;
	x = 0;
	field = NULL;
	macro = (char **)malloc(sizeof(char *) * 30);
	if (!result || !macro)
	{
		ft_putstr("error\n");
		exit(1);
	}
	while (count < 27 && x == 0)
	{
		field = strndup(result, 20);
		if (!field)
			exit(1);
		if (result[19] != '\n' || result[20] != '\n')
			x = 1;
		else
			result += 21;
		if (x == 1 && result[20] != '\0')
			exit(1);
		macro[count++] = ft_strdup(search_tetri(field));
		if (field)
			free(field);
	}
	macro[count] = NULL;
	return (macro);
}
