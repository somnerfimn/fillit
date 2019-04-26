/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:27:44 by oorlov            #+#    #+#             */
/*   Updated: 2018/12/04 15:27:47 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <sys/wait.h>


typedef struct	s_map
{
	int			size;
	int			piece_count;
	char		**map;
}				t_map;

char			**all_tetri(char *str);
char			*tetri_left_duck(char *square);
char			*tetri_right_duck(char *square);
char			*tetri_left_horse(char *square);
char			*tetri_right_horse(char *square);
char			*tetri_stick(char *square);
char			*tetri_square(char *square);
char			*tetri_mushroom(char *square);

#endif
