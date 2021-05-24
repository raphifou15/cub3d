/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:30:25 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 13:06:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_line(t_map *map, int x, int y, double rotation_angle)
{
	double	x2;
	double	y2;
	double	x1;
	double	y1;
	t_help	help;

	//printf("rotation_angle = %f\n", rotation_angle);
	x2 = round(x + cos(rotation_angle) * map->player.brick);
	y2 = round(y + sin(rotation_angle) * map->player.brick);
	y1 = (y2 < y) ? y - map->player.brick : y;
	help.x = (x2 < x) ? x : x + map->player.brick; 
	help.y = (y2 < y) ? y : y + map->player.brick; 
	while (y1 <= help.y)
	{
		x1 = (x2 < x) ? x - map->player.brick : x;
		while (x1 <= help.x)
		{
			if((((x1 - x) * (y2 - y)) - ((y1 - y) * (x2 - x))) == 0)
				my_mlx_pixel_put(map->mlx.img, x1, y1, 0);
			x1++;
		}
		y1++;
	}
}
