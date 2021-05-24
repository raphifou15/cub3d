/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_frame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:14:16 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/17 17:03:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	next_frame(t_map *map)
{
	int	x;
	int	y;

	y = -1;
	if ((map->mlx.img = mlx_new_image(map->mlx.mlx, map->res_x, map->res_y))
		== NULL)
	{
		mlx_destroy_window(map->mlx.mlx, map->mlx.win);
		free(map->mlx.mlx);
		return (0);
	}
	while (map->map[++y])
	{
		x = -1;
		while (map->map[y][++x])
			display_square_mlx(map, y, x, map->player.brick);
	}
	draw_circle(map, map->player.x, map->player.y , 0);
	draw_fov(map, map->player.rotation_angle);
	draw_line(map, map->player.x, map->player.y, map->player.rotation_angle);
	mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->mlx.img, 0, 0);
	mlx_destroy_image(map->mlx.mlx, map->mlx.img);
	return (0);
}
