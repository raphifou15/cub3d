/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_square_mlx_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 21:29:17 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 13:04:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	display_square_mlx_2(t_map *map, int y, int x, int size)
{
	if (map->map[(y / size)][(x / size)] == '1')
	{
		//my_mlx_pixel_put(map->mlx.img, x, y, 255);
	}
	else if (map->map[(y / size)][(x / size)] == '2')
	{
		//my_mlx_pixel_put(map->mlx.img, x, y, map->c_color);
	}
	else if ((map->map[(y / size)][(x / size)] == 'W' ||
		map->map[(y / size)][(x / size)] == 'S' ||
		map->map[(y / size)][(x / size)] == 'N' ||
		map->map[(y / size)][(x / size)] == 'E') &&
		y % size == (size / 2) && x % size == (size / 2))
	{
		if (map->player.x == -1)
		{
			map->player.x = x;
			map->player.y = y;
		}
		//my_mlx_pixel_put(map->mlx.img, x, y, map->f_color);
	}
	else
	{
		//my_mlx_pixel_put(map->mlx.img, x, y, map->f_color);
	}
}
