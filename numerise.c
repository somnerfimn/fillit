/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numerise.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:50:48 by oorlov            #+#    #+#             */
/*   Updated: 2019/04/27 03:50:49 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		numerise(char **result)
{
	int		number_tetri;
	int		count;

	number_tetri = 0;
	count = 0;
	while (result[number_tetri] != NULL)
	{
		while (result[number_tetri][count] != '\0')
		{
			if (result[number_tetri][count] == '#')
				result[number_tetri][count] = number_tetri + 65;
			count++;
		}
		number_tetri++;
		count = 0;
	}
}
