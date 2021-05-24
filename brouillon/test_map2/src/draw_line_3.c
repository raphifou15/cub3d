/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:24:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 12:21:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_line_3(t_map *map, long x, long y)
{
	long y1;
	long x1;
	long x2;
	long y2;
	t_help	help;

	x2 = map->point.wall_x;
	y2 = map->point.wall_y;
	y1 = (y2 < y) ? y2 : y;
	help.x = (x2 < x) ? x : x2;
	help.y = (y2 < y) ? y : y2;
	while (y1 <= help.y)
	{
		x1 = (x2 < x) ? x2 : x;
		while (x1 <= help.x)
		{
			if ((((x1 - x) * (y2 - y)) - ((y1 - y) * (x2 - x))) == 0)
				my_mlx_pixel_put(map->mlx.img, x1, y1, 0);
			x1++;
		}
		y1++;
	}
}
