/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandrish <vandrish@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:53:14 by vandrish          #+#    #+#             */
/*   Updated: 2019/05/15 19:08:38 by vandrish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 546
# define ABC 'A'
# define NORM_BSN0 (ch.i % 20 == 0 || ch.i % 41 == 0 || ch.i % 62 == 0)
# define NORM_BSN1 (ch.i % 104 == 0 || ch.i % 125 == 0 || ch.i % 146 == 0)
# define NORM_BSN2 (ch.i % 167 == 0 || ch.i % 188 == 0 || ch.i % 209 == 0)
# define NORM_BSN3 (ch.i % 230 == 0 || ch.i % 251 == 0 || ch.i % 272 == 0)
# define NORM_BSN4 (ch.i % 293 == 0 || ch.i % 314 == 0 || ch.i % 335 == 0)
# define NORM_BSN5 (ch.i % 83 == 0 || ch.i % 356 == 0 || ch.i % 377 == 0)
# define NORM_BSN6 (ch.i % 398 == 0 || ch.i % 419 == 0 || ch.i % 440 == 0)
# define NORM_BSN7 (ch.i % 461 == 0 || ch.i % 482 == 0 || ch.i % 503 == 0)
# define NORM_BSN8 (ch.i % 524 == 0 || ch.i % 545 == 0)

# define NBH1 (tetr[ch.i] == '#' && tetr[ch.i + 1] == '#')
# define NBH2 (tetr[ch.i] == '#' && tetr[ch.i - 1] == '#')
# define NBH3 (tetr[ch.i] == '#' && tetr[ch.i + 5] == '#')
# define NBH4 (tetr[ch.i] == '#' && tetr[ch.i - 5] == '#')

# define G_J (j + (k / 4) - (start / 4))
# define G_I (i + (k % 4) - (start % 4))
# define G_JJ (ptr.y + (k / 4) - (ptr.dots / 4))
# define G_II (ptr.x + (k % 4) - (ptr.dots % 4))

typedef struct	s_point
{
	int			x;
	int			y;
	int			dots;
	char		*str;
}				t_point;

typedef struct	s_checker
{
	int			i;
	int			nbh;
	int			bsn;
	int			dot;
	int			counter;
	int			counter1;
	int			checker;
}				t_checker;

void			fillit(char **matrix, int nb, int iii);
int				ft_error(int err);
int				c_char(char *str, int i, char c);
int				ft_solver(char **tetris, char **map, int i, int k);

#endif
