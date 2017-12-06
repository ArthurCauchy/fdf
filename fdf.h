/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <acauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 14:03:01 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/06 15:04:15 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define DIRECTION_TOP 'T'
# define DIRECTION_RIGHT 'R'
# define DIRECTION_BOTTOM 'B'
# define DIRECTION_LEFT 'L'

#include <string.h>

typedef struct	s_2dpoint
{
	int	x;
	int	y;
}				t_2dpoint;

typedef struct	s_2dline
{
	t_2dpoint	*origin;
	char		direction;
	int			length;
}				t_2dline;

void	draw_line(void *mlx, void *window, t_2dline *line);

#endif
