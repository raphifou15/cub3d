/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:34:32 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:18:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point(t_map *map, int x)
{
	map->ray.camera_x = (2 * x) / (double)map->res_y - 1;
	map->ray.ray_dir_x = map->player.dir_x + map->player.plane_x *
	map->ray.camera_x;
	map->ray.ray_dir_y = map->player.dir_y + map->player.plane_y *
	map->ray.camera_x;
	map->point.map_x = (int)map->player.pos_x;
	map->point.map_y = (int)map->player.pos_y;
	if (map->ray.ray_dir_y == 0)
		map->point.delta_dist_x = 0;
	else
		map->point.delta_dist_x = (map->ray.ray_dir_x == 0) ? 1 : sqrt(1 +
		(map->ray.ray_dir_y * map->ray.ray_dir_y) / (map->ray.ray_dir_x *
		map->ray.ray_dir_x));
	if (map->ray.ray_dir_x == 0)
		map->point.delta_dist_y = 0;
	else
		map->point.delta_dist_y = (map->ray.ray_dir_y == 0) ? 1 : sqrt(1 +
		(map->ray.ray_dir_x * map->ray.ray_dir_x) / (map->ray.ray_dir_y *
		map->ray.ray_dir_y));
	map->point.hit = 0;
	ft_point2(map);
}
