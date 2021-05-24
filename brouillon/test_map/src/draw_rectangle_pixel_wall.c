/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle_pixel_wall.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:34:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/27 09:59:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	draw_rectangle_pixel_wall(t_map *map, long recx, long recy, long z)
{
	recx *= 4;
	if (map->display_0 == 2)
	{
		if ((map->addr[z] + map->addr[z + 1] + map->addr[z + 2] +
		map->addr[z + 3]) <= 0)
		{
			return (recy + 1);
		}
	}
	map->mlx.img->data[(recx) + (map->mlx.img->size_line * recy)] =
	map->addr[z];
	map->mlx.img->data[((recx) + (map->mlx.img->size_line * recy)) + 1] =
	map->addr[z + 1];
	map->mlx.img->data[((recx) + (map->mlx.img->size_line * recy)) + 2] =
	map->addr[z + 2];
	map->mlx.img->data[((recx) + (map->mlx.img->size_line * recy)) + 3] =
	map->addr[z + 3];
	return (recy + 1);
}
