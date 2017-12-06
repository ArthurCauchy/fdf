/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <acauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:41:44 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/06 15:04:20 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "mlx.h"
#include "fdf.h"

void	draw_line(void *mlx, void *window, t_2dline *line)
{
	int	x;
	int	y;
	int	i;

	x = line->origin->x;
	y = line->origin->y;
	i = 0;
	while (i < line->length)
	{
		mlx_pixel_put(mlx, window, x, y, 0x00FFFFFF);
		if (line->direction == DIRECTION_TOP)
			--y;
		else if (line->direction == DIRECTION_BOTTOM)
			++y;
		else if (line->direction == DIRECTION_RIGHT)
			++x;
		else if (line->direction == DIRECTION_LEFT)
			--x;
		else
		{
			ft_putendl_fd("error", 2);
			exit(1);
		}
		++i;
	}
}

int		main(int argc, char **argv)
{
	void		*mlx;
	void		*window;
	t_2dpoint	origin;
	t_2dline	line;

	origin.x = 200;
	origin.y = 200;
	line.origin = &origin;
	line.direction = DIRECTION_RIGHT;
	line.length = 75;
	mlx = mlx_init();
	window = mlx_new_window(mlx, 400, 400, "Hi there !");
	draw_line(mlx, window, &line);
	mlx_loop(mlx);
	return (0);
}
