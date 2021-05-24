/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_ceil_floor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:10:32 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/24 12:18:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_ceil_floor(t_rect rec, t_map *map)
{
	long	y;
	long	x;

	y = -1;
	x = rec.x1;
	while (rec.x1 < rec.x3)
	{
		y = -1;
		while (++y < map->rec.y1)
			my_mlx_pixel_put(map->mlx.img, rec.x1, y, map->c_color);
		rec.x1++;
	}
	rec.x1 = x;
	while (rec.x1 < rec.x3)
	{
		y = rec.y3 - 1;
		while (++y < map->res_y)
			my_mlx_pixel_put(map->mlx.img, rec.x1, y, map->f_color);
		rec.x1++;
	}
}
